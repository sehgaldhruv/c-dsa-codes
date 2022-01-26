#include <iostream>
using namespace std;

int main () {

	// initialization
	char arr[7] = "Kartik"
	char a[] = {'K','A,'R','T','I','K','\0'};
	cout << "Name using loop: ";
	for (int i = 0; a[i] !='\0'; ++i)
	{
		cout << a[i] << endl;
	}
}