#include <bits/stdc++.h>
using namespace std;
 
void solve(){
	int n,log,total=0;
	cin>>n;
    for(int i=0;i<n;i++){
        cin>>log;
        total=total+(log-1);
    }
    (total%2==0)? cout<<"maomao90"<<endl : cout<<"errorgorn"<<endl;
}
 
int main() {
 	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin >> n; for (int i = 1; i <= n; i++){
		solve();
	}
}
