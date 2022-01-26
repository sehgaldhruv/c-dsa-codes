#include <iostream>
using namespace std;

void printchararray (char* a) {
	for (int i = 0; a[i] != '\0'; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
int main () {
	char a[100];
	// cin >> a; // cin ignores whitespaces

	//syntax

cin.getline(a,100,'$');
cout << "a: " << a << endl;
printchararray (a);
}