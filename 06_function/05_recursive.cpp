#include <iostream>

using namespace std;

// 재귀는 끝까지 실행된다음 역순으로 올라오는구나~ 

void countDown(int x) {
    cout << "Counting ..." << x << endl;
    if (x > 0)
        countDown(x - 1);
        cout << x << "번째 재귀함수\n";
}

int main() {
    countDown(4);
    return 0; 
} 

// ------------------------------------------------ //
/*
함수를 지시하는 포인터 
다른 함수의 주소를 매개변수로 넘겨주기위해서는 
1. 함수의 주소를 얻는다.  함수이름을 넘기면 주소가 얻어지게된다. 
2. 함수를 지시하는 포인터를 선언 ( 함수의 데이터형을 지시해줘야된다. )
3. 함수를 지시하는 포인터를 사용하여 선언한다. 
*/ 

int func(int); 

int main() {

    int (*pf)(int); //주소의 값은 별이구나!  
    pf = func; 

    cout << (*pf)(3) << endl;   
    return 0;

}

int func(int n) {
    return n+1;
}