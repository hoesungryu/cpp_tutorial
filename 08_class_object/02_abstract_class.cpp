
#include <iostream>
#include "stock.h"

int main() {

    Stock temp;
    temp.acquire("Panda", 100 , 1000);
    temp.show();
    temp.buy(10, 1200);
    temp.show();
    temp.sell(5, 800);
    temp.show();
    return 0;
}


// #include "stock.h"
// 생성자와 파괴자? 
// 사용 범위 결정 연산자(::)
void Stock::acquire(string co, int n, float pr) {
	name = co;
	shares = n;
	share_val = pr;
	set_total();
}

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

Stock::Stock() {
}

Stock::~Stock() {
}
