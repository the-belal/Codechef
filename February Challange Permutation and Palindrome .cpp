#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct stru{
    int posi;
    char ch;

};
bool cmp (stru i, stru j)
{
    return i.ch>j.ch;
}
int main ()
{
    ll i,j,n,m,cnt,p,len;
    ll tc;
    cin>>tc;
    getchar();
    while (tc--)
    {
        string st,s;
        cin>>st;
        p=-1;
        s+=st;
        stru a[100005];
        //cout<<s<<endl;
        len=st.size();
        map<char,int>mp;
        deque<stru>dq;
        stru x;
        char ch;
        for (i=0;i<len;i++)
        {
            a[i].posi=i;
            a[i].ch=st[i];
            mp[st[i]]++;
        }
        cnt=0;
        for (i=0;i<len;i++)
        {
            if (mp[st[i]]%2==1)
                {
                    p=i;
                    cnt++;
                }
        }
        if (len==2)
            cout<<"1 2\n";
        else if (len==1)
            cout<<"1\n";
       else if (cnt>mp[st[p]])
        {
            cout<<"-1\n";

        }
        else
        {
            sort(a,a+len,cmp);
            for (i=0;i<len;i++)
            {
                if (a[i].posi!=p)
                {
                if (i%2==0)
                dq.push_back(a[i]);
                else
                    dq.push_front(a[i]);
                }
            }
            len=dq.size()/2;
            i=1;
            while (!dq.empty())
            {
                if (i!=1)
                    cout<<' ';
                x=dq.front();
                cout<<x.posi+1;
                if (i==len && p!=-1)
                    cout<<' '<<p+1;
                dq.pop_front();
                i++;
            }
            cout<<endl;
        }
    }
}
