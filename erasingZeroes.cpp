#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int first = -1;
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == '1'){
                first = i;
                break;
            } 
        }
        int last = -1;
        for(int i = s.length() - 1 ; i >= 0 ; i--){
            if(s[i] == '1'){
                last = i;
                break;
            } 
        }
        bool isZero = false;
        int count = 0;
        for(int i = first ; i <= last ; i++){
            if(s[i] == '0') {
                isZero = true;
                count++;
            }
        }
        //cout << first << " " << last << " " << isZero << " " << count << endl;
        if(isZero) cout << count << endl;
        else cout << 0 << endl;
    }
    return 0;
}
