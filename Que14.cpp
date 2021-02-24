#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,j;
	for(i=0;i<n*2;i++)
	{
		if(i<5)
		{
			for(j=0;j<n-i-1;j++) cout<<" ";
		for(j=0;j<=i;j++)
		{
			cout<<"* ";
			
		}
		cout<<endl;
		}
		else
		{
			for(j=5;j<=i;j++) cout<<" ";
	    	for(j=0;j<(n*2)-i-1;j++) cout<<"* ";
			cout<<endl;		
	
		}
		
	}	
	return 0;
}
