#include<iostream>
#include<string>
using namespace std;

int cnt = 0, result = 0;
string str;

int main() {
	cin >> str;
	for (int i = 0; i < str.size(); ++i) {
		if (str[i] == '(' && str[i + 1] == ')') {
			result += cnt;
			i++;
		}
		else {
			if (str[i] == '(')
				cnt++;
			else {
				cnt--;
				result++;
			}
		}
	}
	cout << result << endl;
}
