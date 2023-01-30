/*
OOP 재사용할수있는 함수를 만들수 잇는것이 제일 중요 

클래스 상송 
1. 기존 클래스에 기능을 추가하는 것 
2. 클래스가 나타내고 잇는 데이터에 다른 것을 더 추가 할수있다. 
3. 클래스 매서드가 동작하는 방식을 변경할 수 잇다. 
*/


#include <iostream>
#include "time.h"
using namespace std;

int main() {

    // NewTime temp1(); // 초기화 ... 
    NewTime temp2(3, 30, 2); // hour, minute, day

    // temp1.print();
    temp2.print();
    return 0;
}