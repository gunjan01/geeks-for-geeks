#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	string s;
	
	while(t!=0)
	{
	    cin>>s;
	    int cnt=1,i;
	    for(i=0;i<s.length();i++)
	    {
	        if(isupper(s[i])) cnt++;
	    }
	    cout<<cnt<<endl;
	    
	    t--;
	}

	return 0;
}
