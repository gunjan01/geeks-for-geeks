#include <bits/stdc++.h>
using namespace std;

int main() {
	
  
	int t;
	cin>>t;
	//Here i used the library function sort to do a quick O(n) solution 	
	while(t!=0)
	{
	    int n;
	    cin>>n;
	    int a[n],i;
	    for(i=0;i<n;i++) cin>>a[i];
	    
	    sort(a,a+n);
	    
	    sort(a+n/2,a+n,greater<int>());
	    
	    for(i=0;i<n;i++) cout<<a[i]<<" ";
	    cout<<endl;
	    
	    t--;
	    
	}
	return 0;
}
