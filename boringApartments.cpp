#include<bits/stdc++.h>
using namespace std;

int f(int num){
    int sum=0;
    for(int i=1 ; i<=num ; i++){
        sum += i;
    }
    return sum;
}

int main()
{
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x==1) cout<<1<<endl;
        else if(x==2) cout<<11<<endl;
        else if(x==3) cout<<21<<endl;
        else if(x==4) cout<<31<<endl;
        else if(x==5) cout<<41<<endl;
        else if(x==6) cout<<51<<endl;
        else if(x==7) cout<<61<<endl;
        else if(x==8) cout<<71<<endl;
        else if(x==9) cout<<81<<endl;

        else{
            string s = to_string(x);
            int num = s[0]-'0';
            int n = s.length();
            int ans = (10*(num-1)) + (f(n));
            cout<<ans<<endl;
        }
    }
    return 0;
}