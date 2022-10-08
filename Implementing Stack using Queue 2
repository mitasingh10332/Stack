
#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    queue<int> q1;
    queue<int> q2;
    int N;
    Stack()
    {
        N = 0;
    }
    void push(int value)
    {
        q1.push(value);
        N++;
    }
    int size()
    {
        return N;
    }
    void pop()
    {
        if (q1.empty())
        {
            return;
        }

        while (q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        N--;
        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }
    int top()
    {
        return q1.back();
    }
};

int main()
{
    Stack s;
    s.push(1);
    s.push(3);
    s.push(4);
    s.push(2);
    cout<<s.top()<<endl;

    return 0;
}



