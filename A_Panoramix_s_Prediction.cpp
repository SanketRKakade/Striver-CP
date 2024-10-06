#include<bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2 || num == 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int nextPrime(int n) {
    int candidate = n + 1;
    while (!isPrime(candidate)) {
        candidate++;
    }
    return candidate;
}

int main()
{
    int n,m;
    cin>>n>>m;
    if(isPrime(n)&&isPrime(m)){
        if(m==nextPrime(n)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else cout<<"NO"<<endl;

    return 0;
}