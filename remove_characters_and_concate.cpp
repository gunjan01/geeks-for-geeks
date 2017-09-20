#include <bits/stdc++.h>
using namespace std;

int main() {
    
	int t;
	cin>>t;
	string s1,s2;
	while(t!=0)
	{
	    cin>>s1;
	    cin>>s2;
	    int f[26]={0},i;
	    string str="";
	    
	    for(i=0;i<s1.length();i++)
	    {
	        f[s1[i]-'a']=1;
	    }
	    for(i=0;i<s2.length();i++)
	    {
	        if(f[s2[i]-'a']==1 || f[s2[i]-'a']==-1)
	            f[s2[i]-'a']=-1;
	       else
	           f[s2[i]-'a']=2;
	    }
	    for(i=0;i<s1.length();i++)
	    {
	        if(f[s1[i]-'a']==1)
	           str=str+s1[i];
	    }
	    for(i=0;i<s2.length();i++)
	    {
	        if(f[s2[i]-'a']==2)
	            str=str+s2[i];
	    }
	    if(str=="")
	        cout<<"-1"<<endl;
	    else
	        cout<<str<<endl;
	    
	    t--;
	    
	}
	
	return 0;
}
