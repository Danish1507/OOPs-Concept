#include <iostream>
using namespace std;

class A {
private:
    int num;
public:
    A() { num = 10; }
    friend void show(A obj);  // here the friend function in declared but we can not define the function here because it is not a member of the class 

};

// now here we are defining the friend function that was initiated in the class Show().
void show(A obj) {
    cout << "Private value: " << obj.num << endl;
}

int main() {
    A obj;
    show(obj);
    return 0;
}
