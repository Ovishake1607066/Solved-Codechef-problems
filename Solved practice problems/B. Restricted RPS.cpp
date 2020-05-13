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
        ll n,a,b,c,d=0,e=0,f=0;
        cin>>n>>a>>b>>c;
        string s,t="";
        cin>>s;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='R')
            {
                if(b)
                {
                    t+="P";
                    b--;
                    d++;
                }
                else
                {
                    t+="a";
                }
            }
            else if(s[i]=='P')
            {
                if(c)
                {
                    t+="S";
                    c--;
                    d++;
                }
                else
                {
                    t+="a";
                }
            }
            else
            {
                if(a)
                {
                    t+="R";
                    a--;
                    d++;
                }
                else
                {
                    t+="a";
                }
            }
        }
        ll x;
        if(n%2==0)
            x=n/2;
        else
            x=n/2+1;
        if(d>=x)
        {
            for(ll i=0;i<t.size();i++)
            {
                if(t[i]=='a')
                {
                    if(a)
                    {
                        t[i]='R';
                        a--;
                    }
                    else if(b)
                    {
                        t[i]='P';
                        b--;
                    }
                    else
                    {
                        t[i]='S';
                        c--;
                    }
                }
            }
            cout<<"YES"<<endl;
            cout<<t<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}

