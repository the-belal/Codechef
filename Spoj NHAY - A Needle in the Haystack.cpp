#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string pat,st;
ll temp[100006];
void make_temp()
{
    ll l,m,n,i,j,len;
    len=pat.size();
    j=0;
    temp[0]=0;
    for (i=1;i<len;i++)
    {
        if (pat[i]==pat[j])
        {
            j++;
            temp[i]=j;
        }
        else
        {
            while (j>0)
            {
                j=temp[j-1];
                if (pat[i]==pat[j])
                {
                    temp[i]=j+1;
                    j++;
                    break;
                }

            }
        }
    }
}
int matching()
{
    ll i,j=0,pat_len=pat.size(),st_len=st.size(),n,cnt=0;
    for (i=0;i<st_len;i++)
    {
        if (st[i]==pat[j])
        {
            j++;
            if (j==pat.size())
            {
                cnt++;
                j--;
                cout<<i-j<<endl;
                while (j>0)
                {
                    j=temp[j-1];
                    if (st[i]==pat[j])
                    {
                        j++;
                        break;
                    }
                }


            }
        }
        else
        {
            while (j>0)
            {
                j=temp[j-1];
                if (st[i]==pat[j])
                {
                    j++;
                    break;
                }
            }
        }
    }
    return cnt;
}
int main()
{
    ll i,l,n,m,j,len;
    while (cin>>n)
    {
        getchar();
        getline(cin,pat);
        getline(cin,st);
        make_temp();
        m=matching();
        if (m==0)
            cout<<endl<<endl;
    }
    return 0;
}
