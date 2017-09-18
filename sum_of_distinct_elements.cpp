#include <bits/stdc++.h>
using namespace std;

//This program sorts an array and prints the sum of distinct elements in O(n)

int main() {
	//code
	int t;
	cin>>t;
	
	while(t!=0)
	{
	    int n,i,sum=0;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++) cin>>a[i];
	    
	    sort(a,a+n);
	    
	    for(i=0;i<n-1;i++)
	    {
	        if(a[i]!=a[i+1]) sum+=a[i];
	    }
	    sum=sum+a[n-1];
	    cout<<sum<<endl;
	    
	    t--;
	}

	return 0;
}
