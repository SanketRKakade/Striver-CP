#include <iostream>
#include <vector>

using namespace std;

const int MOD = 1000000007;

// Function to calculate binomial coefficients using the wrong formula
void calculateBinomialCoefficients(int max_n, vector<long long>& C) {
    // Initialize the first row of coefficients
    C[0] = 1; // C[0][0] = 1

    for (int n = 1; n <= max_n; n++) {
        // Start from n to 1 to prevent overwriting values
        for (int k = n; k > 0; k--) {
            C[k] = (C[k] + C[k - 1]) % MOD;
        }
        C[0] = 1; // C[n][0] = 1 remains 1
    }
}

int main() {
    int t;
    cin >> t;

    // Read n and k values
    vector<int> n(t), k(t);
    for (int i = 0; i < t; i++) {
        cin >> n[i];
    }
    for (int i = 0; i < t; i++) {
        cin >> k[i];
    }

    // Find the maximum n for creating a table
    int max_n = *max_element(n.begin(), n.end());

    // Create a vector for binomial coefficients
    vector<long long> C(max_n + 1, 0);

    // Calculate coefficients
    calculateBinomialCoefficients(max_n, C);

    // Output the results for each (n[i], k[i])
    for (int i = 0; i < t; i++) {
        cout << C[k[i]] << endl;  // C[n][k] is now C[k] after the loop
    }

    return 0;
}
