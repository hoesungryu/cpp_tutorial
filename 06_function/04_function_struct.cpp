#include <iostream> 
using namespace std;

// 함수는 구조체 원본이 아닌 복사본을 대상으로 작업한다. 
// 따라서 구조체 용량에 따라 복사하는데 시간이 걸린다 그렇기 때문에 포이터로 접근한다. 
// 구조체는 직접 리턴할수잇고 전달할수 잇지만 규모가 너무 크면 복사하는 시간이 길다. 

const int minsPerHr = 60;

struct Time {
    int hours;
    int mins;
};

// 시간생성 
Time sum(Time* t1, Time* t2){
    Time total;

    // 구조체값에서 맴버에 접근 한다면 맴버연산자(.) | 구조체 주소에서 맴버에 접근 할때는 간접맴버연산자(->)
    total.mins = (t1->mins + t2->mins) % minsPerHr;
    total.hours = t1->hours + t2->hours +
        (t1->mins + t2->mins) / minsPerHr;

    return total;
}

// 시간 출력함수 
void showTime(Time t1){
    cout << t1.hours << "시간, " << t1.mins << "분 입니다." << endl;
}

int main() {

    Time day1 = {5, 45};
    Time day2 = {4, 55};

    Time total = sum(&day1, &day2); // &: Address operator 16진수로 메모리 공간 표현 


    cout << "이틀간 소요 시간 : ";
    showTime(total);
   
    return 0;
}