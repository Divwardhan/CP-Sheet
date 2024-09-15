#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        long long n,x,i;
        cin>>n>>x;
        int arr[n];
        for(i=0;i<n;i++)cin>>arr[i];

        int max=2*(x-arr[n-1]);
        for(i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]>max){
                max=arr[i+1]-arr[i];
            }
        }
        if(arr[0]>max)max=arr[0];

        cout<<max<<endl;
        
    }
    return 0;
}
