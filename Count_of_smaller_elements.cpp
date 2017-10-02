#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t,n,x;
	cin>>t;
	
	while(t!=0)
	{
	   int cnt=0,k=0,i;
	   
	   cin>>n;
	   
	   int a[n];
	   for(i=0;i<n;i++) cin>>a[i];
	   
	   cin>>x;
	   
	   
	   //removing duplicates
	 /*  
	   for(i=0;i<n-1;i++)
	   {
	       if(a[i]!=a[i+1]) a[k++]=a[i];
	   }
	   a[k]=a[n-1];
	 */
	    for(i=0;i<n;i++)
	    {
	        if(a[i]<=x) cnt++;
	    }
	    
	    cout<<cnt<<endl;
	    
	    t--;
	}
	

	
	return 0;
}
