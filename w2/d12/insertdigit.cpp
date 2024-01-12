#include <bits/stdc++.h>
using namespace std;
 
void solve(){
	string num;
	int len,digit;
    cin>>len>>digit;
	cin>>num;
  	for(int i=0;i<len;i++){
    	if((num[i]-'0')<digit){
			num = num.substr(0,i) + char(digit) + num.substr(i-1,len); break;
		}
	}
	cout<<num;
	if(num.length()==len) cout<<digit;
}
 
int main() {
 	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin >> n; for (int i = 1; i <= n; i++){
		solve();
	}
}
