#include<iostream>
#include<string>
using namespace std;

string str;
int arr[100], cnt = 0, flag = 0;
int main() {
	cin >> str;

	for (int i = 0; i < str.size(); ++i) {
		++flag;
		if (str.at(i) == ',') {
			while (1) {
				if (flag == 1) {
					cnt += flag;
					flag = 0;
					break;
				}
				--flag;
			}
		}
	}
	++cnt;
	cout << cnt;
}