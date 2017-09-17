#include <bits/stdc++.h>
using namespace std;

//sleeker solution (n & n+1 == 0 ) for all bits to be set

int main() {
	
	int t,n,i,rem;
	cin>>t;
	
	while(t!=0)
	{
	    cin>>n;
	    
	    int b[1000],k=0;
	    
        while(n!=0)
        {
            rem=n%2;
            b[k++]=rem;
            n=n/2;
        }
	    
	    for(i=0;i<k;i++)
	    {
	        if(b[i]==0)
	            break;
	    }
	    
	    if(i<k)
	        cout<<"NO"<<endl;
	    else
	        cout<<"YES"<<endl;
	   
	    t--;
	}
	
	   return 0;
}
