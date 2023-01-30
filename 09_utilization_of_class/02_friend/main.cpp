/*

friend는 클래스의 맴버 함수에 동일하게 접근 할수있다. 
--> 퍼블릭에 정의 된것처럼 private에 접근 할수있음 

왜? 두개의 피연산자를 요구하는 연산자일때 friend가 필요 
*/

#include <iostream>
#include "time.h"
using namespace std;

int main() {
	Time day1(1, 40);
	Time day2(2, 30);
	
	day1.show();
	day2.show();

	// Time new_day = 3 * day2; 
    Time new_day = operator*(3, day2);
	new_day.show();

	return 0;
}