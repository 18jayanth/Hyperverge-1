#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i=0;
	int arr[n];
	while(i<n)
	{
		cin>>arr[i];
		i++;
	}
	int k;
	cin>>k;
	i=0;
	int res=0;
	while(i<n)
	{
		switch(arr[i]==k)
		{
			case 1:
				res=1;
			    break;
			
				
		}
		i++;
	}
	cout<<res;
}