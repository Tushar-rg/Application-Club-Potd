#include <bits/stdc++.h>
using namespace std;

string goal = "abc";
 
void solve() {
	string s,goal="codeforces";
    cin>>s;
    int count;
    for(int i=0;i<10;i++){
        if(s[i]!=goal[i]) count++;
    }
    cout<<count;
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin >> n; for (int i = 1; i <= n; i++) {solve();}
}