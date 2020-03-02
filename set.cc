#include <iostream>
#include <iterator>
#include <set>

using namespace std;

/*
    red black tree self balancing bst
    olog insert, remove, find
*/

int main() {

  // declare and init using initializer_list (C++14)
  set<int> s2 = {10, 10, 10, 20, 20, 30, 1, 2, 3, 90, 4, 5};

  // iterate // 1 2 3 4 5 10 20 30 90 
  for (int e : s2) {
    cout << e << " ";
  }
  cout << endl;

  // ---

  // declare and init
  set<int> s;

  // add and sort o(logn)
  s.insert(30);
  s.insert(100);
  s.insert(70);
  s.insert(70); // key is not duplicated since set has unique keys
  s.insert(2);
  s.insert(200);

  // iterate
  for (int e : s) {
    cout << e << " "; // 2 30 70 100 200
  }
  cout << endl;

  // find and remove o(logn)
  s.erase(40); // dont change
  s.erase(70); // 70

  // iterate using iterator
  set<int>::iterator itr;
  for (itr = s.begin(); itr != s.end(); ++itr) {
    int e = (int)*itr;
    cout << e << " "; // 2 30 100 200
  }
  cout << endl;

  // find o(logn)
  s.find(40);

  // check if contains o(logn)
  bool is_in = false;
  is_in = s.find(10) != s.end();
  cout << "Is 10 in? " << is_in << endl; // 0
  is_in = s.find(30) != s.end();
  cout << "Is 30 in? " << is_in << endl; // 30

  // get last
  itr = s.end();
  itr--;                                 // or prev(itr)
  cout << "Last: " << (int)*itr << endl; // 200

  // get first
  itr = s.begin();
  cout << "First: " << (int)*itr << endl; // 2

  // remove first
  s.erase(s.begin()); // 2

  // remove last
  s.erase(prev(s.end())); // 200

  // remove index i

  // iterate
  for (int e : s) {
    cout << e << " "; // 30 100
  }
  cout << endl;

  return 0;
}