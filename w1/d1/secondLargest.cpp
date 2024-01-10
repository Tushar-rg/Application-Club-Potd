//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int max=arr[0];
	    int smax=-1;
	    for(int i=0;i<n;i++){
	        if(arr[i]>max){
	            smax = max;
	            max = arr[i];
	        } 
	        else if(arr[i]<max && arr[i]>smax){
	            smax = arr[i];
	        }
	    }
	    return smax;
	}
};