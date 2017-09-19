#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t,n;
    cin>>t;
    
    while(t!=0)
    {
        
        cin>>n;
        int a[n],i,j;
        for(i=0;i<n;i++) cin>>a[i];
        
    
        for(i=0;i<n-1;i++)
        {
           for(j=i+1;j<n;j++)
           {
               if(a[i]==a[j])
               {
                   a[j]=9999;
               }
           }

        }
        for(i=0;i<n;i++)
        {
            if(a[i]!=9999) cout<<a[i]<<" ";
        }

        cout<<endl;
        
        t--;
        
    }

	return 0;
}
