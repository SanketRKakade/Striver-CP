#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int numberOfOnes = count(s.begin(), s.end(), '1');
        int sqrt_n = sqrt(n);
        
        if (sqrt_n * sqrt_n != n) {
            cout << "No" << endl;
        } else {
            int shouldBe = 4 * (sqrt_n - 1);
            if (numberOfOnes == shouldBe) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
