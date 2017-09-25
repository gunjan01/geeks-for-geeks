#include <bits/stdc++.h>
using namespace std;

int main() {

    int t,n,k;
    cin>>t;
    
    while(t!=0)
    {
        
        cin>>n>>k;
        
        int b[1000],m=0,c=0,i;
        
        while(n!=0)
        {
            b[m++]=n%2;
            n=n/2;
        }
        
        b[k]=1;
        
        for(i=0;i<m;i++)
        {
            c=c+b[i]*pow(2,i);
        }
        
        cout<<c<<endl;
       
        t--;
    }
  
	return 0;
}
