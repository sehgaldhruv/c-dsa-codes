#include <iostream>
using namespace std;

void reverse(int &x) {
	int ans = 0;
	while (x > 0) {
		ans = ans*10+
	}
}

void AsciiSubsequence(char *in, char *out, int i, int j) {
	// Base Case
	if (in[i] == '\0') {
		out[j] = '\0';
		cout << out << endl;
		return;
	}
	// Recursive case
	// 1. ith character ko mat lo
	AsciiSubsequence(in, out, i+1, j);
	// 2. ith character ko lelo
	out [j] = in[i];
	AsciiSubsequence(in, out, i+1, j+1);
	// 3. ith character ke ascii code ko lelo
	int ascii_code = in[i];
}
int main () {

	char ch 
}