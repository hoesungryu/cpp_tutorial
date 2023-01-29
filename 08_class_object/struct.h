#ifndef STRUCT
#define STRUCT
#include <iostream>

using namespace std; 
/*
header 
1.함수의 우너형 
2. #define or const 
3. 구조체 선언
4. 클래스 선언 
5. 탬플릿 선언 
6. 인라인 함수 
*/
struct MyStruct {
    string name;
    int age; 
};

void display(MyStruct&); // 선언
#endif