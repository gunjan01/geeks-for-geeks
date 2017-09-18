#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	
	while(t!=0)
	{
	    int n,i,mx=0;
	    cin>>n;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	        mx=max(mx,a[i]);
	    }
        cout<<mx<<endl;
        t--;
	}
	return 0;
}
