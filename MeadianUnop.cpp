#include<iostream>
#include<vector>
#include<cstdlib>

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

int Random(vector<int> &arr,int l,int r)
{
	int n= r-l+1;
	int temp=rand()%n;
	swap(arr[l+temp],arr[r]);
	
	return partition(arr,l,r);
}

void Quicksort(vector<int> &arr,int l,int r)
{
	
	if(l<r)
	{
		int pivot =partition(arr,l,r);
		Quicksort(arr,l,pivot-1);
		Quicksort(arr,pivot+1,r);
	}
}

void median(vector<int> &arr,int n)
{
	int mid;
	
		
		mid= (n)/2;
	
	
	cout<<"Meadian :- "<<arr[mid];
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
	int l=0;
	int r=n-1;
	Quicksort(arr,l,r);
	median(arr,n);
	return 0;
	
}
