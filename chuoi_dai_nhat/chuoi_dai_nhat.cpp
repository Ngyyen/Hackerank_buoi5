#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool find_char(const string&, char);

int main() {
    
    int h = 0;
    cin >> h;
    string s;
    cin >> s;
    int n = s.size();
    vector<string> vec;
    for (int i = 0; i < n - 1; ++i) {
        string child;
        child += s[i];
        for (int j = i + 1; j < n; ++j) {
            if (find_char(child,s[j])) {
                break;
            }
            child += s[j];
        }
        vec.push_back(child);
    }
    int max = 0;
    for (const string s : vec) {
        if (s.size() > max) {
            max = s.size();
        }
    }
    cout << max;
    return 0;
}

bool find_char(const string& s, char x)
{
    for (char ch : s) {
        if (ch == x) {
            return true;
        }
    }
    return false;
}
