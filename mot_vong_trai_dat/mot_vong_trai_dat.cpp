#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, m;
    cin >> n >> m;
    vector<int> des;
    for (int i = 0; i < m; ++i) {
        int val;
        cin >> val;
        des.push_back(val);
    }

    vector<int> road_map;
    for (int i = 0; i < m - 1; ++i) {
        if (des[i] <= des[i + 1]) {
            int temp = des[i];
            while (temp != des[i + 1]) {
                road_map.push_back(temp++);
            }
        }
        else {
            int temp = des[i];
            while (temp <= n) {
                road_map.push_back(temp++);
            }
            int temp2 = 1;
            while (temp2 < des[i+1]) {
                road_map.push_back(temp2++);
            }
        }
    }
    road_map.push_back(des[m - 1]);
    //for (int c : road_map) cout << c << " ";
    //cout << endl;
    
    vector<int> vec(n + 1, 0);
    for (int cung : road_map) {
        ++vec[cung];
    }
    /*
    for (int i = 1; i < n + 1; ++i) {
        cout << i << "  " << vec[i] << endl;
    } 
    */
    int max = 0;
    for (int i = 1; i < n + 1; ++i) {
        if (vec[i] > max) {
            max = vec[i];
        }
    }
    for (int i = 1; i < n + 1; ++i) {
        if (vec[i] == max) {
            cout << i << " ";
        }
    }
    return 0;
}
