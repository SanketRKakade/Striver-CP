// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         set<int>s;
//         for(int i=1 ; i<=n ; i++){
//             s.insert(i);
//         }
//         if(n%2==0) cout<<n/2<<endl;
//         else cout<<(n/2)+1<<endl;

//         while(!s.empty()){
//             cout<<*s.begin()<<" "<<*s.end()<<endl;
//             s.insert((*s.begin()+*s.end())/2);
//             s.erase(s.begin());
//             s.erase(s.end());
//         }
//     }
//     return 0;
// }

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<pair<int, int>> operations;
        for (int i = n; i > 2; --i) {
            operations.push_back({i, i - 2});
        }
        operations.push_back({n, 1});
        
        cout << 2 << endl;
        for (auto &op : operations) {
            cout << op.first << " " << op.second << endl;
        }
    }
    
    return 0;
}

