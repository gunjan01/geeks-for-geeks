#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;
    
    string str;
    
    while(t!=0)
    {
        cin>>str;
        
        int c[26]={0},i;
        
        for(i=0;i<str.length();i++) c[str[i]-'a']++;
        
        for(i=0;i<str.length();i++)
        {
            if(c[str[i]-'a']>1) 
            {
                cout<<str[i]<<endl;
                break;
            }
        }
        if(i==str.length())
            cout<<"-1"<<endl;
            
            t--;
    
    }
    
	return 0;
}
