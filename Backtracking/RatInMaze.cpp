#include <bits/stdc++.h>
using namespace std;

int mat[100][100],sol[100][100];


int isSafe(int i,int j,int n) {
	return (i < n && j < n && mat[i][j]==1); 
}

void print(int n) {
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
			cout << sol[i][j] << " ";
		cout << "\n";  
	}
}

bool solve(int i,int j,int n) {
	if(i==n-1 && j==n-1) {
		sol[i][j] = 1;
		print(n);
		return true;
	}

	if(isSafe(i,j,n)) {
		sol[i][j] = 1;
		if(solve(i+1,j,n)) {
			return true;
		} 

		if(solve(i,j+1,n)) {
			return true;
		}

		sol[i][j] = 0;
		return false;
	}
}

int main(void) {

	int n;	
	cin >> n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin >> mat[i][j]; 
	solve(0,0,n);
}