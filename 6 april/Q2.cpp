#include<bits/stdc++.h>
using namespace std;
int winner(int i,int arr[],int k)
{

    int count=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            arr[i+1]=arr[i];
        }
    }
}



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
        int arr[n];
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        v[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]>v[i-1])
            {
                v.push_back(arr[i]);
            }
            else
            {
                v.push_back(v[i-1]);
            }
        }

        


        T--;
    }
return 0;
}
