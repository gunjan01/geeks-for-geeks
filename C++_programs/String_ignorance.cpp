/* Given a string of both uppercase and lowercase alphabets, the task is to print the string with alternate occurrences of any character dropped(including space and consider upper and lowercase as same).

Input:
First line consists of T test cases. First line of every test case consists of String S.

Output:
Single line output, print the updated string.

Constraints:
1<=T<=100
1<=|String|<=10000

Example:
Input:
2
It is a long day dear.
Geeks for geeks
Output:
It sa longdy ear.
Geks fore
********************************************************************************************************************** */
#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t,n;
	cin>>t;
	n=t;
	string s;
	
	while(t!=0)
	{
	    if(n==t) cin.ignore();
	    
	    getline(cin,s);
	    
	    
	    int a[256]={0},i;
	    
	    for(i=0;i<s.length();i++)
	    {
	        char t=s[i];
	        
	        if(isupper(t)) t=tolower(t);
	        a[t]++;
	        
	        if(a[t]%2==1)
	        {
	            cout<<s[i];
	        }
	    }
	    
	    cout<<endl;
	    
	    t--;
	    
	}
	
	
	return 0;
}
