#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    if(n==1){
        cout << "John";
    }
    else if(n==2){
        cout << "Tom";
    }
    else if(n==3){
        cout << "Paul";
    }
    else {
        cout << "Vacancy";
    }

    return 0;
}