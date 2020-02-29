#include <iostream>
#include <stack>

using namespace std;

/*
    interface adaptor of deque collection for the stack interface
    first in, last out
    last in, first out
    add to top (push_back) and remove from top (pop_back)
*/

int main() {
  stack<int> s;

  // push insertion O(1)
  s.push(40);
  s.push(50);
  s.push(25);
  s.push(85);
  s.push(1);

  // size
  cout << "Size: " << s.size() << endl; // 5

  // print and pop
  while (!s.empty()) {
    int e = s.top();  // get reference to top most element (back) O(1)
    cout << e << " "; // 1 85 25 50 40
    s.pop(); // void remove top O(1) // call pop_back from underlying deque
             // container
  }
  cout << endl;

  // get size O(1)
  cout << "Size: " << s.size() << endl; // 0

  // stack interface offer no iterator

  return 0;
}