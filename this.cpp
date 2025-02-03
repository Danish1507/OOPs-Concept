#include <iostream>
using namespace std;

class Example {
private:
    int value;
public:
    void setValue(int value) {
        this->value = value;
    }
    void print() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Example obj;
    obj.setValue(10);
    obj.print();
    return 0;
}
