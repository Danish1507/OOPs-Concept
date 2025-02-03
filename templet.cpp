

#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add<int>(5, 10) << endl;    // 15
    cout << add<float>(3.5, 2.5) << endl;  // 6.0
    cout<< add<string>("abc","xyz")<<endl;
    return 0;
}
