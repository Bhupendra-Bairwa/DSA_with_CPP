// Stack implimentation 

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> str;
    str.push(4);
    str.push(5);
    str.push(6);
    stack<int> ss(str);
    
    while(!str.empty())
    {
        cout<<str.top()<<endl;
        str.pop();
    }
    
    while(!ss.empty())
    {
        cout<<ss.top()<<endl;
        ss.pop();
    }
    return 0;
}