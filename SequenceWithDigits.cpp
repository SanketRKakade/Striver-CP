#include<bits/stdc++.h>
using namespace std;
 
long long findMinDigit(long long a) {
    a = abs(a);
    if (a == 0) return 0;
    long long minDigit = LLONG_MAX;
    while (a > 0) {
        long long digit = a % 10;
        if (digit < minDigit) {
            minDigit = digit;
        }
        a /= 10;
    }
    return minDigit;
}
 
long long findMaxDigit(long long a) {
    a = abs(a);
    if (a == 0) return 0;
    long long maxDigit = LLONG_MIN;
    while (a > 0) {
        long long digit = a % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        a /= 10;
    }
    return maxDigit;
}
 
long long f(long long a, long long k){
    if(k==1) return a;
    long long minDigit = findMinDigit(a);
    long long maxDigit = findMaxDigit(a);
    return f(a + (minDigit * maxDigit), k - 1);
}
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a;
        long long k;
        cin>>a>>k;
        long long ans = f(a, k);
        cout<<ans<<endl;
    }
    return 0;
}
