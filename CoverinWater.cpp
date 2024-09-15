#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    char str[n];
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    int maincnt=0;
    int subcnt=0;
    bool flag=false;
    for(int i=0;i<n;i++){
        if(str[i] == '.'){
            maincnt++;
            subcnt++;
             if(subcnt>=3){
                cout<<2<<endl;
                flag=true;
                break;
            }
        }
        if(str[i]=='#' ){
            if(subcnt>=3){
                cout<<2<<endl;
                flag=true;
                break;
            }
            else{
                subcnt=0;
            }
            

        }
        
    }
    if(!flag){
        cout<<maincnt<<endl;
    }
    }
}