#include <iostream>
using namespace std;

//This program prints out the rest of the strin after a certain character has occured n times !

int main() {
    
    
    int t,n;
    cin>>t;
    
    string s;
    char c;
    
    while(t!=0)
    {
        cin>>s;
        cin>>c;
        cin>>n;
        
        if(n==0) 
        {
            cout<<s<<endl;
        }
        else
        {
            int i,index,cnt=0;
        
            for(i=0;i<s.length();i++)
            {
                if(s[i]==c) cnt++;
            
                if(cnt==n)
                {   
                    index=i;
                    break;
                }
            }
        
            if(cnt==0|| cnt<n || index==s.length()-1) 
                cout<<"Empty string"<<endl;
            
            else cout<<s.substr(i+1,s.length())<<endl;
        }
        
        t--;
    }

        return 0;

}
