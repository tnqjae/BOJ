#include<iostream>
#include<string>
using namespace std;

string str;
int cl = 0, sl = 0, num = 0, sp = 0;//cl:�빮��, sl:�ҹ���, num:����, sp: ����
int main() {
	while (getline(cin, str, '\n')) {
		for (int i = 0; i < str.size(); ++i) {
			if (str[i] >= 65 && str[i] <= 90)
				++cl;
			else if (str[i] >= 97 && str[i] <= 122)
				++sl;
			else if (str[i] == ' ')
				++sp;
			else
				++num;
		}
		cout << sl << " " << cl << " " << num << " " << sp << endl;
		cl = 0, sl = 0, num = 0, sp = 0;
	}
}