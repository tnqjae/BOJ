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
//			cout << "���� �� ���� �ʾ��� �� ����" << endl;
//			return 0;
//		}
//	}
//	cout << "�Ǻ����, �ߴ������ ã���ʴϴ�" << endl;
//	return 0;