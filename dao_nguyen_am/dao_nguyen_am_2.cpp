#include <iostream>
#include <string.h>
#include <vector>
#include <string>
using namespace std;

bool kt_nguyen_am(char);

int main()
{
	string str;
	cin >> str;
	int n = str.size();
	vector<int> index1;
	vector<char> temp;
	for (int i = 0; i < n ; ++i) {
		if (kt_nguyen_am(str[i])) {
			index1.push_back(i);
		}
	}
	for (auto beg = index1.rbegin(); beg != index1.rend(); ++beg) {
		temp.push_back(str[*beg]);
	}
	int k = 0;
	for (int i : index1) {
		str[i] = temp[k++];
	}
	cout << str;
	return 0;
}

bool kt_nguyen_am(char x)
{
	vector<char> vec = { 'u','U','e','E','o','O','a','A','i','I' };
	for (char ch : vec) {
		if (x == ch) {
			return true;
		}
	}
	return false;
}
