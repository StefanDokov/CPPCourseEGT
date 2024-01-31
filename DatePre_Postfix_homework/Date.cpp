// Date class member-function definitions.
#include <iostream>
#include "Date.h"
#include <string>
#include <iomanip>
using namespace std;

// initialize static member at file scope; one classwide copy
const int Date::days[] =
{ 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

// Date constructor
Date::Date(int d, int m, int y)
{
    setDate(d, m, y);
} // end Date constructor

// set month, day and year
void Date::setDate(int dd, int mm, int yy)
{
    month = (mm >= 1 && mm <= 12) ? mm : 1;
    year = (yy >= 1900 && yy <= 2100) ? yy : 1900;

    // test for a leap year
    if (month == 2 && leapYear(year))
        day = (dd >= 1 && dd <= 29) ? dd : 1;
    else
        day = (dd >= 1 && dd <= days[month]) ? dd : 1;
} // end function setDate

// overloaded prefix increment operator 
Date& Date::operator++()
{
    helpIncrement(); // increment date
    return *this; // reference return to create a lvalue
} // end function operator++

// overloaded postfix increment operator; note that the  
// dummy integer parameter does not have a parameter name
Date Date::operator++(int)
{
    Date temp = *this; // hold current state of object
    helpIncrement();

    // return unincremented, saved, temporary object
    return temp; // value return; not a reference return
} // end function operator++

Date& Date::operator--()
{
    // TODO: insert return statement here
    helpDecrement();
    return *this;
}

Date Date::operator--(int)
{
    Date temp = *this; // hold current state of object
    helpDecrement();

    // return unincremented, saved, temporary object
    return temp;
}

// add specified number of days to date
const Date& Date::operator+=(int additionalDays)
{
    for (int i = 0; i < additionalDays; i++)
        helpIncrement();

    return *this; // enables cascading
} // end function operator+=

// if the year is a leap year, return true; otherwise, return false
bool Date::leapYear(int testYear) const
{
    if (testYear % 400 == 0 ||
        (testYear % 100 != 0 && testYear % 4 == 0))
        return true; // a leap year
    else
        return false; // not a leap year
} // end function leapYear

// determine whether the day is the last day of the month
bool Date::endOfMonth(int testDay) const
{
    if (month == 2 && leapYear(year))
        return testDay == 29; // last day of Feb. in leap year
    else
        return testDay == days[month];
} // end function endOfMonth

// function to help increment the date
void Date::helpIncrement()
{
    // day is not end of month
    if (!endOfMonth(day))
        day++; // increment day
    else
        if (month < 12) // day is end of month and month < 12
        {
            month++; // increment month
            day = 1; // first day of new month
        } // end if
        else // last day of year
        {
            year++; // increment year
            month = 1; // first month of new year
            day = 1; // first day of new month
        } // end else
} // end function helpIncrement

void Date::helpDecrement()
{
    if (day != 1)
        day--; // increment day
    else
        if (month == 1) // day is end of month and month < 12
        {
            month = 12; // increment month
            day = 31; 
            year = year--;// first day of new month
        } // end if
        else // last day of year
        {
             // increment year
            month--;
            if (leapYear(year) && month == 2) {
                day = 29;
            }
            else {// first month of new year
                day = days[month];
            }// first day of new month
        } // end else
}

// overloaded output operator
ostream& operator<<(ostream& output, const Date& d)
{
    output << setw(2) << setfill('0') << d.day << "-" << setw(2) << setfill('0') << d.month << "-" << d.year;
    return output; // enables cascading
} // end function operator<<

istream& operator>>(istream& input, Date& date) {
    char dash1, dash2;
    input >> setw(2) >> date.day >> dash1
        >> setw(2) >> date.month >> dash2
        >> date.year;

    // Check for a valid date
    if (dash1 != '-' || dash2 != '-') {
        input.setstate(ios::failbit);
    }
    return input;
}


