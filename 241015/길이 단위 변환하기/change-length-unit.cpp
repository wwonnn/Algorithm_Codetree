#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    float a_f = 9.2;
    float b_m = 1.3;
    double a_c = a_f * 30.48;
    double b_c = b_m * 160934;

    cout << fixed;
    cout.precision(1);
    cout << a_f << "ft = " << a_c << "cm" << endl;
    cout << b_m << "mi = " << b_c << "cm";

    return 0;
}