/* You have been given N dots and a triangle is formed using these dots in the following way-
    .
   . .
  . . .
 . . . .

i.e,first line of triangle contains 1 dot,second line contains 2 dots,third line 3 dots and so on.
You have to find the minimum hieght H of the triangle that can be formed using these N dots.


*********************************************************************************************************** */

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	
	int t,n;
	cin>>t;
	
	while(t!=0)
    {
        
        cin>>n;
        
        int h=0,i=1;
        
        while(h<n)
        {
            n=n-i;
            i++;
            h++;
        }
        
        
        cout<<h<<endl;
        
        t--;
        
    }
	
	
	
	return 0;
}
