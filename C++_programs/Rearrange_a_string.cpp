#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	string s;
	
	while(t!=0)
	{
	    cin>>s;
	    
	    char c[s.length()];
	    int sum=0,k=0,i;
	    
	    for(i=0;i<s.length();i++)
	    {
	        if(isalpha(s[i])) c[k++]=s[i];
	        else if(isdigit(s[i])) sum=sum+(s[i]-48);
	    }
	    
	    sort(c,c+k);
	    
	    for(i=0;i<k;i++)
	    {
	        cout<<c[i];
	    }
	    cout<<sum<<endl;
	    
	    t--;
	}
	return 0;
} 
