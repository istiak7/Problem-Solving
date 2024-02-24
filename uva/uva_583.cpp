#include <bits/stdc++.h>
#define pb push_back
#define ll long long int
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
using namespace std;
vector<ll> ans;
void prime_fact(ll n)
{
    while (n % 2 == 0)
    {
        n /= 2;
        ans.pb(2);
    }
    for (ll i = 3; i * i <= n; i += 2)
    {

        if (n % i == 0)
        {
            while (n % i == 0)
            {
                n /= i;
                ans.pb(i);
            }
        }
    }
    if (n != 1)
        ans.pb(n);
}

int main()
{
    // optimize();
    ll n;
    while (scanf("%lld", &n))
    {
        ll nn = n;
        if (n == 0)
            return 0;
        if (n < 0)
            ans.pb(-1), n = -(n);
        prime_fact(n);
        printf("%lld = ", nn);
        for (ll i = 0; i < ans.size(); i++)
        {
            printf("%lld", ans[i]);
            if (i + 1 < ans.size())
                printf(" x ");
        }
        printf("\n");
        ans.clear();
    }
}