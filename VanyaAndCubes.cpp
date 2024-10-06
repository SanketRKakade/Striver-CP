// #include<bits/stdc++.h>
// using namespace std;

// int fact(int n){
//     if(n==0) return 1;
//     if(n==1) return 1;
//     return n*fact(n-1);
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int sum=0;
//     int i=0;
//     while(sum<n){
//         sum = sum+fact(i);
//         i++;
//     }
//     i--;
//     if(n==1) cout<<1<<endl;
//     else cout<<i<<endl;
//     return 0;
// }

#include <iostream>

using namespace std;

int maxPyramidHeight(int n) {
    int height = 0;
    int total_cubes = 0;
    int level = 1;

    while (true) {
        int cubes_for_level = (level * (level + 1)) / 2;
        if (total_cubes + cubes_for_level <= n) {
            total_cubes += cubes_for_level;
            height++;
            level++;
        } else {
            break;
        }
    }

    return height;
}

int main() {
    int n;
    cin >> n;

    cout << maxPyramidHeight(n) << endl;

    return 0;
}
