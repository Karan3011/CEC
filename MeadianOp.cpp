#include<iostream>
#include<vector>

using namespace std;

int partition(vector<int> &arr,int l, int r)
{
	int i,j;
int pivot=arr[r];
i=l-1;
for(j=l;j<r;j++){
	if(arr[j]<pivot)
	{
		i++;
		swap(arr[i],arr[j]);

	}	
	}
	swap(arr[i+1],arr[r]);
	return i+1;

}


int mid(vector<int> &arr,int l,int r,int k)
{
	for(;;)
	{
		int pivot =partition(arr,l,r);		
		int len=pivot-l+1;

		if(k==len)
			return arr[pivot+1];

		else if(k<len)
			r=pivot-1;

		else
		{
			k=k-len;
			l=pivot+1;
		}
	}
}
int main()
{
	int n,input;
	vector<int>arr;
	cout<<"Enter n";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>input;
		arr.push_back(input);
	}
	int r=0;
	int l=n-1;
	int k= n/2;

int median =mid(arr,r,l,k);
cout<<"Median :- "<<median;
	return 0;
	
}
