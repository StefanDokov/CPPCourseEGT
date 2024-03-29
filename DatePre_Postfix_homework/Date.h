// Date class definition.
#ifndef DATE_H
#define DATE_H

#include <iostream>
using std::ostream;
using std::istream;


class Date
{
	friend ostream& operator<<(ostream&, const Date&);
	friend istream& operator>>(istream&, Date&);
public:
	Date(int d = 1, int m = 1, int y = 1900); // default constructor
	void setDate(int, int, int); // set month, day, year
	Date& operator++(); // prefix increment operator
	Date operator++(int); // postfix increment operator
	Date& operator--();
	Date operator--(int);
	const Date& operator+=(int); // add days, modify object
	bool leapYear(int) const; // is date in a leap year?
	bool endOfMonth(int) const; // is date at the end of month?
private:
	int month;
	int day;
	int year;

	static const int days[]; // array of days per month
	void helpIncrement(); // utility function for incrementing date
	void helpDecrement();
}; // end class Date

#endif

