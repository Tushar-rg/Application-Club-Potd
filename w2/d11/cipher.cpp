#include <bits/stdc++.h>
using namespace std;
 
void solve() {
	int noOfDigits,noOfMoves;
	string moveStr="";
    cin>>noOfDigits;
    int Digits[noOfDigits];
    for(int i=0;i<noOfDigits;i++) cin>>Digits[i];
    
    for(int i=0;i<noOfDigits;i++){
        cin>>noOfMoves;
        cin>>moveStr;
        for(int j=0;j<noOfMoves;j++){
            if(Digits[i]==0) Digits[i] = 10;
            ( Digits[i] = (moveStr[j]=='U') ? (Digits[i]-1)%10 : (Digits[i]+1)%10);
        }
    }
    for(int i=0;i<noOfDigits;i++) cout<<Digits[i]<<" ";
}
 
int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n; cin >> n; for (int i = 1; i <= n; i++) 
    {solve();}
}
