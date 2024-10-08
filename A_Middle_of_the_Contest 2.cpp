#include<bits/stdc++.h>
using namespace std;

int main()
{
    int h1, m1, h2, m2;
    char colon;  
    cin >> h1 >> colon >> m1;
    cin >> h2 >> colon >> m2;

    int start = h1 * 60 + m1;
    int end = h2 * 60 + m2;

    int mid = (start + end) / 2;

    int midH = mid / 60;
    int midM = mid % 60;

    cout << setw(2) << setfill('0') << midH << ":" 
         << setw(2) << setfill('0') << midM << endl;

    return 0;
}
