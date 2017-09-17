#include <iostream>
using namespace std;
//This program prints the index of first one in a sorted array of zeroes and ones 
int main() {

    int t;
    cin>>t;
    
    while(t!=0)
    {
            
           int n,i;
           cin>>n;
           int a[n];
           for(i=0;i<n;i++) cin>>a[i];
           
           for(i=0;i<n;i++)
            {
                    if(a[i]==1)
                    {
                        cout<<i<<endl;
                        break;
                    }
            }
            if(i==n)
                cout<<-1<<endl;
        
            t--;
                
    }
    
	return 0;
}
