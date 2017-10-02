#include <bits/stdc++.h>
using namespace std;

int main() {

    int t,n,k;
    cin>>t;
    
    while(t!=0)
    {
        cin>>n>>k;
        int a[n],i,index;
        
        for(i=0;i<n;i++) cin>>a[i];
        
        while(k!=0)
        {
            int max=0;
            
            for(i=0;i<n;i++)
            {
                if(a[i]>max)
                {
                    max=a[i];
                    index=i;
                }
            }
            
            cout<<max<<" ";
            
            a[index]=-1;
            
            k--;
            
        }
        
        cout<<endl;
        
        t--;
        
    }



	return 0;
}
