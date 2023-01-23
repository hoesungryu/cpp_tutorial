
/*
1. 변수의 자료형 
2. 변수의 이름 
3. 변수 저장 위치(메모리영역) 
*/

// 변수이름은 숫자로 시작할수 없다. 
// 예약어는 사용될수 없다. 
// whitespace is not allowed
#include <iostream>
using namespace std; 

int main(){
    int a;  // variable declaration
    a = 7;  // variable allocation
    int b = 7; // variable initializer 


    // print 
    // c++ 에서 문자열 .. 
    cout << "a=" << a << ", b = "<<  b << endl;
    cout << "a=" << &a << ", b = "<<  &b << endl; // & 메모리 주소 
    return 0 ;

}
