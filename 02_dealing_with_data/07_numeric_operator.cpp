#include <iostream>
#include <typeinfo>
using namespace std;


/*
산술 연산자 
+ - * / : 가감승제 
>>: 몫 
%: 나머지 --> float 형은 사용할수없음. 
*/ 

int main(){
    int a = 3; int b = 2; 
    int x = 10, y = -30;
    auto n = 100; // int 형으로 자동 할당 (추천하지는 않음 )

    cout <<"ANSWER: "<< a%b << endl; 
    cout << "N: " << typeid(n).name() << endl; 

    return 0;
}