#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	string s;

	while(t!=0)
	{
		cin>>s;
		int i;	
		for(i=0;i<s.length();i++)
		{
			int c=0;
			if(islower(s[i]))
			{
				c=s[i]-'a';
				s[i]=char('z'-c);
			}
			if(isupper(s[i]))
			{
				c=s[i]-'A';
				s[i]=char('Z'-c);
			}

		}
		cout<<s;

		t--;
	}
	return 0;
}
