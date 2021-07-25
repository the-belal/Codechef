#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,n,m,x,k,cnt,odd,even,tc;
    cin>>tc;
    while (tc--)
    {
        cin>>n>>m>>x>>k;
        getchar();
        string st;
        cin>>st;
        odd=0;
        even=0;
        int odd_month;
        if (m%2==0)
            odd_month=m/2;
        else
            odd_month=m/2+1;
        int even_month=m-odd_month;
        for (i=0; i<k; i++)
        {
            if (st[i]=='E')
                even++;
            else
                odd++;
        }
        if (n<=((min(even,x)*even_month)+(min(odd,x)*odd_month)))
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
    return 0;
}
