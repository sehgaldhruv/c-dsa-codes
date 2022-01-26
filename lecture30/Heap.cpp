#include <iostream>
#include <vector>
using namespace std;
#define pb push_back

class minheap {
	vector<int> v;
public:
	minheap() {
		v.pb(-1);
	}

	void push(int d){
		v.pd(d);
		int c = v.size()-1;
		int p = c/2;
		while (c > 1 and (v[c] < v[p])) {
			swap(v[c], v[p]);
			c = p;
			p /= 2;
		}
	}

	void pop() {}

	int top() {
		return v[1];
	}

	bool empty() {
		return v.size() == 1;
	}
};

int main () {

	
	return 0;
}