#include <iostream>
#include <queue>
using namespace std;

void reverse(queue<int> &q)
{
    if (q.empty())
    {
        return;
    }

    int top = q.front();
    q.pop();
    reverse(q);
    q.push(top);
}
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    reverse(q);
    int a = q.front();
    cout << "the front value is " << a << endl;
    q.pop();
}