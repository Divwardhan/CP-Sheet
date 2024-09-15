#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int arr[s.length()+1];
        int c=1;
        int max1=0;
for(int i=0;i<s.length();i++){
    if(s[i]==s[i+1]){
        c+=1;
    }
    else{
        max1=max(c,max1);
        c=1;
    }
    max1=max(max1,c);
}
cout<<max1+1<<endl;
    }
}