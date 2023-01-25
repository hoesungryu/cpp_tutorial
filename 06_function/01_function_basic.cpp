#include <iostream>

using namespace std; 


/*
함수란? 
하나의 특별한 목적의 작업을 수행하기 위해 독립적으로 설계된 코드의 집합 을 의미 
리턴값이 잇는 함수(타입이 잇어야된다) 와 리턴값이 없는 함수(void)로 나뉜다 . 


함수사용규칙 
1. 함수의 정의 제공 및 원형 제공 
2. 함수 호출 
*/

const float PIE = 3.14;
void cheers(int n);
float circle(int x);


void cheers(int n){
    for(int i = 0; i < n; i++)
        cout << "Cheers!" << endl;
}

float circle(int x){
    return x * x * PIE;
}

int main(){

    int a;
    cout << "하나의 수를 입력하십시오." << endl;
    cin >> a;
    cheers(a);

    int b;
    cout << "원의 반지름 길이를 입력하십시오." << endl;
    cin >> b;
    float c = circle(b);
    cout << "원의 넓이는 " << c << "입니다." <<endl; 
    return 0;
}

