#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int key=(n/2)+1;
	int i,j;
	for(i=0;i<n;i++)
	{
		if(i<key)
		{
			for(j=0;j<(n/2)-i;j++) cout<<" ";
		    for(j=0;j<2*i+1;j++)
		{
			cout<<j+1;
			
		}
		cout<<endl;
		}
		else
		{
			for(j=key;j<=i;j++) cout<<" ";
			for(j=0;j<n-i;j++)  cout<<j+1;
			cout<<endl;		
	
		}
		
		
	}	
	return 0;
}
