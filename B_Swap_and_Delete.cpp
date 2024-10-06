// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         cin>>s;
//         int count1=0,count0=0;
//         for(int i=0 ; i<s.length() ; i++){
//             if(s[i]=='0') count0++;
//             else count1++;
//         }
//         if(count0==count1) cout<<0<<endl;
//         else if(count0!=0 && count1==0){
//             cout<<count0<<endl;
//         }
//         else if(count0==0 && count1!=0){
//             cout<<count1<<endl;
//         }
//         else{
//             cout<<count0+count1-2<<endl;
//         }

//     }
    

//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        
        int blocks = 1; 
        for (int i = 1; i < s.length(); ++i) {
            if (s[i] != s[i-1]) {
                blocks++;
            }
        }
        
        cout << (blocks > 0 ? blocks - 1 : 0) << endl;
    }

    return 0;
}
