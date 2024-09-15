#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t)
    {
        int n;
        cin>>n;
        float prod=1;
        float a[n];
        int count=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            prod*=a[i];
            if(a[i]==2){
                count++;
            }
        }
    
        // float root;
        // root=pow(prod,0.125);
        // if(root -(int)root == 0)
        // {
        //     cout<<"YES"<<endl;
        // }
        
        // else{
        //     cout<<"NO"<<endl;
        // }
        if(count==0 || count%8==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        t--;
    }
    return 0;
}
