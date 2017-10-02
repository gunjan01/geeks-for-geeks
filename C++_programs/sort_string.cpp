#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	string s;
	
	cin>>t;
	
	while(t!=0)
	{
	    cin>>s;
	    int k=0,i;
	    char c[s.length()];
	    
	    for(i=0;i<s.length();i++) c[k++]=s[i];
	    
	    sort(c,c+k);
	    
	    for(i=0;i<k;i++) cout<<c[i];
	    
	    cout<<endl;
	   
	    t--;
	    
	}

	
	return 0;
}
