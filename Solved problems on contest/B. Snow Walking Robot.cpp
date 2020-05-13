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
    ll q;
    cin>>q;
    while(q--)
    {
        string s;
        string ss="";
        cin>>s;
        ll a,b,l=0,r=0,u=0,d=0,c=0;
        for(ll i=0;i<s.size();i++)
        {
            if(s[i]=='U')
                u++;
            else if(s[i]=='D')
                d++;
            else if(s[i]=='R')
                r++;
            else
                l++;
        }
        u=min(u,d);
        r=min(r,l);
        if(u==0 && r)
            ss+="LR";
        else if(r==0 && u)
        {
            ss+="UD";
        }
        else if(u && d)
        {
            for(ll i=0;i<r;i++)
                ss+="R";
            for(ll i=0;i<u;i++)
                ss+="U";
            for(ll i=0;i<r;i++)
                ss+="L";
            for(ll i=0;i<u;i++)
                ss+="D";
        }
        else
            ss+="";
        cout<<ss.size()<<endl;
        if(ss.size()==0)
            cout<<endl;
        else
            cout<<ss<<endl;
    }
}

