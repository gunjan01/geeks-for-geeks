/* Input:
First line consists of T test cases. First line of every line test case consists of N, denoting number of elements in array. Second line of every test case consists of array elements.

Output:
Single line output, print the minimum operations to be done to make it strictly increasing.

Constraints:
1<=T<=100
1<=N<=1000

Example:
Input:
2
6
1 2 3 6 5 4
7
1 2 3 4 5 6 7
Output:
2
0

********************************************************************************************************************* */

#include <bits/stdc++.h>
using namespace std;

int longestsubsequence(int *a,int n)
{
    int t[n],i,j,max=0;
    for(i=0;i<n;i++) t[i]=1;
    
    for(i=1;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[j]<a[i])
            {
                if(t[i]<(t[j]+1)) t[i]=t[j]+1;
            }
        }
        if(t[i]>max) max=t[i];
    }
    
    if(n==1) return 1;
    else return max;
    
}

int main() {
	
	int t,n;
	cin>>t;
	
	while(t!=0)
	{
	    cin>>n;
	   
	    int a[n],i;
	    for(i=0;i<n;i++) cin>>a[i];
	    
	    cout<<n-longestsubsequence(a,n)<<endl;
        
	    t--;
	    
	}
	
	
	return 0;
}
