// Stack implimentation by using loop

#include <iostream>
#include<stack>
using namespace std;
int main()
{
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

    return 0;
}