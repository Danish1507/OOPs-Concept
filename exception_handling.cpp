#include <iostream>
using namespace std;

int divide(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0; // Returning a default value or doing error handling
    }
    return a / b;
}

int main() {
    int x = 10, y = 0;
    int result;

    // Check for division by zero every time
    if (y == 0) {
        cout << "Error: Division by zero!" << endl;
    } else {
        result = divide(x, y);
        cout << "Result: " << result << endl;
    }

    return 0;
}
