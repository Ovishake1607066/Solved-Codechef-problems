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
        ll k,n;
        cin>>k>>n;
        ll a,b=0,c=0,d=0;
        char ch;
        loop
        {
            cin>>ch;
            if(ch=='S')
                {
                    mark[i]=0;
                    b++;
                }
            else
                {
                    mark[i]=1;
                    d++;
                }
        }
        for(ll i=0;i<n;i++)
        {
            if(mark[i]==0)
            {
                for(ll j=i+1,l=0;j<n && l<k;j++,l++)
                {
                    if(mark[j]==1)
                    {
                        mark[j]=2;
                        mark[i]=2;
                        c++;
                        break;
                    }
                }
            }
            else if(mark[i]==1)
            {
                for(ll j=i+1,l=0;j<n && l<k;j++,l++)
                {
                    if(mark[j]==0)
                    {
                        mark[j]=2;
                        mark[i]=2;
                        c++;
                        break;
                    }
                }
            }
        }
        b=min(b,d);
        cout<<min(c,b)<<endl;
    }
}

