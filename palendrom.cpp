#include<iostream>
using namespace std;
int main()
{
	int N;
    cout<<"enter the number of N"<<endl;
    cin>>N;
    int res=N;
    int sum=0;
    int temp=0;
    while(N>0)
    {
        temp=N%10;
        sum += temp*temp*temp;
        N=N/10;
    }
    if (res==sum){
        cout<<"same "<<endl;
    }
    else{
        cout<<"different"<<endl;
    }
    return 0;
}