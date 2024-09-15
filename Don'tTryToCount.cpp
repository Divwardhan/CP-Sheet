#include<bits/stdc++.h>
using namespace std;

void operation(string &s , int n) {
    for (int i = 0; i < n; i++) {
        s += s;
    }
}
bool findSubstring(string& str,string& substr) {
    // Find the position of the first occurrence of substr in str
    size_t found = str.find(substr);
    
    // Check if the substring was found
    if (found != std::string::npos) {
        return true; // Substring found
    } else {
        return false; // Substring not found
    }
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        bool found = false;
        for (int i = 0; i <= 5; i++)
        {
            if(x.find(s) != string :: npos){
                cout<<i<<endl;
                found = true;
                break;
            }
            x.append(x);
        }

        if(!found)cout<<-1<<endl;
        
        
    }
}
