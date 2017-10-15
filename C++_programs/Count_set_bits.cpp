#include <bits/stdc++.h>
using namespace std;

int main() {

	int t,n;
	cin>>t;
	
	while(t!=0)
	{
	    cin>>n;
	    int cnt=0;
	    
	    while(n!=0)
	    {
	        if(n&1==1) cnt++;
	        
	        n=n>>1;
	    }
	    
	    cout<<cnt<<endl;
	    
	    t--;
	    
	}
	return 0;
}
