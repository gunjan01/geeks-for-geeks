#include <bits/stdc++.h>
using namespace std;

//smallest number repeating k times in O(n)

int main() {
	
	int t,n,k;
	cin>>t;
	
	while(t!=0)
	{
	  
	    cin>>n>>k;
	    int c[10001]={0},i,d,max=0;
	    
	    for(i=0;i<n;i++)
	    {
	        cin>>d;
	        c[d]++;
	        if(max<d)
	        {
	            max=d;
	        }
	    }
	    
	    for(i=0;i<max+1;i++)
	    {
	        if(c[i]==k)
	        {
	            cout<<i<<endl;
	            break;
	        }
	    }
	    if(i==max+1) 
	    {
	        cout<<"-1"<<endl;
	    }
	    
	    t--;
	    
	}
	
	return 0;
}
