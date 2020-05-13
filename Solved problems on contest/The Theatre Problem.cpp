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
    ll s=0;
    while(t--)
    {
        ll n,a,b=0,d=0,e=0,f=0,t,ans=-1000000000;
        char c;
        cin>>n;
        vector<ll>v1[5],v2[5],v3[5],v4[5];
        while(n--)
        {
            cin>>c>>t;
            if(c=='A')
            {
                if(t==12)
                    v1[0].push_back(1);
                else if(t==3)
                    v1[1].push_back(1);
                else if(t==6)
                    v1[2].push_back(1);
                else
                    v1[3].push_back(1);
            }
            else if(c=='B')
            {
                if(t==12)
                    v2[0].push_back(1);
                else if(t==3)
                    v2[1].push_back(1);
                else if(t==6)
                    v2[2].push_back(1);
                else
                    v2[3].push_back(1);
            }
            else if(c=='C')
            {
                if(t==12)
                    v3[0].push_back(1);
                else if(t==3)
                    v3[1].push_back(1);
                else if(t==6)
                    v3[2].push_back(1);
                else
                    v3[3].push_back(1);
            }
            else
            {
                if(t==12)
                    v4[0].push_back(1);
                else if(t==3)
                    v4[1].push_back(1);
                else if(t==6)
                    v4[2].push_back(1);
                else
                    v4[3].push_back(1);
            }
        }
        for(ll i=0; i<4; i++)
        {
            vector<ll>vec;
            vec.push_back(v1[i].size());
            for(ll j=0; j<4; j++)
            {
                if(j==i)
                    continue;
                vec.push_back(v2[j].size());
                for(ll k=0; k<4; k++)
                {
                    if(k==j || k==i)
                        continue;
                    vec.push_back(v3[k].size());
                    for(ll l=0; l<4; l++)
                    {
                        if(l==i || l==j || l==k)
                            continue;
                        vec.push_back(v4[l].size());
                        vector<ll>va;
                        for(ll aa=0; aa<4; aa++)
                            {
                                va.push_back(vec[aa]);
                                //cout<<vec[aa]<<" ";
                            }
                            //cout<<endl;
                        srt(va);
                        e=0;
                        if(va[0])
                            e+=(va[0]*25);
                        else
                            e-=100;
                        if(va[1])
                            e+=(va[1]*50);
                        else
                            e-=100;
                        if(va[2])
                            e+=(va[2]*75);
                        else
                            e-=100;
                        if(va[3])
                            e+=(va[3]*100);
                        else
                            e-=100;
                        ans=max(e,ans);
                        vec.pop_back();
                    }
                    vec.pop_back();
                }
                vec.pop_back();
            }
            vec.pop_back();
        }
        /*
        vector<ll>v,vv;
        for(ll i=0; i<4; i++)
        {
            vv.push_back(v1[i].size());
            vv.push_back(v2[i].size());
            vv.push_back(v3[i].size());
            vv.push_back(v4[i].size());
        }
        rvs(vv);
        ll x=0;
        for(ll i=0; i<vv.size(); i++)
        {
            for(ll j=0; j<4; j++)
            {
                if(v1[j].size()==vv[i] && mark[1]==0)
                {
                    x++;
                    v.push_back(vv[i]);
                    mark[1]=1;
                }
                else if(v2[j].size()==vv[i] && mark[2]==0)
                {
                    x++;
                    v.push_back(vv[i]);
                    mark[2]=1;
                }
                else if(v3[j].size()==vv[i] && mark[3]==0)
                {
                    x++;
                    v.push_back(vv[i]);
                    mark[3]=1;
                }
                else if(v4[j].size()==vv[i] && mark[4]==0)
                {
                    x++;
                    v.push_back(vv[i]);
                    mark[4]=1;
                }
            }
            if(x>=4)
                break;
        }
        srt(v);
        if(v[0])
            e+=(v[0]*25);
        else
            e-=100;
        if(v[1])
            e+=(v[1]*50);
        else
            e-=100;
        if(v[2])
            e+=(v[2]*75);
        else
            e-=100;
        if(v[3])
            e+=(v[3]*100);
        else
            e-=100;
        cout<<e<<endl;*/
        cout<<ans<<endl;
        s+=ans;
        for(ll i=0; i<1000; i++)
            mark[i]=0;
    }
    cout<<s<<endl;

}

