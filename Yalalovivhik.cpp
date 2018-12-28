#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;
const ull MOD=1e9+7;
const int INF = 0x3f3f3f3f;// for integer only
#define PI 3.1415926535897932384626
#define flash ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define watch(x) cout << (#x) << " is " << (x) << endl
#define rep(i,j,k) for(int i=j;i<k;i++)
#define TC int tc;cin>>tc;while(tc--)
#define umap unordered_map
#define uset unordered_set
#define vi vector<int>
#define pb push_back
#define po pop_back
#define pii pair<int,int>
#define mp make_pair
#define ff first
#define ss second
#define endl '\n'
ll modexp(ll base,ll exp) // Modular Exponential
{
    ll res=1;
    while(exp>0){
    if(exp&1)
        res=(res*base)%MOD;
    base=(base*base)%MOD;
    exp=exp>>1;
    }
    return res%MOD;
}
int main()
{
    TC
    {
        string s;
        cin>>s;
        ll n=0;
        int l=s.length();
        for(int i=0;i<s.length();i++)
        {
            n=((n*10)+(s[i]-'0'))%MOD;
        }
        ll temp=n;
        ll mul=modexp(10,l-1);
        for(int i=0;i<l-1;i++)
        {
            ll a=(s[i]-'0');
            //watch(a);

            ll x=(temp-(a*mul)%MOD+MOD)%MOD; // The most important line of the loop, here adding MOD makes it sure that
                                            // x is doesn't turn less than zero ,i.e (x!<0)
            //watch(x);
            ll y=((x*10)%MOD+a%MOD)%MOD;
            //watch(y);
            ll z=((n*((mul*10)%MOD))%MOD+y%MOD)%MOD;
            //watch(z);
            n=z;
            temp=y;
        }
        cout<<n<<endl;
    }
    return 0;
}
