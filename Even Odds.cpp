#include<bits/stdc++.h>
#define f(i,n)          for(int i=0; i<(n); i++)
#define pr(x)           cout<<(#x)<<endl
#define pb(x)           push_back(x);
#define in(x)           int x; cin>>x;
#define lln(x)          ll x; cin>>x;
#define w(t)            int t; cin>>t; while(t--)
#define wi(t)            int t; cin>>t;
#define  fasto          ios::sync_with_stdio(0),cin.tie(0)
#define vec(x)          (x).begin(),(x).end()
#define veci            vector<int>
#define vecc            vector<char>
#define sin             string s; cin>>s
using namespace std;
typedef long long ll;

int main()
{
    ll k,n; cin>>n>>k;
    /*veci e,o;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0) e.insert(e.begin(),i);
        else o.insert(o.begin(),i);
    }
    sort(e.begin(),e.end());
    sort(o.begin(),o.end());
    veci eo;
    eo.reserve(o.size() + e.size() );
    eo.insert( eo.end(), o.begin(), o.end() );
    eo.insert( eo.end(), e.begin(), e.end() );*/

    if(n%2!=0)
    {
        if(k<=(n/2)+1) cout<<(k*2)-1<<endl;
        else           cout<<(k-((n/2)+1))*2<<endl;
    }
    else
    {
        if(k<=n/2)     cout<<(k*2)-1<<endl;
        else           cout<<(k-(n/2))*2<<endl;
    }

}


