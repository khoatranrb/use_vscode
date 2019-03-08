#include<iostream>
#include<string>
using namespace std;

int main()
{
	int q,lenA,lenB,X;
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
        	for(int i=0;i<lenB;i++)
        	{
    	    	for(int j=0;j<lenA;j++)
    	    	{
    		    	if((b[i]==a[j])||(b[i]==a[j]-32)||(b[i]==a[j]+32))
    		     	{
    		     		X=1;
    			    	for(int x=1;x<lenB-j;x++)
    			    	{
    			    	    if((b[i]==a[j])||(b[i]==a[j]-32)||(b[i]==a[j]+32)) X++;
    			    	}
    			    	j+=100;
    		    	}
    	    	}
        	}
        }  
    }
    return 0;
}
