#include <iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int> str;
    str.push(4);
    str.push(5);
    str.push(6);
    
    cout<<str.top();
    return 0;
}
