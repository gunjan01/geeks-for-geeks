#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	string s;
	
	while(t!=0)
	{
	    cin>>s;
	    int i,l=s.length(),sum=s[0]-'0';
   
	    for(i=1;i<l;i++)
	    {
	        if(s[i]=='A')
	            sum&=(int(s[i+1])-'0');
	        else if(s[i]=='B')
	            sum|=(int(s[i+1])-'0');
	        else if(s[i]=='C')
	            sum^=(int(s[i+1])-'0');
	            
	    }
	
	    cout<<sum<<endl;
	
	    
	    t--;
	}
	
	return 0;
}
