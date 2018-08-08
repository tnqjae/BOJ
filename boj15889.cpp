//#include<iostream>
//using namespace std;
//
//int n, x[10000000], len[10000000], sum = 0;
//
//int main() {
//	cin >> n;
//
//	for (int i = 0; i < n; ++i)
//		cin >> x[i];
//
//	for (int i = 1; i < n; ++i)
//		cin >> len[i];
//
//	for (int i = 1; i < n; ++i) {
//		if (sum < len[i] + x[i - 1])
//			sum = len[i] + x[i - 1];
//		if (sum < x[i]) {
//			cout << "엄마 나 전역 늦어질 것 같아" << endl;
//			return 0;
//		}
//	}
//	cout << "권병장님, 중대장님이 찾으십니다" << endl;
//	return 0;