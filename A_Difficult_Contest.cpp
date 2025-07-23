#include <bits/stdc++.h>
using namespace std;

bool is_difficult(const string& s) {
    for(size_t i =0 ;i+2 <s.size(); i++) {
        if((s[i]=='F' && s[i+1]=='F' && s[i+2] =='T') ||
            (s[i] =='N' && s[i+1]=='T'&& s[i+2]== 'T')) {
            return true;
        }
    }
    return false;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        if(!is_difficult(s)){
            cout<<s <<endl;
            continue;
        }
        vector<char> rest;
        int cntF= 0, cntT=0, cntN =0;
        for(char c :s){
            if(c == 'F') cntF++;
            else if(c == 'T')cntT++;
            else if(c == 'N')cntN++;
            else rest.push_back(c);
        }
        for(char c:rest)cout<< c;
        while(cntF && cntT){
            cout<<'F'; 
            cntF--;
            cout<<'T'; 
            cntT--;
        }
        while(cntF--) cout <<'F';
        while(cntT--) cout<<'T';
        while(cntN--) cout<<'N';
        cout<<endl;
    }
    return 0;
}
