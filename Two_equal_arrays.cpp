#include <iostream>
using namespace std;

//O(n) solution for checking equal arrays

int main() {

        int t,n;
        cin>>t;
        
        
        while(t!=0)
        {
            cin>>n;
            int a[n],b[n],i,sum=0;
            
            for(i=0;i<n;i++)
            {
                cin>>a[i];
                sum=sum+a[i];
            }
            
            for(i=0;i<n;i++)
            {
                cin>>b[i];
                sum=sum-b[i];
            }        
            
            if(sum==0) cout<<"1"<<endl;
            else
                cout<<"0"<<endl;
                
                t--;

        }
        
        return 0;
}
