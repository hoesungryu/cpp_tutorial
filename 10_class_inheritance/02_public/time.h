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
	int getHours()  { return hours; };
	int getMins() { return mins; };
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
	virtual void show(); // 가상 키워드 ... 가상메서드는 프로그램에게 서로 독립된 정의가 잇다는 걸 알려준다. 
	// 상속받은 클래스에 있어야지 좋은거 아닌가? 
	/*
	1. 기초 클래스에서 가상메서드를 선언하면, 그 함수는 기초 클래스 및 파생되는 클래스에서 모두 가상이 됨 
	2. 객체에서 대한 참조를 사용하여, 객체를 지시하는 포인터를 사용하여 가상 메서드가 호출되면, 참조나 포인터를 위해 정의된 
	메서드를 사하하지 않고 객체형을 위해 정의된 메서드를 사용한다. > 동적결합. 	
	3. 상속을 위해 기초클래스로 사용할 클래스를 정의할때, 
	파생클래스에서 다시 정의해야 되는 클래스 메서드들은 가상함수로 선언해야한다. .. 
	*/
};

#endif //TIMEH