#include<bits/stdc++.h>
using namespace std;

int main(){
    int num,count;
    string cf="codeforces";
    cin>>num;
    for(int i=0;i<num;i++){
        string s;
        cin>>s;
        for(int j=0;j<10;j++){
            if(s[j]==cf[j]) count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
