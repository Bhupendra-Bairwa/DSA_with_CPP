#include<iostream>
using namespace std;
int main()
{
	int a[5];
	cout<<"enter the no";
	int i=0;
	while(i<5){
		cin>>a[i];
		i++;
	}
	i=0;
	while(i<5){
		cout<<a[i];
		i++;
	}
}