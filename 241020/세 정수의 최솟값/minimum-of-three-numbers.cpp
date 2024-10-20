#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c, min;
    cin >> a >> b >> c;

    if(a <= b){
        min = a;
    }
    else {
        min = b;
    }

    if(min <= c){

    }
    else{
        min = c;
    }
    cout << min;
    
    return 0;
}