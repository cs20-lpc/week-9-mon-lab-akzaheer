#include <iostream>
#include "LinkedQueue.hpp"
using namespace std;

int main() {
    LinkedQueue<int> q;         // make queue

    q.enqueue(67);
    q.enqueue(6767);           // add numbers
    q.enqueue(676767);

    cout << q.front() << endl;
    cout << q.back() << endl;           // test functuions
    cout << q.getLength() << endl;

    q.dequeue();
    cout << q.front() << endl;      // test dequeue

    q.clear();
    cout << q.isEmpty() << endl;                // test clear
    try{
        q.dequeue();
    } catch(string e) {
        cout << e << endl;              // error testing
    }
    return 0;
}