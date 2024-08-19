#include<iostream>
#include<string>

using namespace std;

int main() {
	string input;
	cin >> input;
	for (int i = 0; i < 4; ++i) {
		switch (i)
		{
		case 0:
			if (input.at(0) == 'I')
				input.at(0) = 'E';
			else
				input.at(0) = 'I';

		case 1:
			if (input.at(i) == 'N')
				input.at(i) = 'S';
			else if(input.at(i) == 'S')
				input.at(i) = 'N';

		case 2:
			if (input.at(2) == 'T')
				input.at(2) = 'F';
			else		 
				input.at(2) = 'T';

		case 3:
			if (input.at(i) == 'J')
				input.at(i) = 'P';
			else if (input.at(i) == 'P')
				input.at(i) = 'J';
			else
				continue;
		}
	}
	cout << input << endl;
}