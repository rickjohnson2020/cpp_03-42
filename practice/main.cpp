#include <iostream>
using namespace std;

class A {
public:
  A() { v = 0; }
  void set(int i) { v = i; }
  int get(void) { return v; }
private:
  int v;
};

class B:public virtual A {};

class C:public virtual A {};

class D:public B, public C {};

int main() {
  D d;
//   d.A::set(1);
  d.B::set(2);
//   d.C::set(3);
d.D::set(4);
  cout << "A::v = " << d.A::get() << endl;
  cout << "B::v = " << d.B::get() << endl;
  cout << "C::v = " << d.C::get() << endl;
  cout << "C::v = " << d.D::get() << endl;
  return 0;
}