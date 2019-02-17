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
int c=0;
int main()
{
    priority_queue<int> maxheap;
    priority_queue<int,vi,greater<int>> minheap;
    int n;
    cin>>n;
    while(n--)
    {
        int a,b;
        cin>>a;
        if(a==1)
        {   ++c;
            cin>>b;
            if(c%3==0)
            {   maxheap.push(b);
                minheap.push(maxheap.top());
                maxheap.pop();
            }
            else{
                if(c>3 && b>minheap.top())
            {
                maxheap.push(minheap.top());
                minheap.pop();
                minheap.push(b);
            }
                else
                {
                    maxheap.push(b);
                }
            }

        }
        else
        {
            if(c<3)
                cout<<"No reviews yet"<<endl;
            else
                cout<<minheap.top()<<endl;
        }
    }
    return 0;
}
