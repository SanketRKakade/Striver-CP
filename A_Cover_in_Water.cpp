#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;
    
    while (t--) {
        int n; // Number of cells
        string s; // The string representing the cells
        cin >> n >> s;
        
        int actions = 0;
        bool inEmptySegment = false;
        
        // Iterate through the string to identify empty segments
        for (int i = 0; i < n; i++) {
            if (s[i] == '.') {
                // Start of a new segment of empty cells
                if (!inEmptySegment) {
                    actions++;  // We need to place water at the start of this segment
                    inEmptySegment = true;
                }
            } else {
                // End of a segment of empty cells
                inEmptySegment = false;
            }
        }
        
        // Output the result for this test case
        cout << actions << endl;
    }
    
    return 0;
}
