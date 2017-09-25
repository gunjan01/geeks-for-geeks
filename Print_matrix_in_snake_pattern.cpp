#include <bits/stdc++.h>
using namespace std;

int main() {

    int t,n;
    cin>>t;
    
    while(t!=0)
    {
        cin>>n;
        
        int a[n][n],i,j;
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++) cin>>a[i][j];
        }
        
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                for(j=0;j<n;j++) cout<<a[i][j]<<" ";
            }
            else
            {
                for(j=n-1;j>=0;j--) cout<<a[i][j]<<" ";
            }
        }
        
        cout<<endl;
       
        t--;
   
    }
	return 0;
}
