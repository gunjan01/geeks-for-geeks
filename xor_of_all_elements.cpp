#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;
    
    while(t!=0)
    {
        int n,x=0,i;
        cin>>n;
        
        int a[n];
        
        for(i=0;i<n;i++) 
        {
            cin>>a[i];
            x^=a[i];
        }
        
        for(i=0;i<n;i++)
        {
            a[i]=a[i]^x;
            cout<<a[i]<<" ";
            
            
        }
  
        cout<<endl;
         t--;
         
    }


	return 0;
}
