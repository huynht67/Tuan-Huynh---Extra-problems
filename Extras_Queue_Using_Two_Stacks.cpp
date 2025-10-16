#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

stack<int> stack1;
stack<int> stack2;
void transfer(){
    while (!stack1.empty()){
        stack2.push(stack1.top());
        stack1.pop();
    }
}

void enqueue(int x){
    stack1.push(x);
}

void dequeue(){
    if(stack2.empty()){
        transfer();
    }
    if(!stack2.empty()){
        stack2.pop();
    }
}

int front(){
    if(stack2.empty()){
        transfer();
    }
    if(!stack2.empty()){
        return stack2.top();
    }
    return -1;
}

int main() {
    
    int q;
    cin >> q;
    
    while(q--){
        int type;
        cin >> type;
        if(type == 1){
            int x;
            cin >> x;
            enqueue(x);
        }
        else if(type ==2){
            dequeue();
        }
        else if(type ==3){
            cout << front() << endl;
        
        }
    }   
    return 0;
}
