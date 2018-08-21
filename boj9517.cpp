#include<iostream>
#include<algorithm>
using namespace std;

pair<int, char> cr;
int K, N, sum = 0;
int main() {
	cin >> K >> N;
	int	cnt = K;
	while (N--) {
		cin >> cr.first >> cr.second;
		sum += cr.first;
		if (sum >= 210)
			break;
		if(cr.second == 'T')
			++K;
		if (K > 8)
			K %= 8;
	}
	cout << K << endl;
}