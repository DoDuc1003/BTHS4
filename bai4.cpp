#include <iostream>
using namespace std;
int main ()
{
    int n; int value;
    cin >> n >> value;
    int dem=0;
    int a[99999];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]==value)  dem ++;
    }
    if(dem > 0) cout <<"YES"<<endl;
    else    cout <<"NO"<<endl;
    return 0;
}
