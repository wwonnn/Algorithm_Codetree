#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char c1, c2, c3;
    int a, b, c;
    int a_num = 0;

    cin >> c1 >> a;
    cin >> c2 >> b;
    cin >> c3 >> c;

    if(c1 == 'Y'){
        if(a >= 37){
            a_num++;
        }
    }
    if(c2 == 'Y'){
        if(b >= 37){
            a_num++;
        }
    }
    if(c3 == 'Y'){
        if(c >= 37){
            a_num++;
        }
    }

    if(a_num >= 2){
        cout << 'E';
    }
    else{
        cout << 'N';
    }
    
    return 0;
}