#include<bits/stdc++.h>
#include<string>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;


        if(n.size() < 2 || n[0] != '1' || n[1] != '0'){
            cout<<"NO"<<endl;
             continue;
        }
        int num =stoi(n);

        if(num%100 == 0){
            cout<<"NO"<<endl;
        }

        else{
            if(pow(10 , num%100) > num){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
 
    }
}

