#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int atMost = 2*n;
        int counter = 0;
        for(int j =0 ; j<2 ;j++){
        for(int i=0;i<n;i++){
            if(arr[i]== 1){
                counter++;
                arr[i]++;
                continue;
            }
            if(i!=0){
                if(arr[i]% arr[i-1] != 0){
                    continue;
                }
                else{
                    arr[i]++;
                    counter++;
                }
            }
        }
    }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<' ';
        }
        cout<<endl;
    }
}