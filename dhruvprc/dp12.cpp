#include<iostream>
#include<cstring>
using namespace std;

int lcs(char *s1, char * s2, int i , int j){
	//base case
	if(s1[i]=='\0'||s2[j]=='\0'){
		return 0;

	}
	//recursive case
	if(s1[i]!=s2[j]){
		int op1=lcs(s1,s2,i+1,j);
		int op2=lcs(s1,s2,i,j+1);

		return max(op1, op2);

	}
	else
	{
		return 1+lcs(s1,s2,i+1,j+1);
	}
}

int topdown(char*s1, char*s2, int i, int j , int dp[][100]){
	//base case
	if(s1[i]=='\0'||s2[j]=='\0'){
		return dp[i][j]=0;
	}
	if(dp[i][j]!=-1){
		return dp[i][j];
	}
	//recursive case
	if(s1[i]!=s2[j]){
		int op1 = topdown(s1,s2,i+1,j,dp);
		int op2 = topdown(s1,s2,i,j+1,dp);

		return max(op1, op2);


	}
	else
	{
		return dp[i][j] = 1+topdown(s1,s2,i+1,j+1,dp);
	}
}
int main(){
	char a[]="abce";
	char b[]="ace";

	int dp[100][100];
	memset(dp,-1,sizeof dp);

	cout<<topdown(a,b,0,0,dp)<<endl;
	cout<<lcs(a,b,0,0)<<endl;
	return 0;
}