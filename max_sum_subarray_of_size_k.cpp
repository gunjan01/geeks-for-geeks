#include <bits/stdc++.h>
using namespace std;

/* This is an O(n) solution which uses a sliding window of size k . as the window slides, we delete the first element 
of the window and add the first element adjacent to the window mainting size k */

int main() {
	
	int t,n,k;
	cin>>t;
	
	while(t!=0)
	{
	    
	   cin>>n>>k;
	   if(n<k)
	   {
	       cout<<"-1"<<endl;
	   }
	   int i,a[n],res=0;
	   
	   for(i=0;i<n;i++) cin>>a[i];

        for(i=0;i<k;i++) res+=a[i];
        
        int ans=res;

        for(i=k;i<n;i++)
        {
            res+=a[i]-a[i-k];
            ans=max(res,ans);

        }
	    
	    cout<<ans<<endl;
	    
	    
	    t--;
	    
	}
	

	return 0;
}
