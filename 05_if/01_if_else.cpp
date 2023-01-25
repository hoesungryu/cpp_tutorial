#include <iostream>

using namespace std;

int main(){


    // if 문하나의 한줄 여러줄은 중괄호로 
    if (true)
        cout <<" 조건이 참" << endl; 

    // if-else 구문 
    if (true) {
        cout <<" 조건이 참" << endl; 
    }
    else {
        cout <<" 조건이 거짓" << endl; 
    }

    // if-elif-else
    if (true) {
        cout<<"#1";
    }
    else if (true) {
        cout<<"#2";
    }
    else {
        cout << "#3";
    }

    return 0;
}