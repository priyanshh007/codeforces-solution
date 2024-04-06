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
        string s;
        cin>>s;
        int count1=0;
        int id=0;
        for(int i=0;i<n;i++)
        {
               if(s[i]=='1')
               {
                count1++;
                id=i;
               }
        }
        if(count1==2)
        {
            if(s[id]!=s[id-1])
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if(count1%2==0 && count1!=2)
        {
            cout<<"YES"<<endl;
        } 
        else
        {
            cout<<"NO"<<endl;
        }

        T--;
    }
return 0;
}
