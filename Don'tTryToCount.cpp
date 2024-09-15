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

        int u = ceil(log(m)/ log(n));
        int i = u -1;
        bool found = false;

        while(i < u+2 || i<=2){
            if(i<0){
                i++;
                continue;
            }
            operation(x, i);
            if(findSubstring(x , s)) break;
            i++;
        }

        if(i>u+2) cout<<-1<<endl;
        else cout<<i<<endl;
        
    }
}
