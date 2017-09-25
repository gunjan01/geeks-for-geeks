#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t,n;
	cin>>t;
	
	string s;
	
	
	while(t!=0)
	{
	    
	    cin>>s>>n;
	    int k=0,i;
	    
      //Remove duplicates

        for(i=0;i<s.length()-1;i++)
        {
            if(s[i]!=s[i+1])
                s[k++]=s[i];
        }
	    s[k]=s[s.length()-1];
        s=s.erase(k+1,s.length());
        
        int c[26]={0},cnt=0;
	    
	    for(i=0;i<s.length();i++) c[s[i]-'a']++;
	    
	    for(i=0;i<26;i++)
	    {
	        if(c[i]==n) cnt++;
	    }

        cout<<cnt<<endl;
        
	    t--;
	}
	

	
	return 0;
}
