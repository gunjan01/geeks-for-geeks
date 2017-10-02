#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t,n;
	cin>>t;
	
	while(t!=0)
	{
	    
	    cin>>n;
	    int b[1000],k=0,i;
	    
	    while(n!=0)
	    {
	        b[k++]=n%2;
	        n=n/2;
	    }
	    int cnt=0,res=0;
	    
	    for(i=0;i<k;i++)
	    {
	        if(b[i]==1) cnt++;
	        else cnt=0;
	        
	        res=max(res,cnt);
	    }
	    
	    cout<<res<<endl;
	    
	    
	    t--;
	    
	}
	
	
	
	return 0;
}
