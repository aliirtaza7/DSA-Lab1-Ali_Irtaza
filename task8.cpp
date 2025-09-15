#include <iostream>
using namespace std;

int findPattern(const string &text, const string &pattern) {
    int n = text.size();
    int m = pattern.size();
    if (m == 0) return 0;  

    for (int i = 0; i <= n - m; i++) {
        int j = 0;

        while (j < m && text[i + j] == pattern[j]) {
            j++;
        }
        if (j == m) return i;
    }
    return -1;
}
int main() {
    // Test cases
    cout << "Test 1: " << findPattern("hello world", "hello") << endl;
    cout << "Test 2: " << findPattern("hello world", "world") << endl;
    cout << "Test 3: " << findPattern("hello world", "abc") << endl;   
    cout << "Test 4: " << findPattern("hello world", "") << endl;   
    
    return 0;
}
