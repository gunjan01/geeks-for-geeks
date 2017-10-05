#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	
	string patt,text;
	
	while(t!=0)
	{
	    
	    cin>>text;
	    cin>>patt;
	    
	    int f[26]={0},i;
	    
	    for(i=0;i<text.length();i++) f[text[i]-'a']=1;
	    
	    for(i=0;i<patt.length();i++)
	    {
	        if(f[patt[i]-'a']==1) f[patt[i]-'a']=2;
	    }
	    
	    for(i=0;i<text.length();i++)
	    {
	        if(f[text[i]-'a']==2)
	        {
	            cout<<text[i]<<endl;
	            break;
	        }
	    }
	    
	  
	    if(i==text.length()) cout<<"No character present"<<endl;
	    
	    
	    
	    t--;
	}
	
	
	
	return 0;
}
