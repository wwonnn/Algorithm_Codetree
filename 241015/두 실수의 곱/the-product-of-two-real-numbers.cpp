#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    float a = 5.26;
    float b = 8.27;
    double mul = a * b;

    cout << fixed;
    cout.precision(3);
    cout << mul;
    
    return 0;
}