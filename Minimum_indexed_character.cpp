#include <bits/stdc++.h>
using namespace std;

//This program checks whether the character of string 2 is present in string 1. If yes, it outputs the character at the minimum index

int main() {
	
	int t;
	cin>>t;
	
	string s1,s2;
	
	while(t!=0)
	{
	    cin>>s1;
	    cin>>s2;
	    int c[26]={0},i;
	    
	    for(i=0;i<s2.length();i++) c[s2[i]-'a']=1;
	    
	    for(i=0;i<s1.length();i++)
	    {
	        if(c[s1[i]-'a']==1)
	        {
	            cout<<s1[i]<<endl;
	            break;
	        }
	    }
	    
	    if(i==s1.length()) cout<<"No character present"<<endl;
	    
	    
	    t--;
	}
	
		return 0;
}
