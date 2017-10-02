#include <bits/stdc++.h>
using namespace std;

//This program finds the set difference in O(n) time

int main() {
	
	int t,n,m;
	cin>>t;
	
	while(t!=0)
	{
	    
	    cin>>n>>m;
	    int a[n],b[m],i,j,cnt=0;
	    
	    for(i=0;i<n;i++) cin>>a[i];
	    for(i=0;i<m;i++) cin>>b[i];
	    
	    sort(a,a+n);
	    sort(b,b+m);
	    i=0,j=0;
	    while(i<n && j<m)
	    {
	        if(a[i]<b[j]) i++;
	        else if(a[i]>b[j]) j++;
	        else 
	        {
	            i++;
	            j++;
	            cnt++;
	        }
	    }
	    
	    cout<<cnt<<endl;
	    
	    
	    t--;
	    
	}
	
	
	
	return 0;
}
