#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    while(cin>>t&&t!=0)
    {
        vector<int>v1(t),v2(t);
        for(int i=0;i<t;i++)
        cin>>v1[i]>>v2[i];
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        if(v1==v2)cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
}
