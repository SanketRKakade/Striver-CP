// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     int count=0;
//     for(int i=0 ; i<n ; i++){
//         cin>>v[i];
//         if(v[i]%2!=0){
//             count++;
//         }
//     }
//     for(int i=0 ; i<n ; i++){
//         if(v[i]%2==0) v[i]/=2;
//         else{
//             if(count%2==0 && v[i]<0) v[i]=v[i]/2;
//             else if(count%2!=0 && v[i]<0) v[i]=v[i]/2-1;
//             else if(v[i]>0) v[i]=v[i]/2+1;

//         }
//         count--;
//         cout<<v[i]<<endl;
//     }
//     // cout<<-3/2<<endl;
//     // cout<<-29/2<<endl;
//     // cout<<-7/2<<endl;

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    
    int sum = 0;  
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        b[i] = a[i] / 2;  
        sum += b[i];
    }

    for (int i = 0; i < n && sum != 0; ++i) {
        if (a[i] % 2 != 0) {  
            if (sum > 0 && a[i] < 0) {
                b[i]--;  
                sum--;
            } else if (sum < 0 && a[i] > 0) {
                b[i]++;  
                sum++;
            }
        }
    }
    
    for (int i = 0; i < n; ++i) {
        cout << b[i] << endl;
    }

    return 0;
}
