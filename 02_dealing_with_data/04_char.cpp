/*
ASCII character: character <---> number 
따라서 한글을 사용할수없구나? ㅇㅇ ... 
*/


// char 로는 작은 따옴표만 써야된다.  "" 큰따옴표는 명시적으로 Null 문자가 표현 .. 
// why? null문자(=\0, 어디까지가 문자인가를 알려주는 문자) .... 어디까지문자야~ 

#include <iostream>
using namespace std;

int main(){
    char a = 'a'; // char a = "a" <--- a 와 \0을 동시에 할당 하려고 하니 에러가 나는 거다. .
    cout << a << endl;

    char b[] = { 'a', 'b' , '\0'};
    cout << b << endl;

    return 0;
}