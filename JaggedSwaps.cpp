#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        int arr[n];
        int sum =0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(n*(n+1)/2 != sum) cout<<"NO"<<endl;
        else{
            int j=1;
            bool flag=true;
            int cnt=0;
            int maincnt=0;
            while(flag){
               
                if(arr[j-1]<arr[j] && arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    cnt++;
                    maincnt=0;
                     j++;
                    
                }
                else{
                    maincnt++;
                     j++;
                }
                if(j==n-1){
                    cnt=0;
                    j=1;
                }
                if(maincnt == n-1){
                    flag=false;
                }
                
            }
            if(is_sorted(arr,arr+n)){
                cout<<"YES"<<endl;
            }
            else cout<<"NO"<<endl;

        }
    }
}