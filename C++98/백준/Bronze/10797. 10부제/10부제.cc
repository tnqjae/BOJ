#include<iostream>
using namespace std;

int cnt, day, num[5];

int main() {
	cin >> day;
	for (int i = 0; i < 5; ++i) {
		cin >> num[i];
	}
	cnt = 0;
	for (int i = 0; i < 5; ++i) {
		if (day == num[i])
			++cnt;
	}

	cout << cnt << endl;

	return 0;
}