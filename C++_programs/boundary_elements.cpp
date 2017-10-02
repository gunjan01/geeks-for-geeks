#include <bits/stdc++.h>
using namespace std;

int main() {
	
	
	int t,n;
	cin>>t;
	
	while(t!=0)
	{
	    cin>>n;
	    int a[n][n],i,j;
	    
	    for(i=0;i<n;i++)
	    {
	        for(j=0;j<n;j++)
	        {
	            cin>>a[i][j];
	            
	            if(i==0 || i==n-1) cout<<a[i][j]<<" ";
	            else
	            {
	                if(j==0 || j==n-1) cout<<a[i][j]<<" ";
	            }
	        }
	    }
	    
	    cout<<endl;
	    t--;
	    
	    
	}
	

	
	return 0;
}
