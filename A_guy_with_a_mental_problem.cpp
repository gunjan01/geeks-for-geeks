#include <bits/stdc++.h>
using namespace std;

int main() {

    int t,n;
    cin>>t;
    
    while(t!=0)
    {
        cin>>n;
        int a[n],b[n],se1=0,so1=0,se2=0,so2=0,i;
        
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            if(i%2==0) se1+=a[i];
            else so1+=a[i];
        }
        
        for(i=0;i<n;i++)
        {
            cin>>b[i];
            if(i%2==0) se2+=b[i];
            else so2+=b[i];
        
        }
        
        cout<<min((se1+so2),(se2+so1))<<endl;
        
        t--;
        
    }

	return 0;
}
