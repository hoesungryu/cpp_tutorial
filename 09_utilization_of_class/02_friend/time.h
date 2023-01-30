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
    
    // memeber에 접근 간능 
    friend Time operator*(int n, Time& t) {
        return t * n;
    };

};

#endif // TIMEH