#include <bits/stdc++.h>
using namespace std;

string goal = "abc";
 
void solve() {
	string s;
	cin >> s;
	int count = 0;
	for (int i = 0; i < 3; i++) {
		count += (s[i] != goal[i]);
	}
	cout << (count <= 2 ? "YES\n" : "NO\n");
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin >> n; for (int i = 1; i <= n; i++) {solve();}
}