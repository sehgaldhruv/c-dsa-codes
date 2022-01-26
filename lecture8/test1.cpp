#include <iostream>
using namespace std;
void userIp(char* a, char delimiter = '\n') {
	int i = 0;
	char ch = cin.get();

	while (ch != delimiter) {
		a[i++] = ch;
		ch = cin.get();
	}
	a[i] ='\0';
}

int main () {
	char a[100];
	// cin >> a; // cin ignores whitespaces



	cin.getline(a,10);
	cout << "a: " << endl;
	printchararray(a);
	return 0;
}