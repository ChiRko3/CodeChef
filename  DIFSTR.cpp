https://www.codechef.com/problems/DIFSTR
Idea-
Just Flip ith bit of the current string in the answer,god approach by tester <3
#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define pii pair<int,int>
#define pb push_back
#define pp pop_back
#define vi vector<int>
using namespace std;
void solve(){
  int n;
		cin >> n;
		string s[n];
		string ans;
		for(int i = 0; i < n; i++){
			cin >> s[i];
			if(s[i][i]=='0') ans += '1';
			else if(s[i][i]=='1') ans += '0';
		}
		cout << ans << endl;
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
	return 0;
}
