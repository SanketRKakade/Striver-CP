#include<iostream>
#include<string>
using namespace std;

int main() {
    string n;
    cin >> n;
    
    // Iterate over each digit in the string
    for (int i = 0; i < n.length(); ++i) {
        // Get the digit as an integer
        int digit = n[i] - '0';
        
        // Invert the digit if it's greater than or equal to 5
        int invertedDigit = 9 - digit;
        
        // We don't want to replace the first digit with zero
        if (i == 0 && invertedDigit == 0) {
            continue;
        }

        // Choose the smaller value between the digit and its inverted value
        if (invertedDigit < digit) {
            n[i] = '0' + invertedDigit;
        }
    }

    cout << n << endl;
    return 0;
}
