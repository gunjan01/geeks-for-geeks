#include <bits/stdc++.h>
using namespace std;

//This program checks for the mismatch of one character in an array of strings 

int check_character(string s1,string s2)
{
    if(s1.length()!=s2.length()) return 0;
    else
    {
        int cnt=0,i;
        for(i=0;i<s1.length();i++)
        {
            if(s1[i]!=s2[i]) cnt++;
        }
        if(cnt==1) return 1;
        else return 0;
    }

}

int main() 
{

    int t,n;
    cin>>t;
    
    while(t!=0)
    {
        cin>>n;
        int i;
        string s[n],str;
        
        for(i=0;i<n;i++) cin>>s[i];
        cin>>str;
        
        for(i=0;i<n;i++)
        {
            if(check_character(s[i],str))
                break;
        }
        
        if(i==n) cout<<"False"<<endl;
        else cout<<"True"<<endl;

        t--;
    }

	return 0;
}
