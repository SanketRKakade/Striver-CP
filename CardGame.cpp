#include <iostream>
#include <vector>
using namespace std;
 
int count_suneet_wins(int a1, int a2, int b1, int b2) {
    int suneet_wins = 0;
 
    // Possible rounds:
    vector<vector<int> > rounds = {
        {a1, b1, a2, b2},
        {a1, b2, a2, b1},
        {a2, b1, a1, b2},
        {a2, b2, a1, b1}
    };
 
    for (const auto& r : rounds) {
        int suneet_score = 0;
        int slavic_score = 0;
 
        if (r[0] > r[1]) {
            suneet_score++;
        } else if (r[0] < r[1]) {
            slavic_score++;
        }
 
        if (r[2] > r[3]) {
            suneet_score++;
        } else if (r[2] < r[3]) {
            slavic_score++;
        }
 
        if (suneet_score > slavic_score) {
            suneet_wins++;
        }
    }
 
    return suneet_wins;
}
 
int main() {
    int t;
    cin >> t; // Read the number of test cases
 
    for (int i = 0; i < t; i++) {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2; // Read the card values
 
        int result = count_suneet_wins(a1, a2, b1, b2);
        cout << result << endl;
    }
 
    return 0;
}