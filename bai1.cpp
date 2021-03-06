#include <iostream>
using namespace std;
int main ()
{
    long n;
    cin >> n;
    int a[99999];
    bool b[99999];
    for(int i=1;i<=n;i++)
    {
        a[i]=i;
        b[i]= true;
    }
    for(int i=2; i<=n; i++)
    {
        for(int j=n;j>i;j--)
        {
            if(j%i==0 && b[j]==true && j>i)  b[j]=false;
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(b[i])    cout <<i<<" ";
    }
    return 0;
}
