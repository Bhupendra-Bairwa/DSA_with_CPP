// Constrctor in Stack

#include <iostream>
#include <stack>
using namespace std;


class Stack_class {
private:
    stack<int> str;

public:
    void push() {
        str.push(4);
        str.push(5);
        str.push(6);
    }


    void stackk() {
        while (!str.empty()) {
            cout << str.top() << endl;
            str.pop();
        }
    }
};

int main() {
    Stack_class stackOps;
    stackOps.push();  
    stackOps.stackk();  

    return 0;
}
