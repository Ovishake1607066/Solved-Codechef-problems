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
ll c=1,d;
ll mark[100000000];
map<ll,ll>m;
void addEdge(vector<ll> v[],
             ll x,
             ll y)
{
    v[x].push_back(y);
    v[y].push_back(x);
}

// A function to print the path between
// the given pair of nodes.
void printPath(vector<ll> stack)
{
    ll i;
    vector<ll>vv;
    for (i = 0; i < (ll)stack.size();
            i++)
    {
        //cout<<stack[i]<<endl;
        ll aa=vv.size();
        if(i==0)
        {
            for(ll j=1; j*j<=mark[stack[i]]; j++)
            {
                if(j*j==mark[stack[i]])
                {
                    if(m[j]==0)
                    {
                        m[j]=1;
                        c=((c%1000000007)+(1))%1000000007;
                        vv.push_back(j);
                    }
                }
                else if(mark[stack[i]]%j==0)
                {
                    ll xx=j;
                    ll yy=mark[stack[i]]/j;
                        if(m[xx]==0)
                        {
                            m[xx]=1;
                            c=((c%1000000007)+(1))%1000000007;
                            vv.push_back(xx);
                        }
                        if(m[yy]==0)
                        {
                            m[yy]=1;
                            c=((c%1000000007)+(1))%1000000007;
                            vv.push_back(yy);
                        }

                }
            }
        }
        else
        {
            for(ll j=1; j*j<=mark[stack[i]]; j++)
            {
                //cout<<j<<endl;
                if(j*j==mark[stack[i]])
                {
                    for(ll k=0; k<aa; k++)
                    {
                        if(m[vv[k]*j]==0)
                        {
                            m[vv[k]*j]=1;
                            c=((c%1000000007)+(1))%1000000007;
                            vv.push_back(vv[k]*j);
                        }
                    }
                }
                else if(mark[stack[i]]%j==0)
                {
                    ll xx=j;
                    ll yy=mark[stack[i]]/j;
                    for(ll k=0; k<aa; k++)
                    {
                        //cout<<k<<"  "<<xx<<endl;
                        if(m[vv[k]*xx]==0)
                        {
                            m[vv[k]*xx]=1;
                            c=((c%1000000007)+(1))%1000000007;
                            vv.push_back(vv[k]*xx);
                        }
                    }
                    for(ll k=0; k<aa; k++)
                    {
                        //cout<<k<<"  "<<yy<<endl;
                        if(m[vv[k]*yy]==0)
                        {
                            m[vv[k]*yy]=1;
                            c=((c%1000000007)+(1))%1000000007;
                            vv.push_back(vv[k]*yy);
                        }
                    }


                }
            }
        }
    }
}

// An utility function to do
// DFS of graph recursively
// from a given vertex x.
void DFS(vector<ll> v[],
         bool vis[],
         ll x,
         ll y,
         vector<ll> stack)
{
    stack.push_back(x);
    if (x == y)
    {

        // print the path and return on
        // reaching the destination node
        printPath(stack);
        return;
    }
    vis[x] = true;

    // A flag variable to keep track
    // if backtracking is taking place
    ll flag = 0;
    if (!v[x].empty())
    {
        for (ll j = 0; j < v[x].size(); j++)
        {
            // if the node is not visited
            if (vis[v[x][j]] == false)
            {
                DFS(v, vis, v[x][j], y, stack);
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {

        // If backtracking is taking
        // place then pop
        stack.pop_back();
    }
}

// A utility function to initialise
// visited for the node and call
// DFS function for a given vertex x.
void DFSCall(ll x,
             ll y,
             vector<ll> v[],
             ll n,
             vector<ll> stack)
{
    // visited array
    bool vis[n + 1];

    memset(vis, false, sizeof(vis));

    // DFS function call
    DFS(v, vis, x, y, stack);
}

int main()
{
    // Create a graph given in the above diagram
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v[n];
        ll a,b,x,y,z;
        for(ll i=0; i<n-1; i++)
        {
            cin>>a>>b;
            addEdge(v, a-1, b-1);
        }
        for(ll i=0; i<n+10; i++)
        {
            mark[i]=0;
        }
        for(ll i=0; i<n; i++)
        {
            cin>>mark[i];
        }
        ll q;
        cin>>q;
        for(ll i=0; i<q; i++)
        {
            c=0;
            d=0;
            m.clear();
            cin>>x>>y;
            vector<ll>stack;
            DFSCall(x-1, y-1, v, n, stack);
            cout<<c<<endl;
        }


    }
}
