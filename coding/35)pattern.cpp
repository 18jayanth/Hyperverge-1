#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=6;i++)
	{
		for(int j=1;j<=(n-i);j++)
		{
			cout<<" ";
		}
		for(int j=1;j<=i;j++)
		{
		
		cout<<"*";
	}
		
		
		cout<<"\n";
	}
}