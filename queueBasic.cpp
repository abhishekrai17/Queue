// BASIC OF QUEUE
#include <iostream>
using namespace std;
#define n 20
// declaring queue class
class queue
{
    int *arr;
    int front;
    int back;

public:
    // DECLARING QUEUE CONSTRUCTOR
    queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }
    // CREATING PUSH METHOD
    void push(int x)
    {
        if (back == n - 1)
        {
            cout << "overflow" << endl;
            return;
        }
        back++;
        arr[back] = x;
        if (front == -1)
        {
            front++;
        }
    }
    // CREATIND POP METHOD
    void pop()
    {
        if (front == -1)
        {
            cout << "no elements found" << endl;
            return;
        }
        front++;
    }
    // CREATIND PEEP METHOD
    int peep()
    {
        if (front == -1)
        {
            cout << "no elements found" << endl;
            return -1;
        }
        return arr[front];
    }
    // CREATIND EMPTY METHOD
    bool empty()
    {
        if (front == -1)
        {
            return true;
        }
        return false;
    }
};
// CREATIND MAIN METHOD
int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    int a = q.peep();
    cout << a << endl;

    q.pop();
    int b = q.peep();
    cout << b << endl;
}