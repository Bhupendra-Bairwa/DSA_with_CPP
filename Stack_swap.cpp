//Swaping values in between two stack

#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> str;
    stack<int> ss;
    
    str.push(4);
    str.push(5);
    str.push(6);
    
    ss.push(4);
    ss.push(5);
    ss.push(6);
    
    str.swap(ss);
    
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
