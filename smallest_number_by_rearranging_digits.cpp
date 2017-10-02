#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t,n;
	cin>>t;
	
	while(t!=0)
	{
	    cin>>n;
	    
	    int b[100000],k=0,i=0,temp;
	    
	    while(n!=0)
	    {
	        b[k++]=n%10;
	        n=n/10;
	    }
	    
	    sort(b,b+k);
	    
	    i=0;
	    
	    while(b[i]==0) i++;
	   
        temp=b[i];
        b[i]=b[0];
        b[0]=temp;
       
	    
	    for(i=0;i<k;i++)
	    {
	        cout<<b[i];
	    }
	    
	    cout<<endl;
	   
	  
	    t--;
	    
	}

	return 0;
}
