#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
     cin >>t;
     while(t--){
        int n , k;
        cin>>n>>k;
        vector <int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin() , a.end());
        int diff=0;
        int count =1 ;
        int maxi=-1;
        for(int i=1;i<n;i++){
            if(a[i]-a[i-1]<=k){
                count++;
            }
            else {
                maxi=max(count,maxi);
                count=1;
            }

        }
        maxi=max(maxi,count);
        cout<<n-maxi<<endl;
     }
}