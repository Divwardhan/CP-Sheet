/*
Lura was bored and decided to make a simple language using the five letters a
, b
, c
, d
, e
. There are two types of letters:

vowels — the letters a
 and e
. They are represented by V
.
consonants — the letters b
, c
, and d
. They are represented by C
.
There are two types of syllables in the language: CV
 (consonant followed by vowel) or CVC
 (vowel with consonant before and after). For example, ba
, ced
, bab
 are syllables, but aa
, eda
, baba
 are not.
A word in the language is a sequence of syllables. Lura has written a word in the language, but she doesn't know how to split it into syllables. Help her break the word into syllables.

For example, given the word bacedbab
, it would be split into syllables as ba.ced.bab
 (the dot .
 represents a syllable boundary).

Input
The input consists of multiple test cases. The first line contains an integer t
 (1≤t≤100
) — the number of test cases. The description of the test cases follows.

The first line of each test case contains an integer n
 (1≤n≤2⋅105
) — the length of the word.

The second line of each test case contains a string consisting of n
 lowercase Latin characters  — the word.

All words given are valid words in the language; that is, they only use the letters a
, b
, c
, d
, e
, and each word is made up of several syllables.

The sum of n
 over all test cases does not exceed 2⋅105
.

Output
For test case, output a string denoting the word split into syllables by inserting a dot .
 between every pair of adjacent syllables.

If there are multiple possible splittings, output any of them. The input is given in such a way that at least one possible splitting exists.
*/

// #include<bits/stdc++.h>
// using namespace std;
// int main (){
//     int test;
//     cin>>test;
    
//     for(int k=0;k<test;k++)
//     {
//         int n;
//         cin>>n;
//         char str[n+1];
//         cin>>str;
//         char str2[n+1];
//         strcpy(str2,str);

//         int i=0;
//         while(str[i]!='\0')
//         {
//             if(str[i]=='a' || str[i]=='e'){
//                 str[i]='V';
//             }
//             else if(str[i]=='b' || str[i]== 'c' || str[i]== 'd'){
//                 str[i]='C';
//             }
//             i++;
//         }
//         i--;
//         int j=0;
//         char solstr[2*n];
//         while(i>=0)
//         {
//             if(str[i]=='C')
//             {
//                 solstr[j]=str2[i];
//                 solstr[j+1]=str2[i-1];
//                 solstr[j+2]=str2[i-2];
//                 solstr[j+3]='.';
//                 j+=4;
//                 i-=3;
//             }
//             else if(str[i]=='V')
//             {
//                 solstr[j]=str2[i];
//                 solstr[j+1]=str2[i-1];
//                 solstr[j+2]='.';
//                 j+=3;
//                 i-=2;
//             }

//         }
//         //cout<<j;
//         j--;
//         while(j!=-1)
//         {
//             cout<<solstr[j-1];
//             j--;
//         }
//         cout<<endl;
        
        


        
    
        
//     }
//     return 0;
// }

#include <iostream>
#include <cstring>
using namespace std;

int main (){
    int test;
    cin >> test;
    
    for(int k = 0; k < test; k++) {
        int n;
        cin >> n;
        char str[n+1];
        cin.ignore(); // Ignore the newline character left in the buffer
        cin.getline(str, n+1); // Input the string

        char str2[n+1];
        strcpy(str2, str);

        int i = 0;
        while(str[i] != '\0') {
            if(str[i] == 'a' || str[i] == 'e') {
                str[i] = 'V';
            }
            else if(str[i] == 'b' || str[i] == 'c' || str[i] == 'd') {
                str[i] = 'C';
            }
            i++;
        }
        i--;

        int j = 0;
        char solstr[2*n];
        while(i >= 0) {
            if(str[i] == 'C') {
                solstr[j] = str2[i];
                solstr[j+1] = str2[i-1];
                solstr[j+2] = str2[i-2];
                solstr[j+3] = '.';
                j += 4;
                i -= 3;
            }
            else if(str[i] == 'V') {
                solstr[j] = str2[i];
                solstr[j+1] = str2[i-1];
                solstr[j+2] = '.';
                j += 3;
                i -= 2;
            }
        }

        j--;
        while(j != 0) {
            cout << solstr[j-1];
            j--;
        }
        cout << endl;
    }
    return 0;
}
