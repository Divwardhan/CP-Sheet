#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        int a[4] = {0, 0, 0, 0};
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            int j =0;
            while(s[j] != '\0'){
                 if (j < 4 && s[j] == '#') {
                    a[j] = j + 1;
                }
                 j++;
            }
             
            
        }
        for (int i = 3; i >=0; i--) {
                if (a[i] != 0){
                    cout<<a[i] <<" ";
                }
            }
            cout<<endl;

    
    }
}