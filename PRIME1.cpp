#include<bits/stdc++.h>
using namespace std;
bool prim(int n)
{
	if(n==2||n==3||n==5||n==7)
		return 1;
	if(n%2==0||n%3==0||n%5==0||n%7==0)
		return 0;
	long  sq;
	sq=sqrt(n);
	
	if(n==sq*sq)
		return 0;
	return 1;
}
int main()
{
	int n;
	cout<<" enter a num ";
	cin>>n;
	if(prim(n)==1)
	cout<<"its a prime";
	else
	cout<<"not prime";
}
