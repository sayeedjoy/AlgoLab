#include <iostream>
using namespace std;
#define SIZE 5

int a[SIZE];
int f = -1;
int r = SIZE - 1;

void enqueue(int x) {
    if (f < SIZE - 1) {
        f++;
        a[f] = x;
    }
}

void dequeue() {
    if (r > -1) {
        r--;
    }
}

void print() {
    for (int i = 0; i <= f && i <= r; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        enqueue(x);
    }
    print();
    dequeue();
    print();
    return 0;
}
