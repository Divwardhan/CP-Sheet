/*
Let's call an array a
 sorted if a1≤a2≤…≤an−1≤an
.

You are given two of Farmer John's favorite integers, n
 and k
. He challenges you to find any array a1,a2,…,an
 satisfying the following requirements:

1≤ai≤109
 for each 1≤i≤n
;
Out of the n
 total cyclic shifts of a
, exactly k
 of them are sorted.†
If there is no such array a
, output −1
.

†
The x
-th (1≤x≤n
) cyclic shift of the array a
 is ax,ax+1…an,a1,a2…ax−1
. If cx,i
 denotes the i
'th element of the x
'th cyclic shift of a
, exactly k
 such x
 should satisfy cx,1≤cx,2≤…cx,n−1≤cx,n
.

For example, the cyclic shifts for a=[1,2,3,3]
 are the following:

x=1
: [1,2,3,3]
 (sorted);
x=2
: [2,3,3,1]
 (not sorted);
x=3
: [3,3,1,2]
 (not sorted);
x=4
: [3,1,2,3]
 (not sorted).
Input
The first line contains t
 (1≤t≤103
) — the number of test cases.

Each test case contains two integers n
 and k
 (1≤k≤n≤103
) — the length of a
 and the number of sorted cyclic shifts a
 must have.

It is guaranteed that the sum of n
 over all test cases does not exceed 103
.

Output
For each test case, print a single line:

if there is a valid array a
, output n
 integers, representing a1,a2,…,an
;
otherwise, output −1
.
If there are multiple solutions, print any of them.
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    for(int i=0;i<test;i++){
        int n,k;
        cin>>n>>k;
        if(n==k){
            for(int j=0;j<k;j++)
            {
                cout<<1<<" "
        ;    }
            cout<<endl;

        }
        else if(k==1){
            for(int j=0;j<n;j++)
            {
                cout<<j+1<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}