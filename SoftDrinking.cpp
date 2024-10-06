#include<iostream>
using namespace std;

int main(){

    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int toasts = (k*l)/nl;
    int limes = c*d;
    int salt = p/np;
    int ans = (min(toasts,min(limes,salt)))/n;
    cout<<ans;

    return 0;
}