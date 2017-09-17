#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int t,n;
	cin>>t;
	
	while(t!=0)
	{
	    cin>>n;
	    if(abs(n)%5==0)
	        cout<<"YES"<<endl;
	   else
	        cout<<"NO"<<endl;
	    

	    t--;
	}
	
	
	return 0;
}
