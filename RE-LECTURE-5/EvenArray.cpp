#include <iostream>
using namespace std;

int main () {
	int a[50]; 
	int n ;
	cout<<"enter n with max limit 50";
cin>>n;
for(int i=0; i<=n-1;i++ ){
	cin>>a[i];
}

	for(int i=n; i>=0; --i){
		cout<<a[i]<<" ";
	}
	return 0;
}