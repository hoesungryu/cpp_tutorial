#include <iostream>

using namespace std;

/*
함수 템플릿
구체적인 데이터형을 포괄할수있는 일반형 함수 .. 
하지만, 완전 포괄은 아니고 선언되는 순간 고정된다. 즉 하나가 인트로 고정되면 뒤에잇는 것도 인트로 고정 된다. 
*/


template <class Any>
Any sum(Any, Any);
template <class Any>
Any sum(int, Any);

int main(){
    int a = 3;
    int b = 4;
    //cout << sum(a, b) << endl;

    float c = 3;14;
    float d = 1.592;
    cout << sum(c, d) << endl;
    cout << sum(a, c) << endl;

    return 0;
}

template <class Any>
Any sum(Any a, Any b){
    return a + b;
}

template <class Any>
Any sum(int a, Any b){
    return a + b;
}