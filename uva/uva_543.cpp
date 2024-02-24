
///*BISMILLAHIR RAHMANIR RAHIM*///
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define optimize() ios_base :: sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define max_size 1000001
using namespace std;
// freopen("input.txt","r",stdin);
// freopen("output.txt","w",stdout);
 vector<int>v;
 int ara[max_size];
 void prime_number(){
    int i,j;
  for(i=2;i<=max_size;i++){
        if(ara[i]==0){ v.pb(i);
        for(j =i+i;j<=max_size;j+=i )
           ara[j]=1;
        }
  }
 }
int main(){
    prime_number();
    int n;
    while(cin>>n){
        if(n==0)return 0;
        int f_data,flag=0;
     for(int i=1;i<v.size();i++){
        if(v[i]>n)break;
        f_data = n - v[i] ;
        if(binary_search(v.begin(),v.end(),f_data)){
            cout<<n<<" = "<<v[i]<<" + "<<f_data<<endl;flag=1;break;
        }
     } if(flag==0)cout<<"Goldbach's conjecture is wrong."<<endl;
    }
}



