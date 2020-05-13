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
        ll n,s;
        cin>>n>>s;
        vector<ll>v1,v2;
        ll a[n+10],b,c=0,d=0;
        loop
        {
            cin>>a[i];
        }
        loop
        {
            cin>>b;
            if(b==0)
            {
                v1.push_back(a[i]);
            }
            else
            {
                v2.push_back(a[i]);
            }
        }
        if(v1.size()==0 || v2.size()==0)
        {
            cout<<"no"<<endl;
            continue;
        }
        srt(v1);
        srt(v2);
        c=v1[0]+v2[0];
        if(s+c<=100)
        {
            cout<<"yes"<<endl;
        }
        else
        {
            cout<<"no"<<endl;
        }
    }
}
