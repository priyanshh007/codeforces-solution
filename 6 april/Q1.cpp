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
        int n,k;
        cin>>n;
        cin>>k;
        map<char,int>m;
        for(int i=0;i<n;i++)
        {
          char c;
          m[c]++;
        }
        vector<int>v;
        for(auto i:m)
        {
          v.push_back(i.second);
        }
        sort(v.begin(),v.end());
        bool t=true;
        for(int i=0;i<v.size();i++)
        {
          k-=v[i];
          if(k<=0)
          {
            cout<<"YES"<<endl;
            t=!t;
            break;
          }
        }
        if(t)
        {
          cout<<"NO"<<endl;
        }
        T--;
    }
return 0;
}
