// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef vector<ll> vi;
// #define ff first
// #define ss second
// #define pb push_back
// #define mp make_pair
// #define all(a) a.begin(), a.end()
// #define rall(a) a.rbegin(), a.rend()
// #define loop(i,a,b) for(int i = a; i < b; i++)
// #define rloop(i,a,b) for(int i = a ; i>=b ; i--)

// #ifndef ONLINE_JUDGE
// #else
// #define debug(...) 42
// #endif

// void sortRows(std::vector<std::vector<int>>& matrix) {
//     for (auto& row : matrix) {
//         std::sort(row.begin(), row.end());
//     }
// }

// bool allRowsHaveConstantDifference(const std::vector<std::vector<int>>& matrix, int n) {
//     for (const auto& row : matrix) {
//         for (size_t i = 1; i < row.size(); ++i) {
//             if (row[i] - row[i - 1] != n) {
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// // void printPositions(const vector<int>& v) {
// //     vector<pair<int, int>> indexedVector;
// //     for (size_t i = 0; i < v.size(); ++i) {
// //         indexedVector.push_back({v[i], static_cast<int>(i)});
// //     }

// //     sort(indexedVector.begin(), indexedVector.end());

// //     vector<int> positions(v.size());
// //     for (size_t i = 0; i < indexedVector.size(); ++i) {
// //         positions[indexedVector[i].second] = i + 1;
// //     }

// //     // cout << "Positions of numbers in ascending order (1-based): ";
// //     for (int pos : positions) {
// //         cout << pos << " ";
// //     }
// //     cout << endl;
// // }

// int main() {
//     ios::sync_with_stdio(0);
//     cin.tie(0);

//     int t;
//     cin >> t;
//     while (t--) {
//         int n,m;
//         cin>>n>>m;
//         vector<vector<int>>v(n,vector<int>(m));
//         // vector<int>sk(n);
//         loop(i,0,n){
//             loop(j,0,m){
//                 cin>>v[i][j];
//             }
//         }
//         sortRows(v);
//         // loop(i,0,n){
//         //     loop(j,0,m){
//         //         cout<<v[i][j];
//         //     }
//         //     cout<<endl;
//         // }

//         if(allRowsHaveConstantDifference(v,n)){
//             vector<int>srk;
//             loop(i,0,n){
//                 // cout<<v[i][0];
//                 srk.push_back(v[i][0]);
//             }
//             // loop(i,0,n){
//             //     cout<<srk[i];
//             // }
//             unordered_map<int,int>mapi ;
//             loop(i,0,n){
//                 mapi[srk[i]]=i+1;
//             }            // printPositions(srk);

//             vector<pair<int, int>> vec(mapi.begin(), mapi.end());

//             sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
//                 return a.first < b.first; // Sort by the second element (value)
//             });

//             for(auto i:mapi){
//                 cout<<i.second<<" ";
//             }
//             cout<<endl;
//         }
//         else{
//             cout<<-1<<endl;
//         }

        

//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define loop(i,a,b) for(int i = a; i < b; i++)
#define rloop(i,a,b) for(int i = a; i >= b; i--)

#ifndef ONLINE_JUDGE
#else
#define debug(...) 42
#endif

void sortRows(vector<vector<int>>& matrix) {
    for (auto& row : matrix) {
        sort(row.begin(), row.end());
    }
}

bool allRowsHaveConstantDifference(const vector<vector<int>>& matrix, int n) {
    for (const auto& row : matrix) {
        for (size_t i = 1; i < row.size(); ++i) {
            if (row[i] - row[i - 1] != n) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m));
        loop(i, 0, n) {
            loop(j, 0, m) {
                cin >> v[i][j];
            }
        }
        sortRows(v);

        if (allRowsHaveConstantDifference(v, n)) {
            vector<int> srk;
            loop(i, 0, n) {
                srk.push_back(v[i][0]);
            }

            unordered_map<int, int> mapi;
            loop(i, 0, n) {
                mapi[srk[i]] = i + 1; 
            }

            vector<pair<int, int>> vec(mapi.begin(), mapi.end());

            sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
                return a.first < b.first;
            });

            for (const auto& pair : vec) {
                cout << pair.second << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}