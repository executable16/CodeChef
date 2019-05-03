https://www.spoj.com/problems/NAJPF/


#include<bits/stdc++.h>
using namespace std;
// Prefix Function Z algorithm
vector<int> prefix(string s)
{
    vector<int> pi(s.size());
    int n = s.size();
    pi[0]=0;
    for(int i=1;i<n;i++)
    {
        int j = pi[i-1];
        while(j>0 && s[i]!=s[j])
            j=pi[j-1];
        if(s[i]==s[j])
            j++;
        pi[i]=j;
    }
    return pi;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int TC;
    cin>>TC;
    while(TC--){
    string text;
    string pattern;
    cin>>text>>pattern;
    auto t = pattern.size();
    pattern+="#";
    pattern+=text;
    auto xy = prefix(pattern);
    int count=0;
    int i=1;
    vector<int> ans,ans1;
    for(auto x : xy)
    {
        if(x==t)
            {count++;
        ans.push_back(i);}
        i++;
    }
    if(!count)
        cout<<"Not Found\n";
    else{
    cout<<count<<endl;
    for(auto x : ans)
        {
            auto yy = x - t - t;
            ans1.push_back(yy);
        }
    for(auto x : ans1)
        cout<<x<<" ";
    cout<<endl;
}
}


}
