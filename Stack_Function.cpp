// Stack implementation using Function

#include <iostream>
#include<stack>
using namespace std;

int Processtack(){
    stack<int> str;
    str.push(4);
    str.push(5);
    str.push(6);
    
    while(!str.empty())
    {
        cout<<str.top();
        cout<<endl;
        str.pop();
    }
}
int main()
{
    Processtack();
    return 0;
}