#include <iostream>

using namespace std;
/*
함수의 오버로딩 
여러개의 함수를 같은 이름으로 연결한다. 
즉, 데이터형이 다를때 같은 이름에 함수로 다룰수있다. 
- 함수리턴만 다를경우 
함수를 사용할떄 두개 이상의 함수에 대응될때, (두가지 이상의 조건이 만족되는 것을 찾아준다.)
*/

int sum(int, int);
float sum(float, float);

int main(){
  int a=3, b=2;
  float c=1.2, d=2.3; 
  cout << "두 정수의 합은 " << sum(a, b) << "입니다.\n";
  cout << "두 실수의 합은 " << sum(c, d) << "입니다.\n";

  return 0;
}

int sum(int a, int b){
  return a + b;
}

float sum(float a, float b){
  return a + b;
}