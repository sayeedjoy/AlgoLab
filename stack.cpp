//
// Created by Sayeed Joy on 3/11/25.
//

#include <iostream>
using namespace std;
#define MAX 4

int arr[MAX];
int top = -1;

#define endl '\n'

void push(int x)
{
    if (top == MAX - 1)
    {
        cout << "Stack overflow" << endl;
        return;
    }
    top++;
    arr[top] = x;
}

int pop()
{
    if (top == -1)
    {
        cout << "Underflow" << endl;
        return -1;
    }
    int val = arr[top];
    top--;
    return val;
}

void print()
{
    if (top == -1)
    {
        cout << "Empty Stack" << endl;
        return;
    }
    cout << "Final elements: ";
    for (int i = top; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);

    print();

    cout << pop() << endl;
    cout << pop() << endl;

    print();

    return 0;
}
