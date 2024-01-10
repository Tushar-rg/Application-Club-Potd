//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1000000007

int minMoves(int a[], int n, int k);

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n, k;
	    cin>>n>>k;
	    int a[n];
    	for(int i=0;i<n;i++)
    	    cin>>a[i];
	   
    	cout<<minMoves(a,n,k)<<"\n";
	}
	return 0;
}

// } Driver Code Ends


int minMoves(int a[], int n, int k)
{
    long long count =0;
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]){
            int diff= a[i]-a[i-1];
            int fac;
            (diff%k==0) ? fac = diff/k : fac = diff/k +1;
            a[i] = a[i]-fac*k;
            count += fac;
            count %= MOD;
        }
        
    }
    return count;
}