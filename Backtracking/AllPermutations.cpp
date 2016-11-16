#include <bits/stdc++.h>
using namespace std;
//permutation
void permute(string & str,int l, int r) {
	if(l == r) {
		cout << str << "\n";
	}
	for(int i=l;i<=r;i++) {
		swap(str[l],str[i]);
		permute(str,l+1,r);
		swap(str[l],str[i]);
	}
}
int main(void) {
	string str;
	cin >> str;
	permute(str,0,str.size()-1);
	return 0;
}
