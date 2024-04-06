#include<bits/stdc++.h>
using namespace std;
int main()
{
long long mod=1e9+7;
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int T;
cin>>T;
while(T!=0)
{
int n;
cin>>n;
int val;
for(int i=1;i<=n;i++)
{
   int k;
   cin>>k;
   if(abs(k-i)!=0)
   {
    val=__gcd(val,abs(b-i));
   }
   
}
cout<<val<<endl;
T--;
}
return 0;
}