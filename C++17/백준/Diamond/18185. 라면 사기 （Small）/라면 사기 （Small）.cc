#include<iostream>
#include<vector>


using namespace std;

int main() {
	int n = 0, tot = 0, tmp = 0, tmp2 = 0;
	cin >> n;
	int arr[100000] = { NULL, };

	for (int i = 0; i < n; ++i)
		cin >> arr[i];

	for (int i = 0; i < n; ++i) {
		if (arr[i + 1] > arr[i + 2]) {
			tmp = min(arr[i], arr[i + 1] - arr[i + 2]);
			tot += tmp * 5;//2개 묶음
			arr[i] -= tmp;
			arr[i + 1] -= tmp;

			tmp2 = min(arr[i], min(arr[i + 1], arr[i + 2]));//3개 묶음
			tot += tmp2 * 7;
			arr[i] -= tmp2;
			arr[i + 1] -= tmp2;
			arr[i + 2] -= tmp2;
		}
		else {
			tmp2 = min(arr[i], min(arr[i + 1], arr[i + 2]));//3개 묶음
			tot += tmp2 * 7;
			arr[i] -= tmp2;
			arr[i + 1] -= tmp2;
			arr[i + 2] -= tmp2;

			tmp = min(arr[i], arr[i + 1]);
			tot += tmp * 5;//2개 묶음
			arr[i] -= tmp;
			arr[i + 1] -= tmp;
		}
		tot += arr[i] * 3;
	}
	cout << tot;
}