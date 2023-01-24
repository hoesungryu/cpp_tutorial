#include <iostream>

using namespace std;


/*
Union(공용체)
한번 밖에 담고 있을 수 없다. 
나의 메모리 공간을 공유한다는 점만이 다릅니다
cf) Struct(구조체):  
*/

// int main(){
//     union MyUnion{
//         int intVal;
//         long longVal;
//         float floatVal;
//     };
//     MyUnion test;
//     test.intVal = 0;
//     test.floatVal = 1.3;
//     test.longVal = 2;

//     cout << test.intVal << endl;
//     cout << test.floatVal << endl;
//     cout << test.longVal << endl;




//     return 0;
// }

/*
열거체 (enum)
기호 상수를 만드는 것에 또달느 방법 
정수값을 나타내는 기호 상수로... 
*/
int main(){
    enum spectrum {red,green,blue,yellow}; // 0,1,2,3 
    // enum spectrum {red = 1 ,green= 0 ,blue = 3,yellow=5}; 정수로만 초기화 해주어야된다. 

    spectrum A = red;
    // spectrum A = red+ blue; 산술연산은 안된다. 
    cout << A << endl; 

    int b; 
    b = blue; 
    b = blue +3 ;
    cout <<"b = " << b << endl;


    return 0;
}