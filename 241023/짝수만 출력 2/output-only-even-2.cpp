#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> b >> a;

    int i = b;
    while(i >= a){
        if(i%2 == 0){
            cout << i << ' '; 
        }
        i--;
    }

    return 0;
}