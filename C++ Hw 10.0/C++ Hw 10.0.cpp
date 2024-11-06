#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <ctime>
#include <string.h>

using namespace std;

void main() {
	srand(time(NULL));
	cout << "Task I" << endl;
	char* s = new char[9];
	cin >> s;
	int len = strlen(s);
	for (int i = len; i > -1; i--) {
		if (i == len - 1) {
			cout << (char)toupper(s[i]);
		}
		else {
			cout << (char)tolower(s[i]);
		}
	}

	cout << endl << "Task II" << endl;

	cin >> s;
	len = strlen(s);
	for (int i = 0; i < len; i++) {
		if ((i + 1) % 3 == 0) {
			cout << (char)toupper(s[i]);
		}
		else {
			cout << (char)tolower(s[i]);
		}
	}

	cout << endl << "Task III" << endl;

	cin >> s;
	len = strlen(s);
	for (int i = 0; i < len; i++) {
		if ((char)s[i] == 65 || (char)s[i] == 67 || (char)s[i] == 77) {
			cout << (char)(rand() % 255);;
		}
		else {
			cout << s[i];
		}
	}

	cout << endl << "Task IV" << endl;

	cin >> s;
	len = strlen(s);
	for (int i = 0; i < len; i++) {
		if (s[i] == 'H' && s[i + 1] == 'e' && s[i + 2] == 'l' && s[i + 4] == 'o') {
			s[i] = 'W';
			s[i + 1] = 'o';
			s[i + 2] = 'r';
			s[i + 3] = 'l';
			s[i + 4] = 'd';
		}
	}
	cout << s;

	delete[] s;
	s = nullptr;
}

