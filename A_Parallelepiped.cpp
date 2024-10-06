#include<bits/stdc++.h>
using namespace std;

int main()
{
    int lb , lh , bh;
    cin>>lb>>lh>>bh;
    int l = sqrt((lh*lb)/bh);
    int b = sqrt((lb*bh)/lh);
    int h = sqrt((lh*bh)/lb);
    cout<<4*(l+b+h);
    return 0;
}