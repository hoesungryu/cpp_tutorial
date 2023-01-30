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
	Time(int, int);
	void addHours(int);
	void addMins(int);
	Time operator+(Time&);
	Time operator*(int);
	void show();
	~Time();
	friend Time operator*(int n, Time& t) {
		return t * n;
	}
	friend std::ostream& operator<<(std::ostream&, Time&);
};

// ----------------------------------------------------------------
class NewTime : public Time {
	/*
	1. 파생 클래스형의 객체안에는 기초 클래스 형의 데이터 맴버들이 저장. 
	2. 파생 클래스 형의 체체는 기초 클래스 형의 매서드들을 사용 
	3. 파생 클래스는자자기 자신의 생자자를 필요로한다. 
	4. 파생 클래스는 부가적인 데이터 맴버들과 맴버함수들ㅇ르 읨의로 추가할수있다. 
	*/
private:
	int day;
public:
	NewTime();
	NewTime(int, int, int);
	void print();
	
};

#endif //TIMEH