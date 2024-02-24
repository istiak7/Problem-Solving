#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;
vector<int>v;
int ara[1001];
void sieve()
{
    v.pb(1);
    for(int i=2; i<=1000; i++)
    {
        if(ara[i]==0)
        {
            v.pb(i);
            for(int j=i*i; j<=1000; j+=i)
            {
                ara[j]=1;
            }
        }
    }
}

int main()
{
    sieve();
    int n,c;
    while( scanf("%d %d",&n,&c) != EOF )
    {
        cout<<n<<" "<<c<<": ";
        int siz=0;
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]<=n)siz++;
            else break;
        }
        if(siz%2==0)
        {
            if(siz>=(2*c))
            {
                int x=siz-((2*c));
                siz-=x/2;
                for(int i=x/2; i<siz-1; i++)
                    cout<<v[i]<<" ";
                cout<<v[siz-1];

            }
            else
            {
                for(int i=0; i<siz-1; i++)cout<<v[i]<<" ";
                cout<<v[siz-1];
            }
        }
        else
        {
            if(siz>=(2*c)-1)
            {
                int x=siz-((2*c)-1);
                siz-=x/2;
                for(int i=x/2; i<siz-1; i++)
                    cout<<v[i]<<" ";
                cout<<v[siz-1];

            }
            else
            {
                for(int i=0; i<siz-1; i++)cout<<v[i]<<" ";
                cout<<v[siz-1];
            }
        }
        cout<<'\n';
        cout<<'\n';
    }
}
