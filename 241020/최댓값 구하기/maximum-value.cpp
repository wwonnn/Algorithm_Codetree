#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c, max;
    cin >> a >> b >> c;

    if(a >= b){
        max = a;
        if(max < c){
            max = c;
        }
    }
    else{
        max = b;
        if(max < c){
            max = c;
        }
    }
    cout << max;

    return 0;
}