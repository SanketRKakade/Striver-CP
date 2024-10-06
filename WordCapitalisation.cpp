#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    int firstCharAscii = s[0];
    // cout<<firstCharAscii<<endl;
    if(firstCharAscii>=97 && firstCharAscii<=122) firstCharAscii -= 32;
    char firstChar = char(firstCharAscii);
    // cout<<firstChar<<endl;
    string newStr = firstChar+s.substr(1,s.length());
    cout<<newStr<<endl;
    return 0;
}