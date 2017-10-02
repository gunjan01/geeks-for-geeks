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
	        if(n%2==1) cnt++;
	        n=n/2;
	    }
	    
	    cout<<cnt<<endl;
    
	    t--;    
	    
	}
	return 0;
}
