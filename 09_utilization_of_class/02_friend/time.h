#include <iostream>
#ifndef TIMEH
#define TIMEH

class Time
{
private:
	int hours;
	int mins;

public:
	Time();
	Time(int, int); // overloaded
	void addHours(int);
	void addMins(int);
	Time operator+(Time&);
    Time operator*(int);
	void show();
	~Time();
    
    // memeber에 접근 간능 inline function
	/*
	interface? 특정기능을 구현할 것을 약속한 추상형식 
	좁은의미: 순수 가상 함수만을 갖는 클래스
	넓은의미: 앞으로 프로그램을 어떻게 짤것인가에 대한 약속	
	*/
    friend Time operator*(int n, Time& t) {
        return t * n;
    };

};

#endif // TIMEH