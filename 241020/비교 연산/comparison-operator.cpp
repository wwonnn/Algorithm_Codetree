#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    a >= b ? cout << 1 << endl : cout << 0 << endl;
    a > b ? cout << 1 << endl : cout << 0 << endl;
    b >= a ? cout << 1 << endl : cout << 0 << endl;
    b > a ? cout << 1 << endl : cout << 0 << endl;
    a == b ? cout << 1 << endl : cout << 0 << endl;
    a != b ? cout << 1 : cout << 0;

    return 0;
}