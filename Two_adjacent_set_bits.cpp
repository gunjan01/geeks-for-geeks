#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t,n;
	cin>>t;
	
	while(t!=0)
	{
	    cin>>n;
	    
	    int b[1000],i,k=0;
	    
	    while(n!=0)
	    {
	        b[k++]=n%2;
	        n=n/2;
	    }
	    
	    for(i=0;i<k-1;i++)
	    {
	        if(b[i]==1 && b[i+1]==1) break;
	    }
	    if(i<k-1)
	        cout<<"Yes"<<endl;
	    else
	        cout<<"No"<<endl;
	    
	    t--;
	}

	return 0;
}
