#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int len,i,j,tc,n,cnt;
    cin>>tc;
    getchar();
    while (tc--)
    {
        string st;
        char ch;
        cin>>st;
        cnt=0;
        len=st.size();
        //cout<<s<<endl;
        map<char,int>mp;
        for (i=0; i<len-3; i++)
        {
            mp[st[i]]=1;
            mp[st[i+1]]=1;
            mp[st[i+2]]=1;
            mp[st[i+3]]=1;
            if (mp['c']==1 && mp['h']==1 && mp['e']==1 && mp['f']==1)
                cnt++;
                    ch='c';
                    mp[ch]=0;
                    ch='h';
                    mp[ch]=0;
                    ch='e';
                    mp[ch]=0;
                    ch='f';
                    mp[ch]=0;
        }
        if (cnt!=0)
        {
            cout<<"lovely "<<cnt<<endl;
        }
        else
            cout<<"normal\n";
    }
    return 0;
}
