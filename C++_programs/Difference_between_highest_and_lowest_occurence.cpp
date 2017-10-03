/*
Given an array, the task is to find the difference between highest occurrence and lowest occurrence of any number in an array. 

Constraints:
1<=T<=100
1<=N<=105
1<=A[i]<=105

Example:
Input:
2
3
1 2 2
6
1 2 2 3 3 3

Output:
1
2

***************************************************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t,n;
	cin>>t;
	
	while(t!=0)
	{
	    int a[100000]={0},x,i,maxnum=0,min=999,max=0;
	    cin>>n;
	    
	    for(i=0;i<n;i++)
	    {
	        cin>>x;
	        
	        if(maxnum<x) maxnum=x;
	        a[x]++;
	    }


	    for(i=0;i<=maxnum;i++)
	    {
	        if(max<a[i]) max=a[i];
	        
	        if(min>a[i] && a[i]!=0) min=a[i];
	    }
	    
	    cout<<(max-min)<<endl;
	    
	    t--;
	    
	}
	

	
	return 0;
}
