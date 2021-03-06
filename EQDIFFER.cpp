// https://www.codechef.com/problems/EQDIFFER
// Main Idea here is that every pair will have equal difference when all of them are equal,using observation.
// Good Problem -- 2/5
#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define pii pair<int,int>
#define pb push_back
#define pp pop_back
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a;
    for(int i=0;i<n;i++){
      int x;
      cin>>x;
      a.pb(x);
    }
    int mx=INT_MIN;
    unordered_map<int,int>mp;
    for(auto a:a){
      mp[a]++;
      if(mp[a] > mx){
        mx=mp[a];
      }
    }
     if(n==2 or n==1){
      cout<<0<<endl;
    }
    else if(mp.size() == n){
      cout<<n-2<<endl;
    }
    else{
      cout<<n-mx<<endl;
    }
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
