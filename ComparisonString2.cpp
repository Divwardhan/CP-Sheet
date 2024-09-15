#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cost = 2;
        int fcost;

        for(int i=0;i<n-1;i++){
            if(s[i] == s[i+1] && s[i] == '>'){
                cost++;
            }
            else if(s[i] == s[i+1] && s[i] == '<'){
                cost++;
            }
            else{
                fcost = cost;
                cost =2;
            }
        }
        fcost =cost;
        cout<<fcost <<endl;
    }
}