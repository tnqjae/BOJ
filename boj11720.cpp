#include<iostream>
using namespace std;

char n_str[100];
int n, sum;
int main() {
	cin >> n;
	cin >> n_str;
	for (int i = 0; i < n; ++i) sum += (n_str[i] - '0');
	cout << sum;

}