#include <iostream>

using namespace std; 


int main(){

    int a = 10; 
    int b = 10; 
    int c = 0; 

    cout << "a = " << a << " b = " << b << endl; 

    cout << "a++ = " << a++ << endl; // 출력하고 더하기 
    cout << "++b = " << ++b << endl; // 더하고 출력 하기 

    cout << "a = " << a << " b = " << b << endl; 

    // Q (c=a)++은 왜안되지,...? 누가 아는 사람없나 ..? 
    c = a++ ; // c에 a를 넣고 더하기 
    cout << "c = " << c << endl;  // 따라서 11 이되지만 이미 a=12

    c = ++a ; // a=12 에 1을 더하고 c 에 할당 하므로 13 
    cout << "c = " << c << endl; 
    return 0;
} 