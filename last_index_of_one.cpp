#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	string s;
	
	
	
	while(t!=0)
	{
	    cin>>s;
	    int i; 
	    for(i=s.length();i>-1;i--)
	    {
	        if(s[i]=='1')
	        {
	            cout<<i<<endl;
	            break;
	        }
	    }
	    if(i==-1)
	        cout<<"-1"<<endl;
	    
	    t--;
	}


	return 0;
}
