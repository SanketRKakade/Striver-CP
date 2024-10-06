#include<bits/stdc++.h>
using namespace std;

bool isAns(int n){
    string s = to_string(n);
    set<char>digits(s.begin(),s.end());
    return digits.size()==s.length();
}

int main()
{
    int n;
    cin>>n;
    while(true){
        n++;
        if(isAns(n)){
            cout<<n<<endl;
            break;
        }
    }
    return 0;
}