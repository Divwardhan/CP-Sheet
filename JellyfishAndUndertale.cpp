#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test;
    cin>>test;
    for(int p=0;p<test;p++)
    {
        long long a,b,n;
        
        cin>>a>>b>>n;
        vector<long long> x(n);

        for(long long j=0;j<n;j++)
        {
            cin>>x[j];
        }
        sort(x.begin(), x.end());
        long long    count=0,i=0;
        for(i;i<n;i++)
        {
            count=count+b-1;
            b=1;
            b=b+x[i];
            b=min(b,a);
            if(i == n-1)
            {
                count=count+b;
                b=0;
            }

        }
        
        cout<<count<<endl;
    }

}