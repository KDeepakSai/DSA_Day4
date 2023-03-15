#include <bits/stdc++.h>
using namespace std;

int solve(int a[],int i,int j){
	if(i>=j)return 0;
	int min_cost=INT_MAX;
	for(int k=i;k<=j-1;k++){
		int temp=solve(a,i,k)+solve(a,k+1,j)+(a[i-1]*a[k]*a[j]);
		min_cost=min(temp,min_cost);
	}
	return min_cost;
}
int main()
{
	int n,i,j;
	cout<<"Enter size of array: ";
	cin>>n;
	int a[n];
	i=1;
	j=n-1;
	cout<<"Enter a array: \n";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	solve(a,i,j);
	return 0;
}

