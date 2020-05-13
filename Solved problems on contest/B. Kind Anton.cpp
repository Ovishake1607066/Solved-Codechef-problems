#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
fp=freopen("testcase.txt","r",stdin);
#define ll long long
#define ull unsigned long long
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d\n",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
#define rvs(v) sort(v.begin(), v.end(), greater<long long>());
#define F first
#define S second
#define mp(a,b) make_pair(a,b);
#define fio ios::sync_with_stdio(false); cin.tie(),cout.tie();
#define l 1000000
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+10],b[n+10],c=0,d=0;
        ll m1=0,m2=0;
        loop
        {
            cin>>a[i];
            if(a[i]==1)
                m1++;
            if(a[i]==-1)
                m2++;
        }
        loop
        {
            cin>>b[i];
        }
        for(ll i=n-1; i>=0; i--)
        {
            if(a[i]==1)
                m1--;
            if(a[i]==-1)
                m2--;
            c=b[i]-a[i];
            if(c==0)
            {
                ;
            }
            else if(c<0)
            {
                if(m2>0)
                {
                    ;
                }
                else
                {
                    d=1;
                    break;
                }
            }
            else
            {
                if(m1>0)
                {
                    ;
                }
                else
                {
                    d=1;
                    break;
                }
            }
        }
        if(d)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}

