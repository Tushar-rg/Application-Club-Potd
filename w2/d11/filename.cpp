#include <bits/stdc++.h>
using namespace std;
 
void solve() {
	int len,count=0;
	string str;
	cin>>len;
	cin>>str;
	for(int i=0;i<len;i++){
		if(str[i]=='x' && str[i+1]=='x'){
			for(int j=i+2;j<len;j++){
				if(str[j]=='x'){
					str[j]='-';
					count++;
				}
				else break;
			}
		}
	}
	cout<<count;
}
 
int main() {
    solve();
}
