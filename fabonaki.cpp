#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the value of n";
	cin>>n;
	int fabo=0;
	int a=0;
	int b=1;
	for(int i=1;i<=n;i++)
	{
		fabo=a;
		a=a+b;
		b=fabo;
		cout<<fabo<<"\t";
	}
}