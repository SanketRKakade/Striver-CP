#include<bits/stdc++.h>
using namespace std;

int main(){

    int k,n,w;
    cin>>k>>n>>w;
    int totalcost = 0;
    for(int i=1 ; i<=w ; i++) totalcost+=i*k;
    if(totalcost<=n) cout<<0<<endl;
    else cout<<totalcost-n<<endl;
    return 0;
}
