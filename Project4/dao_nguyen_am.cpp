#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>
using namespace std;

bool kt_nguyen_am(char);
void chuyen_doi(char&, char&);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string str;
    cin >> str;
    int n = str.size();
    vector<char> index;
    for (int i = 0; i < n; ++i) {
        if (kt_nguyen_am(str[i])) {
            index.push_back(str[i]);
        }
    }
    for (auto ite = index.begin(), end = index.end() -1; ite < end; ite++, end--) {
        chuyen_doi(str[*ite], str[*end]);
    }
    cout << str;
    return 0;
}

bool kt_nguyen_am(char x)
{
    vector<char> nguyen_am = { 'u','U','e','E','o','O','a','A','i','I' };
    for (char ch : nguyen_am) {
        if (ch == x) {
            return true;
        }
    }
    return false;
}

void chuyen_doi(char& x, char& y)
{
    char temp = x;
    x = y;
    y = temp;
}