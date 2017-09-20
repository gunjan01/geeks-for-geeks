#include <bits/stdc++.h>
using namespace std;

//this program checks if a binary string of length>=2 starts or ends with 1//

int checkbinary(string s)
{
    int l=s.length();
    if(s[0]=='1' && s[l-1]=='1')
        return 1;
    else 
        return 0;
}



int main() {
	//code
	int t,n,i;
	string s;
	cin>>t;
	
	while(t!=0)
	{
	    cin>>n;
	    cin>>s;
	    int i,l,cnt=0;
	    for(i=0;i<n;i++)
	    {
	        for(l=2;l<=s.length()-i;l++)
	        {
	            if(checkbinary(s.substr(i,l))==1) cnt++;
	        }
	    }
	    cout<<cnt<<endl;
	    
	    t--;
	}
	    

	return 0;
}
