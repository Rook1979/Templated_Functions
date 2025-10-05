// Stephan Ulbrich
// CIS 1202 101
// 10-04-2025

#include <iostream>
#include <cmath> // to round the values
using namespace std;

// Templated function for floating-points
template <typename T>
T half(T value) {
    return value / 2;
}

// Overload for int-type with rounding
int half(int value) {
    return static_cast<int>(round(static_cast<float>(value) / 2));
}

int main() {
    // Tests
    float f = 9.5f;
    double d = 15.3;
    int i1 = 5;
    int i2 = 10;

    cout << "half(9.5f) = " << half(f) << endl;
    cout << "half(15.3) = " << half(d) << endl;
    cout << "half(5) = " << half(i1) << endl;
    cout << "half(10) = " << half(i2) << endl;

    return 0;
}