// https://www.codechef.com/problems/TEAMFOR
// Idea-
// try making pairs greedily,first programmer and english speaking students,then try to make both and rest.
// Good Problem -- 3/5
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
    string s,t;
    cin>>n;
    cin>>s>>t;
    int prog=0,eng=0,both=0,rem=0,mn;
    int ans=0;
    for(int i=0;i<n;i++){
      if(s[i]=='1' and t[i]=='1') both++;
      else if(s[i]=='1' and t[i]=='0') prog++;
      else if(s[i]=='0' and t[i]=='1') eng++;
      else rem++;
    }
    mn=min(prog,eng);
    prog-=mn;
    eng-=mn;
    ans+=mn;
    mn=min(both,rem+prog+eng);
    both-=mn;
    ans+=mn;

    ans+=both/2;
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
