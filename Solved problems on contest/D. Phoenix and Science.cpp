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
ll llmax = numeric_limits<long long>::max();
ll llmin= numeric_limits<long long>::min();
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
        vector<ll>v;
        v.push_back(1);
        ll a,b,c=0,d=0,e=0;
        for(ll i=1; ;i++)
        {
            a=pow(2,i)-1;
            if(a>n)
            {
                b=n-(pow(2,i-1)-1);
                if(b!=0)
                {
                    v.push_back(b);
                }
                c=i-1;
                break;
            }
        }
        for(ll i=1;i<c;i++)
        {
            v.push_back(pow(2,i));
            //cout<<i<<endl;
        }
        srt(v);
        cout<<v.size()-1<<endl;
        for(ll i=1;i<v.size();i++)
            cout<<v[i]-v[i-1]<<" ";
        cout<<endl;
    }
}

