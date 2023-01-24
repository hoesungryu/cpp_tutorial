#include <iostream>

using namespace std;


/*
OOP : 컴파일 시간이 아닌 실행 시간에 어떠한 결정을 내릴 수 있다. 
EX) 배열생성
- conventional: 배열의 크기가 컴파일시미리결정되어야된다. 
- OOP: 프로그래밍이 실행 되는 시간에 배열의 크기를 결정 한다. 
*/


int main(){

    int a = 6; // 변수 선언 
    cout << "a의 값 " << a << endl;
    cout << "a의 주소 " << &a << endl; // &: Address operator 16진수로 메모리 공간 표현 

    /*
    포인터 설정하는 방법 
    */
    //int *a; // C-style 이게 더 좋아보이는군... 
    // int* b; // C++ style
    // int* c, d; // C-pointer ,  D 는 int 

    // 포인터: 사용할 주소에 이름을 붙인다. 즉 포인터는 포인터의 이름이 주소를 나타내게 된다 
    // * (shifttype); 간접연산자
    int *b; 
    b = &a; // 그렇기 때문에 주소가 와야된다. 주소가 즉 변수 b이다. 
    cout << "b의 주소 " << b << endl;
    cout << "b의 값 " << *b << endl; // 값은 간접 참소연산자..를 가지고 확인해야된다. 주소의 값은 별이구나! 

    *b = *b + 1;

    cout << "이제 b의 값은 " << *b << endl;
    cout << "이제 a의 값은 " << a << endl;
     
    return 0;
}