#include <bits/stdc++.h>
using namespace std;

int main() {

	int t,n;
	cin>>t;
	
	while(t!=0)
	{
	    int i,k=0;
	    
	    cin>>n;
	    
	    int b[1000];
	    
	    while(n!=0)
	    {
	        b[k++]=n%2;
	        n=n/2;
	    }
	    
	    for(i=0;i<k;i++)
	    {
	        if(b[i]==1)
	        {
	            cout<<i+1<<endl;
	            break;
	        }
	    }
	    if(i==k) cout<<"0"<<endl;
	    
	    t--;
	}
	

	return 0;
}
