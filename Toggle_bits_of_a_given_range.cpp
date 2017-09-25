#include <bits/stdc++.h>
using namespace std;

int main() {

    int t,n,l,r;
    cin>>t;
    
    while(t!=0)
    {
       cin>>n>>l>>r;
       int b[1000],c=0,k=0,i;
       
       while(n!=0)
       {
           b[k++]=n%2;
           n=n/2;
       }
        
       for(i=l-1;i<=r-1 && i<k; i++)
       {
           if(b[i]==0) b[i]=1;
           else b[i]=0;
       }
        
       for(i=0;i<k;i++)
       {
           c=c+(b[i]*pow(2,i));
       }
        
       cout<<c<<endl;
        
  
        t--;
    }

	return 0;
}
