#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,tc,j,n,m,k,a[205],p;
    cin>>tc;
    while (tc--)
    {
        cin>>n>>k;
        p=-1;
        for (i=0;i<n;i++)
        {
            cin>>a[i];
            p=max(p,a[i]);
        }
        for (i=n;i<n+k;i++)
            a[i]=1000;
        sort(a,a+n+k);
        cout<<a[(n+k)/2]<<endl;
    }
    return 0;
}
