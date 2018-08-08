#include<iostream>
#include<algorithm>
using namespace std;

int card[21], i = 10;
int main() {
	int a, b;
	for (int i = 1; i < 21; ++i)card[i] = i;
	while (i--) {
		cin >> a >> b;
		reverse(card + a, card + b);
	}
	for (int i = 1; i < 21; ++i) {
		cout << card[i] << " ";
	}
}
