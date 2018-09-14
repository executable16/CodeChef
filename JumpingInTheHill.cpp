#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ull;
typedef long long int ll;
const ull MOD=1e9+7;
#define flash ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define input for(int i=1;i<=n;i++)cin>>a[i];
#define output for(int i=0;i<n;i++)cout<<a[i]<<" ";
int main()
{
int tc,c=0;
cin>>tc;
while(tc--)
{
ll n,u,d;
cin>>n>>u>>d;
ll a[n];
input;
ll pos=1,par=1;
for(int i=1;i<n;i++)
{
    if(a[i]<=a[i+1] && a[i+1]-a[i]<=u)
    {
        pos=i+1;// upper jump
                
    }
    else
       {
        if((a[i]>=a[i+1]) && (a[i]-a[i+1]>d) && (par==1))
    {
        pos=i+1;par=0; // lower jump with para
        
       
    }
        else if(a[i]>=a[i+1] && a[i]-a[i+1]<=d )
        {
            pos=i+1; //  lower jump
            
        }
       }
       if(pos!=i+1)
       {
          break;
       }
}
cout<<pos<<endl;
}
return 0;
}
