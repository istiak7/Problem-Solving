///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max_size 200005
using namespace std;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
   int v (int i,int j){
      int mx=1;
           if(i>j)swap(i,j);
            for(int l=i;l<=j;l++){
             int k=l,c=1;
                while(k!=1){
                    if(k%2==0)k/=2;else k=(3*k)+1;
                    c++;
                }
                mx=max(mx,c);
            }
            return mx;
    }

int main(){
      int i,j;
  while(cin >> i >> j){
        cout<<i<<" "<<j<<" "<<v(i,j)<<endl;
      }
}


