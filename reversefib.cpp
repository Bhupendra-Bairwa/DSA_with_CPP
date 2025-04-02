#include<iostream>
using namespace std;

int fib(int n){
	if(n==1){
		return 0;
	}
	if(n==2){
		return 1;
	}
	return fib(n-2)+fib(n-1);
}

int main(){
	int num;
	cout<<"Enter n:";
	cin>>num;
	for(int i=1;i<=num;i++){
		cout<<fib(i)<<"\t";
	}
	cout<<endl;
	int temp=num;
	while(temp>0){
		cout<<fib(temp)<<"\t";
		temp--;
	}
}