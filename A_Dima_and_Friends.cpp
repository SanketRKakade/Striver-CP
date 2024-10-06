#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> friends_fingers(n);
    int sum_friends = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> friends_fingers[i];
        sum_friends += friends_fingers[i];
    }
    
    int count_ways = 0;
    
    for (int dima_fingers = 1; dima_fingers <= 5; dima_fingers++) {
        int total_fingers = sum_friends + dima_fingers;
        
        if (total_fingers % (n + 1) != 1) {
            count_ways++;
        }
    }
    
    cout << count_ways << endl;
    
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
 
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     int fingersCount=0;
//     for(int i=0 ; i<n ; i++){
//         cin>>v[i];
//         fingersCount+=v[i];
//     }
//     int num;
//     if(fingersCount<=5){
//         num=fingersCount;
//     }
//     else if(fingersCount%(n+1)==0){
//         num=n+1;
//     }
//     else{
//         num=num%(n+1);
//     }
//     int count=0;
//     for(int i=1 ; i<=5 ; i++){
//         if(num+i!=num+(n+1-num+1)){
//             // cout<<i<<endl;
//             count++;
//         }
//     }
//     cout<<count<<endl;
 
//     return 0;
// }