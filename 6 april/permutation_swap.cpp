#include<bits/stdc++.h>
using namespace std;
int main()
int minElementsToRemove(vector<int>& arr) {
    int length = arr.size();
    int minRemovals = length - 1; // Maximum possible removals
    
    for (int i = 1; i < length - 1; ++i) {
        if (arr[i - 1] == arr[i + 1]) {
            // If arr[i-1] == arr[i+1], we can remove arr[i]
            minRemovals = min(minRemovals, 1);
        }
    }
    
    // Check if the first and last elements can be removed
    if (arr[0] == arr[1]) {
        minRemovals = min(minRemovals, 1);
    }
    if (arr[length - 1] == arr[length - 2]) {
        minRemovals = min(minRemovals, 1);
    }
    
    if (minRemovals == length - 1) {
        return -1; // It's not possible to make the array not beautiful
    }
    
    return minRemovals;
}
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
vector<int>v;
for(int i=0;i<n;i++)
{
    cin>>v[i];
}
cout<<minElementsToRemove(v)<<endl;
T--;
}
return 0;
}