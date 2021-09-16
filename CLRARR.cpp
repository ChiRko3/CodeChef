// https://www.codechef.com/problems/CLEARARR
// Idea-
// Sort and clear the pairs whose sum > x,by using op 3,
// when either k=<0 or a.size() < 2 or when (sum < x),meaning no more pairs cant be formed then just calcuate the sum.
// Good problem -- 3/5 
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
  ll n,k,x;
  cin>>n>>k>>x;
  vi a(n);
  for(ll i=0;i<n;i++){
    cin>>a[i];
  }
  sort(a.begin(),a.end());
  ll ans=0;
  while(k>0 and a.size()>=2){
    ll sz=a.size();
    ll sum = a[sz-1]+a[sz-2];
    if(x <= sum){
      a.pp();
      a.pp();
      ans+=x;
      k--;
    }
    else{
      break;
    }
  }
  ans+=accumulate(a.begin(),a.end(),0ll);
  cout<<ans<<endl;
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
