#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int dp[1000005];
int n;
int fact(int n)
{
	if(n<=1)
		return 1;
	if(dp[n]!=-1)
	{
		return dp[n];
	}
	return dp[n]=n*fact(n-1);
}
int main()
{
	cin>>n;
	for(int i=0;i<=n;i++)
	{
		dp[i]=-1;	
	}
	cout<<fact(n)<<endl;	
	for(int i=0;i<=n;i++)
	{
		cout<<dp[i]<<" ";
	}
	return 0;
}
