#include <bits/stdc++.h>
using namespace std;


int main() {
	
	int t,n;
	cin>>t;
	
	while(t!=0)
	{
	    cin>>n;
	    
	    int i=1,cnt=0;
	    
	    while(((i)*(i))<n) 
	    {
	        cnt++;
	        i++;
	    }
	    
	    cout<<cnt<<endl;
	    
	    
	    t--;
	    
	}
	
	
	
	
	return 0;
}
