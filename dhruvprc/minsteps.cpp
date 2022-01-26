#include<iostream>
#include<limits.h>

using namespace std;

int minstepsto1(int n){
	//base case
	if(n==1)return 0;
	//recursive case
	int op1,op2,op3;
	op1=op2=op3=INT_MAX;

	if(n%3==0){
		op1=minstepsto1(n/3);

	}
	if(n%2==0){
		op2=minstepsto1(n/2);

	}
	op3=minstepsto1(n-1);
	return min(op1,min(op2,op3))+1;
}
int topdown(int n,int *dp){
	//recursive case
	int op1,op2,op3;
	op1=op2=op3=INT_MAX;
	if(n%3==0)
	{
      op1=topdown(n/2,dp);
	}
	if(n%2==0){
		op2=topdown(n/2,dp);
	}
	op3=topdown(n-1,dp);
	return dp[n]=min(op1,min(op2,op3))+1;
}