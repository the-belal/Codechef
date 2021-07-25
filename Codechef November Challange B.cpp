#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[1000005];
int main ()
{
    ll i,j,n,tc,m,tar,chk,len;
    cin>>tc;
    while (tc--)
    {
        cin>>n>>tar;
        for (i=0;i<n;i++)
        {
            cin>>a[i];
        }
        chk=1;
        vector<ll>l;
        vector<ll>r;
        for (i=0;i<n-1;i++)
        {
            if (a[i]>tar)
               r.push_back(a[i]);
            else
             if (a[i]<tar)
               l.push_back(a[i]);
        }
        len=r.size();
        for (i=0;i<len-1;i++)
        {
            if (r[i]<r[i+1])
            {
                chk=0;
                break;
            }
        }
        len=l.size();
        for (i=0;i<len-1;i++)
        {
            if (l[i]>l[i+1])
            {
                chk=0;
                break;
            }
        }
        if (chk==1)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}

