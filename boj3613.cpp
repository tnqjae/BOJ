#include<iostream>
#include<string>
#include<stdbool.h>
using namespace std;

string str;
bool cpp = false, java = false;
int main() {
	cin >> str;
	int size = str.length();
	
	if (!islower(str[0])) {
		cout << "Error!" << endl;
		return 0;
	}

	for (int i = 1; i < size; ++i) {
		if (str[i] == '_') {
			if (str[i-1] == '_' || i == size - 1) {
				cout << "Error" << endl;
				return 0;
			}
			cpp = true;
		}
		if (isupper(str[i])) java = true;
	}
	if (cpp && java) {
		cout << "Error!" << endl;
		return 0;
	}
	if (java) {
		for (int i = 0; i < size; ++i) {
			if (isupper(str[i])) 
				cout << '_' << (char)(str[i] + 32);
			else 
				cout << str[i];
		}
	}
	else if (!cpp)
		cout << str;
	else {
		for (int i = 0; i < size; ++i) {
			if (str[i] == '_')
				cout << (char)(str[++i] - 32);
			else 
				cout << str[i];
		}
	}
	cout << endl;
}