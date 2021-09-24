#include <iostream>
#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define pii pair<int,int>
#define pb push_back
#define pp pop_back
#define vi vector<int>
using namespace std;
#define log(a) for(auto a:a){cout<<a<<" ";}

void solve(){
 int n;
 cin>>n;
 vector<pair<ll,ll>> points(n+1);
 ll j =1;
 for(int i=0;i<n;i++){
     points[i].first = j++;
     cin>>points[i].second;
 }
 vector<pair<ll,ll>> temp;
 temp.pb(points[0]);
 temp.pb(points[1]); 
 ll ans = 0;
 for(int i=2;i<n;i++){
     auto cross = [&](){
        int n = temp.size();
        auto [x,y] = temp[n - 2];
        auto [x1,y1] = temp[n-1];
        auto [x2,y2] = points[i];
        return (y2-y)*(x1-x) - (x2-x)*(y1 - y);
     };
     while(temp.size() > 1 and cross() >= 0){
        temp.pp();
     }
     ans = max(ans,abs(points[i].first - temp.back().first));
     temp.pb(points[i]);
 }
 cout<<ans<<endl;
}

void file_i_o()
{
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0);
        #ifndef ONLINE_JUDGE
            freopen("input.txt","r", stdin);
            freopen("output.txt","w", stdout);
        #endif
}
int main() {
    clock_t begin = clock();
    file_i_o();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    #ifndef ONLINE_JUDGE 
        clock_t end = clock();
        cout<<"\n\nExecuted In: "<<double(end - begin) / CLOCKS_PER_SEC*1000<<" ms";
    #endif 
return 0;
}
