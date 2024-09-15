/*
You are given a string s
 of length n
, where each character is either < or >.

An array a
 consisting of n+1
 elements is compatible with the string s
 if, for every i
 from 1
 to n
, the character si
 represents the result of comparing ai
 and ai+1
, i. e.:

si
 is < if and only if ai<ai+1
;
si
 is > if and only if ai>ai+1
.
For example, the array [1,2,5,4,2]
 is compatible with the string <<>>. There are other arrays with are compatible with that string, for example, [13,37,42,37,13]
.

The cost of the array is the number of different elements in it. For example, the cost of [1,2,5,4,2]
 is 4
; the cost of [13,37,42,37,13]
 is 3
.

You have to calculate the minimum cost among all arrays which are compatible with the given string s
.

Input
The first line contains one integer t
 (1≤t≤500
) — the number of test cases.

Each test case consists of two lines:

the first line contains one integer n
 (1≤n≤100
);
the second line contains the string s
, consisting of n
 characters. Each character of s
 is either < or >.
Output
For each test case, print one integer — the minimum cost among all arrays which are compatible with the given string s
.
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    int test;
    cin >> test;
     cin.ignore();
    while (test) {
        int n;
        cin >> n;
        
        cin.ignore();
        char s[n];
        cin.getline(s, n+1);
        int a[n + 1];
        a[0] = 10;
        int temp = 10;
        for (int i = 0; i < n; i++) {
            if (s[i] == '<') {
                temp++;
                a[i + 1] = temp;
            } else if (s[i] == '>') {
                temp--;
                a[i + 1] = temp;
            }
        }

        set<int> unique_elements;
        for (int i = 0; i <= n; i++) {
            unique_elements.insert(a[i]);
        }
        cout<<unique_elements.size();

        
        cout << endl;

        test--;
    }
    return 0;
}
