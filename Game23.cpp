// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
   
    
//     int n,m;
//     cin>>n>>m;
//     int a = m/n;
//     int count=0;
//     if(n==m){
//         cout<<0<<endl;
//     }
//     else if(a%2!=0 && a%3!=0){
//         cout<<-1<<endl;
//     }
//     else{
//         while(a!=1){
//             if(a%2==0){
//                 a=a/2;
//             }else if(a%3==0){
//                 a=a/3;
//             }
//             count++;
//         }
//         cout<<count<<endl;
//     }

    
//     return 0;
// }

// ABOVE SOLUTION EXCEEDS TIME LIMIT

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    if (m % n != 0) {
        cout << -1 << endl; 
        return 0;
    }

    int a = m / n;
    int count = 0;

    if (n == m) {
        cout << 0 << endl;
        return 0;
    }

    while (a % 2 == 0) {
        a /= 2;
        count++;
    }
    while (a % 3 == 0) {
        a /= 3;
        count++;
    }

    if (a != 1) {
        cout << -1 << endl;
    } else {
        cout << count << endl;
    }

    return 0;
}
