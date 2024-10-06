#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll solve (ll sx ,ll sy ,ll ex ,ll ey , string dir){
    for(ll i=0 ; i<dir.length() ; i++){
        if(sx < ex && dir[i] == 'E') sx++;
        else if(sx > ex && dir[i] == 'W') sx--;
        else if(sy < ey && dir[i] == 'N') sy++;
        else if(sy > ey && dir[i] == 'S') sy--;

        if(sx == ex && sy == ey){
            return i + 1;
        }
    }

    return -1;
}

int main()
{
    ll t, sx, sy, ex, ey;
    cin >> t;
    cin >> sx >> sy >> ex >> ey;
    string dir;
    cin >> dir;

    cout << solve(sx, sy, ex, ey, dir) << endl;
    return 0;
}
