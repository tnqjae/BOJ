#include<iostream>
#include<string>
using namespace std;

string str;
int key = 13;
int main() {
	getline(cin, str);
	
	for (int i = 0; i < str.size(); ++i) {
		if (isalpha(str[i])) {
			if (str[i] < 78)
				printf("%c", str[i] + key);
			else if (str[i] >= 79 && str[i] <= 90)
				printf("%c", str[i] - key);
			else if (str[i] >= 97 && str[i] < 110)
				printf("%c", str[i] + key);
			else
				printf("%c", str[i] - key);
		}
		else
			printf("%c", str[i]);
	}
}