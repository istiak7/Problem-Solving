#include<bits/stdc++.h>
using namespace std;

void solve(int n)
{
    vector<long long>v;
    for(int i=0; i<n; i++)
    {
        long long x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    long long M,l,h,value;
    cin>>M;
    long long m=1000001;
    for (int i=0; i<v.size()-1; i++)
    {
        long long f_data =  M-v[i];
        int lo=i+1,hi=n-1,flag=0;
        int indx=lower_bound(v.begin()+i+1,v.end(),f_data)-v.begin();
        if(v[indx]==f_data)
        {
            if(m>f_data-v[i])
            {
                l=v[i];
                h=f_data;
                m=f_data-v[i];
            }
        }
    }
    cout<<"Peter should buy books whose prices are "<<l<<" and "<<h<<"."<<'\n';
    cout<<'\n';
}

int main()
{
    int n;
    while( scanf("%d",&n)!=EOF)
    {
        solve( n);
    }
}

