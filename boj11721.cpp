#include<iostream>
#include<string>
using namespace std;

string str;
int main() {
	cin >> str;
	for (int i = 0; i < str.size(); ++i) {
		if (i % 10 == 0 && i != 0)
			cout << endl;
		cout << str.at(i);
	}
}