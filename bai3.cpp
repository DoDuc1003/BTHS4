#include <bits/stdc++.h>
using namespace std;

long modun(long a, long m)
{
    return a % m;
}
long pow_(long a, long n, long m)
{
    if(n==0)    return 1;
    if(n%2==0){
        return modun (pow(pow_(a,n/2,m),2),m);
    }
    long x =modun (pow(pow_(a,n/2,m),2),m);
    return modun (a*x,m);
}
main(){
    long a, n, m;
    cin >> a >> n >> m;
    a = a%m;
    cout <<pow_(a,n,m)<<endl;

    return 0;
}
