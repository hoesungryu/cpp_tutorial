#include <iostream> 
//#define PIE = 3.1415926535 //c style
using namespace std;


int main(){
    // constant : 바뀔 필요가 없거나 바뀌어선 안되는 숫자 
    // 중간에 변경 되면 에러가 난다. 즉 재할당을 할수가 없다. 
    const float PIE = 3.141592;  // 변수형까지 한번에 상수로 설정가능 
    int r = 3;
    float s = (r*r) * PIE; // 3.14 * r^2 

    // 아 함수 빨리 배우고 싶다.. 
    cout << "Circle AREA: " << s << endl;
    return 0;
}

/*
c++ 은 데이터 형이 풍부 하다. 따라서 데이터 변환을 자유롭게 할수있다. 
데이터형태 변환 
1. 특정 데이터의 변수에 다른 데이터 형의 값을 대입 
2. 수식에 데이터형을 혼합 
3. 함수에 매개변수를 전달할떄 
*/

int main(){
    // 1. 특정 데이터의 변수에 다른 데이터 형의 값을 대입 
    char ch = 'M';
    
    cout << int(ch) << " " <<(int)ch << endl;
    
    // C++ 
    cout << static_cast<int>(ch) << endl;

    return 0;
}
