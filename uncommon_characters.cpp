#include<bits/stdc++.h>
using namespace std;

int main() {

	int t;
	cin>>t;
	string s1,s2;
	
	while(t!=0)
	{
	   cin>>s1;
	   cin>>s2;
	   int i;
	   int f[26]={0};
	   
	   for(i=0;i<s1.length();i++) f[s1[i]-'a']=1;
	   
	   for(i=0;i<s2.length();i++)
	   {
	       if(f[s2[i]-'a']==1 || f[s2[i]-'a']==-1)
	          f[s2[i]-'a']=-1;
	       else
	          f[s2[i]-'a']=2;
	  }
	    
	   for(i=0;i<26;i++)
	   {
	       if(f[i]==1 || f[i]==2) cout<<char('a'+i);
	   }
	    
	    cout<<endl;
	    
	    t--;
	}
	return 0;
}
