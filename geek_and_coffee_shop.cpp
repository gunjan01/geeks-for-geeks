#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t,n,m;
	cin>>t;
	
	while(t!=0)
	{
	    cin>>n>>m;
	    
	    while(m-1!=0 && n!=0)
	    {
	        n=n/2;
            m--;
	        
	    }
        cout<<n<<endl;
	    t--;
	}
	

	
	return 0;
}
