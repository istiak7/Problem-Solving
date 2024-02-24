
///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define MP make_pair
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
#define per(i, n) for (int i = n - 1; i >= 0; i--)
#define per1(i, n) for (int i = n; i >= 1; i--)
#define clr_1(x) memset(x, -1, sizeof(x));
#define lb lower_bound
#define up upper_bound
#define endl '\n'
#define optimize()                \
   ios_base ::sync_with_stdio(0); \
   cin.tie(0);                    \
   cout.tie(0);
#define max_size 200001
#define M 1000000

using namespace std;
typedef vector<int> VI;
typedef vector<long long int> VLL;
//// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
bool balanced(string expr)
{
   if (expr == "")
      return true;
   stack<char> st;
   for (int i = 0; i < expr.size(); i++)
   {
      if (st.empty())
         st.push(expr[i]);
      else if (st.top() == '(' && expr[i] == ')' ||
               st.top() == '[' && expr[i] == ']')
         st.pop();
      else
         st.push(expr[i]);
   }
   if (st.empty())
      return true;
   return false;
}
int main()
{
   // optimize();
   int t;
   cin >> t;
   string expr;
   getchar();
   while (t--)
   {
      getline(cin, expr);
      if (balanced(expr))
         printf("Yes\n");
      else
         printf("No\n");
   }
}