#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,n,m,len,ans,a,b,cnt,tc;
    string st;
    cin>>tc;
    getchar();
    while (tc--)
    {
        cin>>st;
        len=st.size();
        int sum=0;
        int l=-1,r;
        for (i=0;i<len;i++)
        {
            if (l==-1 && st[i]=='A')
            {
                l=i;
                sum+=1;
            }
            if (st[i]=='A' && l!=-1)
            {
                sum+=i-l;
                l=i;
            }
            if (st[i]=='B')
                l=-1;
        }
        cout<<sum<<' ';
        l=-1;
        sum=0;
        for (i=0;i<len;i++)
        {
            if (l==-1 && st[i]=='B')
            {
                l=i;
                sum+=1;
            }
            if (st[i]=='B' && l!=-1)
            {
                sum+=i-l;
                l=i;
            }
            if (st[i]=='A')
                l=-1;
        }
        cout<<sum<<endl;


    }
    return 0;
}
