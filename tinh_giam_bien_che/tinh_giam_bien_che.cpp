#include <vector>
#include <iostream>
#include <algorithm>
#include <list>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<int> vec;
    int val;
    while (cin >> val) {
        vec.push_back(val);
    }
    for(int i = 0; i<=n-2; ++i)
        for(int j = i; j<n; ++j)
            if (vec[i] > vec[j]) {
                int temp = vec[i];
                vec[i] = vec[j];
                vec[j] = temp;
            }
    auto ite = vec.begin();
    while (ite != vec.end()-1) {
        if (*ite == *(ite + 1)) {
            ite = vec.erase(ite);
        }
        else {
            ite++;
        }
    }
    cout << vec.size();
    return 0;
}
