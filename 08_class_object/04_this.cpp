
#include <iostream>
#include "stock.h"


int main() {

	Stock s1("A", 10, 1000);
	Stock s2("B", 20, 1200);

    s1.show();
    s2.show();
    cout << "A와 B 중 share_val이 큰객체는? \n";
    s1.topval(s2).show();
    
	return 0;
}

// this 불러온 객체의 포인터 ... 
//맴버함수를 호출하는데 사용한 객체를 불러올수잇다. 

void Stock::buy(int n, float pr) {
	shares += n;
	share_val = pr;
	set_total();
}
void Stock::sell(int n, float pr) {
	shares -= n;
	share_val = pr;
	set_total();
}
void Stock::update(float pr) {
	share_val = pr;
	set_total();
}
void Stock::show() {
	cout << "회사 명 : " << name << endl;
	cout << "주식 수 : " << shares << endl;
	cout << "주가 : " << share_val << endl;
	cout << "주식 총 가치 : " << total_val << endl;
    cout << "\n\n";
}

Stock& Stock::topval(Stock& s) {
	if (s.share_val > share_val)
		return s;
	else return *this; // 포인터이기때문에 객체를 리턴하기 위해 별표 
}

Stock::Stock(string co, int n, float pr) {
    name = co;
	shares = n;
	share_val = pr;
	set_total();
}

Stock::Stock() {
    name = "";
	shares = 0;
	share_val = 0;
	set_total();
}


Stock::~Stock() {
    cout << name <<"클래스가 소멸되엇습니다.\n" ;
}
