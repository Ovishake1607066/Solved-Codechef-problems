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
        ll r,c,a,b=0,d=0,j,k;
        cin>>r>>c;
        vector<pair<ll,ll> >v;
        while(1)
        {
            if(r==1 && c==1)
            {
                break;
            }
            if(r==c)
            {
                r-=1;
                c-=1;
            }
            else if(r>c)
            {
                r-=1;
                c+=1;
            }
            else
            {
                r+=1;
                c-=1;
            }
            v.push_back(make_pair(r,c));
            b++;
        }

        for(ll i=0; i<7; i++)
        {
            b++;
            v.push_back(make_pair(++r,++c));
        }
        for(ll i=0; i<3; i++)
        {
            //cout<<b<<endl;
            b++;
            v.push_back(make_pair(--r,--c));
            b++;
            v.push_back(make_pair(++r,--c));
            for(j=r-1,k=c-1;j>=1 && k>=1;j--,k--)
            {
                b++;
                v.push_back(make_pair(j,k));
            }
            r=j+1;
            c=k+1;
            for(j=r-1,k=c+1;j>=1 && k<=8;j--,k++)
            {
                b++;
                v.push_back(make_pair(j,k));
            }
            r=j+1;
            c=k-1;
            for(j=r+1,k=c+1;j<=8 && k<=8;j++,k++)
            {
                b++;
                v.push_back(make_pair(j,k));
            }
            r=j-1;
            c=k-1;
            for(j=r+1,k=c-1;j<=8 && k>=1;j++,k--)
            {
                b++;
                v.push_back(make_pair(j,k));
            }
            r=j-1;
            c=k+1;
        }
        cout<<b<<endl;
        for(ll i=0;i<v.size();i++)
            cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}

