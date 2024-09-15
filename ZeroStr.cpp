#include <iostream>
#include <string>
using namespace std;

int main() {
    int test;
    cin >> test;
    
    while (test) {
        int n;
        cin >> n;
        string s;
        cin>>s;
        int sum1=0,sum0=0;
        
        for (int i = 0; i < n; i++) {
            
            if(s[i] == '1')
            {
                sum1++;
            }
            else{
                sum0++;
            }
        }
        
        if(sum0 >= sum1){
            cout<<sum1<<endl;
        }
        else{
            cout<<++sum0<<endl;
        }
        test--;
    }
    return 0;
}


