#ifndef STOCK 
#include <iostream>
using namespace std;

/*
추상화 클래스 
1. 추상화: 어떤 객체를 사실적으로 표현하는 것이 아니라 공통된 특징을 간결한 방식으로 이해하기 쉽게 표현 
2. 클래스 추상화를 사용자 정의 데이터형으로 변환해주는 수단 
*/


class Stock {
/*
public = 어디서든 접근이 가능.
protected = 상속관계일 때 접근이 가능
private = 해당 클래스에서만 접근이 가능
*/
    private:
        string name;
        int shares;
        float share_val;
        double total_val;
        void set_total() { total_val = shares * share_val;}

    public: 
        void acquire(string, int, float);
        void buy(int, float);
        void sell(int, float);
        void update(float);
        void show();
        Stock(string co, int n, float pr); //overloading function1
        Stock(); //overloading function2
        ~Stock();
};
#endif
