#include <iostream>

using namespace std;

class A{
    ~A(){
        cout<<"Dest";
    }
};

int main(){
    A *a1 = new A();
    A *a2 = new A();

    return 0;
}