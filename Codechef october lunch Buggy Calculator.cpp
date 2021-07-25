#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i,j,n,ans,sum,lena,lenb,t;
    string a,b;
    cin>>t;
    while (t--)
    {
        getchar();
        cin>>a>>b;
        vector<int>v;
        int x,y;
        lena=a.size();
        lenb=b.size();
        sum=0;
        if (lena>lenb)
       {
           j=lenb-1;
            for (i=lena-1;i>=0;i--)
        {
            if (j>=0)
            sum=a[i]+b[j]-'0'-'0';
            else
                sum=a[i]-'0';
                //cout<<sum<<endl;
                if (sum>=10)
                    sum-=10;
                v.push_back(sum);
                j--;
        }
       }
        else
       {
           j=lena-1;
            for (i=lenb-1;i>=0;i--)
        {
            if (j>=0)
            sum=a[j]+b[i]-'0'-'0';
            else
                sum=b[i]-'0';
                //cout<<sum<<endl;
                if (sum>=10)
                    sum-=10;
                v.push_back(sum);
                j--;
        }
       }
       lena=v.size();
       int p=0;
       for (i=lena-1;i>=0;i--)
        {
            if (v[i]!=0 || p!=0)
            {
                p=1;
                cout<<v[i];
            }
        }
        if (p==0)
            cout<<p;
       cout<<endl;
    }

    return 0;
}
