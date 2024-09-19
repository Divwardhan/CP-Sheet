#include<bits/stdc++.h>
using namespace std;
int main(){
    int t ; 
    cin >>t ; 
    while(t--){
        int n , k;
        cin >>n>>k;
        int a[n];
        set<int> p;
        for (int i = 0; i < n; i++)
        {
            cin >>a[i];
            p.insert(a[i]);
        }
        
        if(p.find(k) != p.end()){
            cout<<"YES"<<endl;

        }
        else{
            cout<<"NO"<<endl;
        }
    }
}