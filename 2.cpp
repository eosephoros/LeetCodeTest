
#include <stack>
#include <iostream>
using namespace std;

int min(stack<int> stack1)
{
    stack<int> stack2;
    int minNum = 0;
    while (!stack1.empty())
    {
        stack2.push(stack1.top());
        stack1.pop();
        if (!stack1.empty())
        {
            if (stack2.top() <= stack1.top())
            {
                minNum = stack2.top();
            }
        }else{
            minNum=minNum;
        }
    }
    while (!stack2.empty())
    {
        stack1.push(stack2.top());
        stack2.pop();
    }
    cout <<"here is minum"<< minNum<<endl;
    return minNum;
}
int main()
{
    stack<int> minStack;
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    min(minStack);
    cout <<"aaaa "<< min(minStack)<<endl;
    minStack.pop();
    minStack.top();
    cout << min(minStack);
    return 0;
}