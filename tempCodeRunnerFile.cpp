#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll maxB , minB;
        maxB = minB = 0 ;
        ll temp = n;
        if(n%2 !=0 || n<4){
            cout<<-1<<endl;
            continue;
        }
        else{
            maxB = n/4;

            if(n%6 == 0){
                minB = n/6;
            }
            else if(n%6 == 2){
                minB = n/6 + 1 ;
            }
            else{
                minB = n/6 + 1 ;
            }
        }
        cout<<minB <<" "<< maxB <<endl;

        


    }
}