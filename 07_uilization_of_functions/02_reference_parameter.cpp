#include <iostream>

using namespace std;
/*
reference란? 
미리 정의된 변수의 실제 이름 대신 사용할수있는 대용 이름 
함수의 매개변수 사용 
*/
void swapA(int&, int&);
void swapB(int*, int*);
void swapC(int, int);

int main(){
  int wallet1 = 100;
  int wallet2 = 200;

  cout << "최초 상태" << endl;
  cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

  cout << "참조를 이용한 값의 교환\n";
  swapA(wallet1, wallet2); // & 주소 + 참조 
  cout << "참조 교환 이후 상태\n";
  cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

  cout << "포인터를 이용한 값의 교환\n";
  swapB(&wallet1, &wallet2);
  cout << "포인터를 이용한 교환 이후 상태\n";
  cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;

  cout << "값을 이용한 값의 교환\n";
  swapC(wallet1, wallet2);
  cout << "값을 이용한 교환 이후 상태\n";
  cout << "wallet1 = " << wallet1 << ", wallet2 = " << wallet2 << endl;
  return 0;
}

void swapA(int& a, int& b){
  int temp;

  temp = a;
  a = b;
  b = temp;
}

void swapB(int* a, int* b){
  int temp;

  temp = *a;
  *a = *b;
  *b = temp;
}

void swapC(int a, int b){
  int temp;

  temp = a;
  a = b;
  b = temp;
}