#include <bits/stdc++.h>
using namespace std;
 
int main() {
	string str,temp="";
 	cin>>str;
 	for(int i=0;i<str.length();i++){
 		if( str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='Y' ||
		 	str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='y')
 			continue;
		else if(str[i]>=65 && str[i]<=90)
			str[i]+=32;
		temp+=str[i];
	}
	for(int i=0;i<temp.length();i++)
		cout<<'.'<<temp[i];
}
