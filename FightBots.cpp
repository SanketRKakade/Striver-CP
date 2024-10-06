#include <bits/stdc++.h>
using namespace std;

bool solve(int sec , int x1 , int y1 , string s){
    
    int n=sec;
    bool canWin = false;
    int i=0;
    int x=0,y=0;
    while(sec!=0 || !canWin){
        if(x==x1 && y==y1){
            canWin = true;
            break;
        } 
        if(s[i]=='R') {x++ ; x1++ ;}
        else if(s[i]=='L') {x-- ;x1--;}
        else if(s[i]=='D') {y-- ; y1--;}
        else if(s[i]=='U') {y++ ; y1++;}
        sec--;
        i++;
    }
    return canWin;
}

// string can_bob_win(int N, int X, int Y, const string &S) {
//     // Initial positions
//     int alice_x = 0, alice_y = 0;
//     int bob_x = X, bob_y = Y;

//     for (char move : S) {
//         // Move Alice according to the current character in S
//         if (move == 'R') {
//             alice_x += 1;
//         } else if (move == 'L') {
//             alice_x -= 1;
//         } else if (move == 'U') {
//             alice_y += 1;
//         } else if (move == 'D') {
//             alice_y -= 1;
//         }

//         // Check if Bob can move to match Alice's position
//         if ((bob_x + 1 == alice_x && bob_y == alice_y) ||
//             (bob_x - 1 == alice_x && bob_y == alice_y) ||
//             (bob_x == alice_x && bob_y + 1 == alice_y) ||
//             (bob_x == alice_x && bob_y - 1 == alice_y) ||
//             (bob_x == alice_x && bob_y == alice_y)) {
//             return "YES";
//         }

//         // Bob can move one step to minimize the distance if he's not winning yet
//         if (bob_x < alice_x) {
//             bob_x += 1;
//         } else if (bob_x > alice_x) {
//             bob_x -= 1;
//         } else if (bob_y < alice_y) {
//             bob_y += 1;
//         } else if (bob_y > alice_y) {
//             bob_y -= 1;
//         }
//     }

//     return "NO";
// }

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        string s;
        cin>>s;
        bool willWin = solve(n,x,y,s);
        if(willWin) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    // int T;
    // cin >> T;
    // while (T--) {
    //     int N, X, Y;
    //     cin >> N >> X >> Y;
    //     string S;
    //     cin >> S;
    //     cout << can_bob_win(N, X, Y, S) << endl;
    // }
    return 0;
}
