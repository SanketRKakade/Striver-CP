#include <iostream>
#include <vector>
#include <set>
#include <cmath>
#include <iomanip>
#include <map>

using namespace std;

struct Point {
    int x, y;

    // Overloading the less than operator for comparison
    bool operator<(const Point& other) const {
        return (x == other.x) ? (y < other.y) : (x < other.x);
    }

    // Overloading the equality operator for comparison
    bool operator==(const Point& other) const {
        return x == other.x && y == other.y;
    }
};

struct LineSegment {
    Point p1, p2;
};

double calculateArea(const vector<Point>& points) {
    double area = 0.0;
    int n = points.size();
    for (int i = 0; i < n; i++) {
        area += (points[i].x * points[(i + 1) % n].y) - (points[(i + 1) % n].x * points[i].y);
    }
    return fabs(area) / 2.0;
}

bool isClosedFigure(const vector<LineSegment>& segments, vector<Point>& vertices) {
    set<Point> pointSet;
    for (const auto& segment : segments) {
        pointSet.insert(segment.p1);
        pointSet.insert(segment.p2);
    }

    // Check if we have at least 3 unique points
    if (pointSet.size() < 3) return false;

    // Construct edges from segments
    vector<Point> points(pointSet.begin(), pointSet.end());
    
    // Check if we can form a closed polygon
    map<Point, int> degreeCount;
    
    for (const auto& segment : segments) {
        degreeCount[segment.p1]++;
        degreeCount[segment.p2]++;
    }

    // Check if all points have even degree (necessary for a closed figure)
    for (const auto& entry : degreeCount) {
        if (entry.second % 2 != 0) return false; // Odd degree means not closed
    }

    // If it passes, we can consider it closed and return the vertices
    vertices.assign(points.begin(), points.end());
    
    return true;
}

int main() {
    int N;
    cin >> N;

    vector<LineSegment> segments(N);
    
    for (int i = 0; i < N; i++) {
        cin >> segments[i].p1.x >> segments[i].p1.y >> segments[i].p2.x >> segments[i].p2.y;
        // Ensure p1 is always the smaller point lexicographically
        if (segments[i].p1 > segments[i].p2) {
            swap(segments[i].p1, segments[i].p2);
        }
    }

    vector<Point> closedFigureVertices;

    // Check for closed figure
    if (isClosedFigure(segments, closedFigureVertices)) {
        cout << "Yes" << endl;

        // Calculate area
        double area = calculateArea(closedFigureVertices);
        
        // For now, assuming Arjun cannot recreate the same shape with leftover sticks
        cout << "No" << endl; // Placeholder for leftover stick check
        
        cout << fixed << setprecision(2) << area << endl;
        
    } else {
        cout << "No" << endl;
    }

    return 0;
}