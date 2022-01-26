#include <iostream>
using namespace std;

void printchararray(char* a) {
	for (int i = 0; a[i] !='\0'; ++i)
	{
		cout << a[i] << "-";
	}
	cout << endl;
}

int main () {
	char a[100];
	cin >> a;

	printchararray(a);
	cout << "a: " << a << endl;

	return 0;
}