#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;

    if(a > b){
        if(c > a){
            cout << a;
        }
        else if(c < b){
            cout << b;
        }
        else {
            cout << c;
        }
    }
    else{
        if(c > b){
            cout << b;
        }
        else if(c < a){
            cout << b;
        }
        else {
            cout << c;
        }
    }

    return 0;
}