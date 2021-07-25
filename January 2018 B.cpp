#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[705][705];
int main ()
{
    ll i,j,n,m;
    ll tc;
    cin>>tc;
    while (tc--)
    {
        ll maxi=-1;
        ll sum=-1;
        //cout<<"bal\n";
        cin>>n;
        for (i=0;i<n;i++)
        {
            for (j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
            sort(a[i],a[i]+n);
        }
        sum=0;
        maxi=a[n-1][n-1]+1;
        for (i=n-1;i>=0;i--)
        {
            j=n-1;
            int p=0;
            while (j!=-1)
            {
                if (a[i][j]<maxi)
                {
                    maxi=a[i][j];
                    sum+=maxi;
                    p=1;
                    break;
                }
                j--;
            }
            if (p==0)
            {
                sum=-1;
                break;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
