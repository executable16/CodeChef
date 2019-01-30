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
#define pb emplace_back
#define po pop_back
#define pii pair<int,int>
#define mp make_pair
#define ff first
#define ss second
#define endl '\n'
int main()
{
    flash;
   TC
   {   set<int> row,col;

       int n,k;
       cin>>n>>k;
       int t=k;
       rep(i,1,n+1)
       {
           row.insert(i);
           col.insert(i);
       }
        while(k--)
        {
            int a,b;
            cin>>a>>b;
            row.erase(a);
            col.erase(b);
        }
        auto x=row.begin();
        auto y=col.begin();
        cout<<n-t<<" ";
        for(int i=1;i<=n-t;i++)
        {
            cout<<*x<<" "<<*y<<" ";
            x++;
            y++;
        }
        cout<<endl;

   }
}
