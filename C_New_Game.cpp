#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <set>

using namespace std;

bool sortByValueDesc(const pair<int, int> &a, const pair<int, int> &b) {
    return a.second > b.second; // Sort by frequency in descending order
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        unordered_map<int, int> count; // To count the frequency of each number
        for (int num : a) {
            count[num]++;
        }

        vector<pair<int, int> > freq(count.begin(), count.end());
        sort(freq.begin(), freq.end(), sortByValueDesc); // Sort by frequency in descending order

        int max_cards = 0; // To store the maximum number of cards taken
        set<int> distinct; // To store distinct card numbers taken
        int last_card = -1; // To keep track of the last chosen card number

        for (int i = 0; i < freq.size(); i++) {
            int current_num = freq[i].first;
            int current_freq = freq[i].second;

            // Check if we can take the current card based on previous selections
            if (distinct.size() < k) {
                // If there are no distinct cards chosen yet
                if (last_card == -1) {
                    distinct.insert(current_num); // Take the distinct number 
                    max_cards += current_freq; // Add all of its cards to max_cards
                    last_card = current_num; // Update the last chosen card
                }
                // If the current number is the same as the last chosen card or greater by 1
                else if (current_num == last_card || current_num == last_card + 1) {
                    distinct.insert(current_num); // Take the distinct number 
                    max_cards += current_freq; // Add all of its cards to max_cards
                    last_card = current_num; // Update the last chosen card
                }
            }
        }

        cout << max_cards << endl; // Output the result
    }
    return 0;
}
