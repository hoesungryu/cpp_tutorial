
#include <iostream>
#include "stock.h"


int main() {
    // 배열을 사용하여 class 만듬 

	Stock s[4] = {
		Stock("A", 10, 1000),
		Stock("B", 20, 1200),
		Stock("C", 20, 1300),
		Stock("D", 20, 1400)
	};

    // s[0].show(); // 객체하나 소환 
    
    
    // -------------------------------- option1 
    // Stock first = s[0];
    // for (int i = 0; i <4; i++) {
    //     first = first.topval(s[i]);
    // }
    // first.show();


    // -------------------------------- option2
    Stock *first = &s[0]; // pointer 
    for (int i = 0; i <4; i++) {
        first = &first -> topval(s[i]); // 간접참조 연산자 
    }
    first-> show();
	return 0;
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
