#pragma once
#include <time.h>

class DataAndTime {
private:
	time_t mytime;
	struct tm* Data;
public:
	DataAndTime(int t); //конструктор
	DataAndTime(DataAndTime& DaT); //конструктор копий
	~DataAndTime(); //деструктор
	DataAndTime& operator=(DataAndTime& A); //оператор присваивания
	void setTime(time_t t);
	time_t getTime();
	void showTime(); //вывод времени в поток
	
};
