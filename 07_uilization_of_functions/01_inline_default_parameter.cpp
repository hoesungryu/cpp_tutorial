#include <iostream>
using namespace std;


/*
인라인 함수 (인라인키워드를 붙이면된다.)
일반적으로 함수의 호출은 함수의 주소로 점프하는 과정
인라인 함수는 컴파일된 함수 코드가 프로그램의 다른 코드에 삽입 
컴파일러의 인라인 함수 호출 == 점프가 아닌 그에 대응 하는 함수 코드로 대체 
*/

// inline 이 lambda 인가??? 모르겠다. 
inline float square(float x) { return x*x;}

int main() {

    int a = 6;
    int ans = square(a);
    cout << ans << endl;
}



// ---------------------------------- 


int main() {
    int arr[SIZE] = {1, 2, 4, 8, 16, 32, 64};
    int sum = sumArr(arr);
    cout << "함수의 총 합은 " << sum << "입니다." << endl;

    return 0; 
}