/* Given two numbers M and N. Write a program to find the position of rightmost different bit in binary representation of numbers.

Input:
First line of input contains a single integer T which denotes the number of test cases. T test cases follows. First line of each test case contains two space separated integers M and N.

Output:
For each test case print the position of rightmost different bit in binary representation of numbers. If both M and N are same then print -1 in this case.

Constraints:
1<=T<=100
1<=M<=1000
1<=N<=1000

Example:
Input:
2
11 9
52 4
Output:
2
5
************************************************************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t,n,m;
	cin>>t;
	
	while(t!=0)
	{
	    
	    cin>>m>>n;
	    
	    int a[1000],b[1000],k=0,l=0,i;
	    
	    while(m!=0)
	    {
	        a[k++]=m%2;
	        m=m/2;
	    }
	    
	    while(n!=0)
	    {
	        b[l++]=n%2;
	        n=n/2;
	    }
	    
	    int peak=max(k,l);
	    
	    if(k<l)
	    {
	        while(k!=peak) a[k++]=0;
	    }
	    if(l<peak)
	    {
	        while(l!=peak) b[l++]=0;
	    }
	    
	    for(i=0;i<peak;i++)
	    {
	        if(a[i]!=b[i])
	        {
	            cout<<i+1<<endl;
	            break;
	        }
	    }
	    if(i==peak) cout<<"-1"<<endl;
	    
	    t--;
	    
	}
	
	
	
	return 0;
}
