#include <bits/stdc++.h>
using namespace std;

//O(n2) Generate all the substrings and individually check them. 

int check_even(string s)
{
    if((s[s.length()-1]-'0')%2==0) return 1;
    else return 0;
}


int main() {

    int t;
    cin>>t;
    
    string s;

    while(t!=0)
    {
        
        cin>>s;
        
        int l=s.length(),cnt=0,i,j;
        
        for(i=0;i<l;i++)
        {
            for(j=1;j<=l-i;j++)
            {
                if(check_even(s.substr(i,j))) cnt++;
            }
        }
        
        cout<<cnt<<endl;

        t--;
    }

	return 0;
}



****************************************************************************************************************************

//O(n) approach is to add the occurence of any even bit which is index+1 times

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    
    string s;

    while(t!=0)
    {
        
        cin>>s;
        
        int l=s.length(),cnt=0,i,j;
        
        for(i=0;i<l;i++)
        {
            if((s[i]-'0')%2==0) cnt=cnt+(i+1);
        }
        
        cout<<cnt<<endl;

        t--;
    }



	return 0;
}




