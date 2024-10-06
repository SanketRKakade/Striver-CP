#include <iostream>
using namespace std;

bool canAchieveZeroSum(int ones, int twos) {
    int total = ones + 2 * twos;
    
    if (total & 1) {
        return false;
    } else {
        int half = total / 2;
        if (half % 2 == 0 || (half % 2 != 0 && ones > 0)) {
            return true;
        } else {
            return false;
        }
    }
}

int main() {
    int testCases;
    cin >> testCases;
    
    while (testCases--) {
        int ones, twos;
        cin >> ones >> twos;
        
        if (canAchieveZeroSum(ones, twos)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
