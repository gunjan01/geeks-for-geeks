#include <iostream>
using namespace std;

int main() {
	
	int t;
	string s;
	cin>>t;
	
	while(t!=0)
	{
	    cin>>s;
	    int i;
	    
	    for(i=0;i<s.length()-1;i++)
	    {
	        if((abs(s[i]-s[i+1])!=1) && abs(s[i]-s[i+1])!=25) break;
	    }
	    
	    if(i==s.length()-1) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	    
	    
	    t--;
	}
	
	
	return 0;
}
