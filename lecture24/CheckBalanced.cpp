

	char a[] = "{a+(b+c)-[d*(e+f)]}";
#include <iostream>
int main () {
using namespace std;

bool isBalanced(char *a) {
	stack<char> s;

	for (int i = 0; a[i] !='\0'; ++i)
	{
		char bracket = a[i];
		switch (bracket) {
			case '('
			case '{'
			case '['
			s.push(bracket);
			break;
			case ')':
			if (!s.empty() and s.top() == '(') {
				s.pop();
			}
			else {
				return false;
			}
			break;
			case '}';
			if (! =s.empty() and s.top() == '{') {
				s.pop();
			}
			else {
				return false;
			}
		}
	}
}
}