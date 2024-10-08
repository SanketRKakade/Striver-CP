// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//         long long n,k;
//         cin>>n>>k;
        
//         if(k==1 && n%2!=0){
//             cout<<"No"<<endl;
//         } 
//         else if(k==1 && n%2==0){
//             cout<<"Yes"<<endl;
//         } 
//         else if(k%2!=0 ){
//             if(n%2!=0){
//                 if(((k/2)+1)%2!=0){
//                     cout<<"No"<<endl;
//                 }
//                 else{
//                     cout<<"Yes"<<endl;
//             }
//             }
            
//         }
//         else if(k>1 && (k/2)%2==0){
//             cout<<"Yes"<<endl;
//         }
//         else if(k>1 && (k/2)%2!=0){
//             cout<<"No"<<endl;
//         }
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    while(t--){
        long long n, k;
        cin >> n >> k;
        
        // Case when k == 1
        if(k == 1) {
            if(n % 2 == 0) cout << "YES" << endl;
            else cout << "NO" << endl;
            continue;
        }
        
        // For larger k, the result depends on the parity of n and k
        if((n % 2) == (k % 2) && k * k <= n) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
