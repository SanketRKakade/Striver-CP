#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        bool found = false;

        
        
        // Check if the first character appears again in s[1..n-2]
        char first_char = s[0];
        for(int i = 1; i < n - 1; ++i){
            if(s[i] == first_char){
                found = true;
                break;
            }
        }
        
        if(!found){
            // Check if the last character appears in s[0..n-3]
            char last_char = s[n-1];
            for(int i = 1; i <= n - 2; ++i){
                if(s[i] == last_char){
                    found = true;
                    break;
                }
            }
        }

        set<string> uniqueChars;
        for (int i = 1; i < s.length() - 1; i++) {
            string singleChar(1, s[i]); 
            uniqueChars.insert(singleChar); 
        }


        // for (const auto& str : uniqueChars) {
        //     cout << str << endl;
        // }

        if(!found){
            if(uniqueChars.size()<n-2){
                found=true;
            }
        }

        

        

        
        
        if(!found){
            cout << "No\n";
        } else {
            cout << "Yes\n";
        }
    }
    return 0;
}