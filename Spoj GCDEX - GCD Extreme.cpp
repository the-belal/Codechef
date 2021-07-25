#include<bits/stdc++.h>
using namespace std;
#define mx 1000005
typedef unsigned long long ll;
ll phi[mx];
ll N[mx];
ll phi_f()
{
    ll i,j,n;
    phi[1]=1;
    for (i=2;i<mx;i++)
    {
        if (!phi[i])
        {
            phi[i]=i-1;
            for (j=2;i*j<mx;j++)
            {
                if (!phi[i*j])
                phi[i*j]=i*j;
                phi[i*j]=((phi[i*j])/i*(i-1));
            }
        }
    }
}
ll gcd()
{
    ll i,j,n,q_sum,res;
    q_sum=0;
    N[1]=0;
    N[0]=0;
    for (i=1;i<mx;i++)
    {
        for (j=2;i*j<mx;j++)
        {
            N[i*j]+=(i*phi[j]);
        }
    }
    N[0]=0;
    for (i=1;i<mx;i++)
    {
        N[i]+=N[i-1];
    }

}
int main ()
{
    ll n,m,i,j,k,ans,sum;
    phi_f();
    gcd();
    while (scanf("%llu",&n)==1)
    {
        if (n==0)
            break;
        printf("%llu\n",N[n]);
    }
    return 0;
}
