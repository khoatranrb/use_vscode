#include<iostream>
#include<string>
using namespace std;

int main()
{
	int q,lenA,lenB,X,y,j,i;
	cin>>q;
	string a,b;
	for(int k=0;k<q;k++)
    {
        cin>>a>>b;
    	lenA=0,lenB=0; 
        while(a[lenA]!=0) {
        ++lenA;
        }
        while(b[lenB]!=0) {
        ++lenB;
        }
        if(lenA>lenB)
        {
        	    j=0; i=0;X=0;
    	    	while(j<lenA)
    	    	{
    		    	if((b[i]==a[j])||(b[i]==a[j]-32)||(b[i]==a[j]+32))
    			  	{
    			  		X++; i++;
    		    	}
    		    	j++;
    	    	}
    	    	cout<<X;
        }  
    }
    return 0;
}
