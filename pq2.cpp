/*

©Atul Malakar ~ executable :)

Most important why priority queue and not an array or a vector.....
Simply we could also do this with array...but then with the sorting complexity it would result in Time limit exceeded...
So maintaining a min heap is the best way to do so...

*/
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;
const ull MOD=1e9+7;
const int INF = 0x3f3f3f3f;// for integer only
#define PI 3.1415926535897932384626
#define flash ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define debug(x) cout << (#x) << " is " << (x) << endl
#define rep(i,j,k) for(int i=j;i<k;i++)
#define TC int tc;cin>>tc;while(tc--)
#define umap unordered_map
#define uset unordered_set
#define vi vector<int>
#define pb emplace_back
#define po pop_back
#define vsort(x) sort(x.begin(),x.end())
#define vrsort(x) sort(x.begin(),x.end(),greater<int>())
#define pii pair<int,int>
#define mp make_pair
#define ff first
#define ss second
#define endl '\n'
 ll sum[100007]={0};
int main()
{   flash;
    TC
    {
        ll n,k1,k2,k3;
        cin>>n>>k1>>k2>>k3;

        for(int i=1;i<=n;i++){
        cin>>sum[i];

        sum[i]+=sum[i-1]; // Maintaining a Prefix Sum array
    }

       priority_queue<ll,vector<ll>,greater<ll>> p; // A min heap
       ll s=0;
       for(int i=1;i<=n;i++)
            for(int j=i;j<=n;j++)
                {
                    s=(sum[j]-sum[i-1]);
                    if(p.size()<k3)
                    {
                        p.push(s); // We need to only push k3 elements in the priority queue
                    }
                    else
                    {
                        if(p.top()<=s)
                        {
                            p.pop();
                            p.push(s); // If there are more elements than k3 then we would remove the smaller
                        }              //  elements from the min-heap and push the bigger ones
                        else
                            continue;
                    }
                }
        ll a1,a2,a3=0;
        a3=p.top();
        while(!p.empty())   // Finally extracting the elements.....
        {
            if(p.size()==k2)
            {
                a2=p.top();
            }
            if(p.size()==k1)
            {
                a1=p.top();break;
            }
            p.pop();
        }
        cout<<a1<<" "<<a2<<" "<<a3<<endl;
    }
}
