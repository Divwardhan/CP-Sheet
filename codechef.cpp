#include <iostream>
#include <vector>
using namespace std;

// Function to find all possible k values
vector<int> find_valid_k(int N, const string &S) {
    vector<int> valid_k;
    
    // Count number of 0s and 1s
    int count0 = 0, count1 = 0;
    for (char c : S) {
        if (c == '0') count0++;
        else count1++;
    }
    
    // Check all possible k values
    for (int k = 1; k <= N; ++k) {
        if ((count0 % k == 0 && count1 % k == 0) || (count0 % k == count1 % k)) {
            valid_k.push_back(k);
        }
    }
    
    return valid_k;
}

int main() {
    int T;  // Number of test cases
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        string S; 
        cin >> S;
        
        vector<int> result = find_valid_k(N, S);
        cout << result.size() << endl;
        for (int k : result) {
            cout << k << " ";
        }
        cout << endl;
    }
    
    return 0;
}
