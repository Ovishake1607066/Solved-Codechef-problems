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
        ll a[n+10],b,c=0,d=0;
        loop
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(ll i=0;i<n;i++)
        {
            if(n==1)
            {
                c=1;
                break;
            }
            if(i==0)
            {
                if(a[i+1]-a[i]<=1)
                {
                    b=a[i+1];
                }
                else
                {
                    b=a[i]+1;
                    c++;
                }
            }
            else if(i==n-1)
            {
                if(a[i]-b<=1)
                {
                    b=a[i];
                }
                else
                {
                    c++;
                    b=a[i]+1;
                }
            }
            else if(a[i]-b<=1)
            {
                b=a[i];
            }
            else
            {
                if(a[i+1]-a[i]<=1)
                {
                    b=a[i+1];
                }
                else
                {
                    b=a[i]+1;
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
}

