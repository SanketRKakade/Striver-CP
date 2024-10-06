#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    char vowels[] = "aeiouyAEIOUY";
    return find(begin(vowels), end(vowels), c) != end(vowels);
}

int main()
{
    string s;
    cin>>s;
    s.erase(remove_if(s.begin(), s.end(), isVowel), s.end());
    for(int i=0 ; i<s.length() ; i++){
        int ascii = s[i];
        if(ascii>=65 && ascii<=90){
            ascii = ascii+32;
            s[i] = static_cast<char>(ascii);
        }
    }
    string modifiedStr = "";

    for(char c:s){
        modifiedStr += '.';  
        modifiedStr += c;
    }
    cout<<modifiedStr<<endl;
    return 0;
}