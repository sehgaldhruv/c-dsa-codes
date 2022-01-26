#include <iostream>
using namespace std;

char key[][10] = {
	"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV", "WXYZ"
};
void PhoneKeyPad(char *in, char* out, int i, int j) {
	// Base Case 
	if (in[i] == '\0') {
		out[j] = '\0';
		cout << out << endl;
		return;
	}
	// Recursive case
	char ch = in[i];
	int indx = ch - '0';
	for (int k = 0; key[indx][k] !='\0'; k++) {
		// cout << key[indx][j] << endl;
		out[j] = key[indx][k];
		PhoneKeyPad(in,out,i+1,j+1);
	}
}

int main () {

	char in[100], out[100];
	cin >> in;

	PhoneKeyPad(in,out,0,0);

	return 0;

}