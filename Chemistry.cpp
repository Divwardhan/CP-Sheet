#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        map<char, int> hashmap;
        
        for(int i = 0; i < n; i++){
            hashmap[s[i]]++;
        }
        
        bool flag = true;
        int cnt=0;

        for(auto ele : hashmap){
            if(ele.second %2 !=0){
                flag = false;
                cnt++;
            }
            
        }
        if(flag ==true ){
            cout << "YES" << endl;
            continue;
        }
        if(cnt-1 <= k){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        

        
        
        
        
    }
    return 0;
}