#include <iostream>
#include <queue>

using namespace std;

/*
    stl queue container
    fifo first in, first out
    lilo last in, last out
    insert at back (push_back) and removed form front (pop_front)
    there is no top() in queue, only front() and back()
    push at end of queue

    push()
    pop()
    front()
    back()
*/

int main() {
  queue<int> q;

  q.push(10); // first in, first out
  q.push(20);
  q.push(40);
  q.push(30);
  q.push(90);
  q.push(50); // last in, last out

  // get size
  cout << "q.size(): " << q.size() << endl;   // 6

  // get first
  cout << "q.front(): " << q.front() << endl; // 10 or first of queue

  // get last
  cout << "q.back(): " << q.back() << endl;   // 50 or last of queue

  // iterate 10 20 40 3 90 50
  while (!q.empty()) {
    cout << q.front() << " ";
    q.pop(); // since it is queue, it calls pop_front to remove the first in
  }
  cout << endl;

  return 0;
}