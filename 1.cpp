
#include <stack>
using namespace std;
class CQueue {
public:
    stack<int> stack1;
    stack<int> stack2;
    CQueue() {}
    
    void appendTail(int value) {
        stack1.push(value);
    }
    
    int deleteHead() {
        if (stack1.empty()) return -1;
        
        while (!stack1.empty()){ // 1 -> 2
            int tmp = stack1.top();
            stack1.pop();
            stack2.push(tmp);
        }
        // delete head
        int res = stack2.top();
        stack2.pop();
        while (!stack2.empty()){ // 1 <- 2
            int temp = stack2.top();
            stack2.pop();
            stack1.push(temp);
        }
        return res;
    }
};