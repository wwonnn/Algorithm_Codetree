#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int h, m;
    cin >> h;
    char c = cin.get(); //cin.get()은 문자를 하나 입력 받는 함수(공백도 문자로 포함)
    cin >> m;

    cout << h+1 << c << m;

    return 0;
}