#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int m,a[10],b,c,d,i;
    int tc;
    cin>>tc;
    while (tc--)
    {
        map<int,int>mp;
        for (i=0;i<4;i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        int p=1;
        for (i=0;i<4;i++)
        {
            if (mp[a[i]]<2)
            {
                p=0;
                break;
            }
        }
        if (p)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
