#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include "Lab_12.h"

DataAndTime::DataAndTime(int t) //конструктор
{
	mytime = time(NULL);
	Data = gmtime(&mytime);
}

DataAndTime::DataAndTime(DataAndTime& DaT) { //конструктор копий
	mytime = DaT.mytime;
	if (!Data)
		Data = new tm;
	Data->tm_hour = DaT.Data->tm_hour;
	Data->tm_isdst = DaT.Data->tm_hour;
	Data->tm_mday = DaT.Data->tm_mday;
	Data->tm_min = DaT.Data->tm_min;
	Data->tm_mon = DaT.Data->tm_mon;
	Data->tm_sec = DaT.Data->tm_sec;
	Data->tm_wday = DaT.Data->tm_wday;
	Data->tm_yday = DaT.Data->tm_yday;
	Data->tm_year = DaT.Data->tm_year;
}

DataAndTime& DataAndTime::operator=(DataAndTime& A) { //оператор присваивания
	if (&A == this) {
		return *this;
	}
	mytime = A.mytime;
	if (!Data)
		Data = new tm;
	Data->tm_hour = A.Data->tm_hour;
	Data->tm_isdst = A.Data->tm_hour;
	Data->tm_mday = A.Data->tm_mday;
	Data->tm_min = A.Data->tm_min;
	Data->tm_mon = A.Data->tm_mon;
	Data->tm_sec = A.Data->tm_sec;
	Data->tm_wday = A.Data->tm_wday;
	Data->tm_yday = A.Data->tm_yday;
	Data->tm_year = A.Data->tm_year;
}

DataAndTime::~DataAndTime() //деструктор
{

}

void DataAndTime::setTime(time_t t) { //устновка времени
	mytime = t;
	return;
}

time_t DataAndTime::getTime() { //получение времени
	return mytime;
}

void DataAndTime::showTime() {
	char* Time = ctime(&mytime); //преобразует время из типа time_t в строку
	printf("%s", Time);
	return;
}
