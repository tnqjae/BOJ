#include<iostream>
using namespace std;

int N, a[51], b[51];
int main() {
	cin >> N;
	a[0] = 1;
	b[0] = 0;
	for (int i = 1; i <= 50; ++i) {
		a[i] = b[i - 1];
		b[i] = a[i - 1] + b[i - 1];
	}
	cout << a[N] << " " << b[N];
}