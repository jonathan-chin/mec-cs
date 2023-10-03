/*
PROBLEM

Design a class called Date that has integer data members to store
month, day, and year. The class should have a three-parameter default
constructor that allows the date to be set at the time a new
Date object is created. If the user creates a Date object without
passing any arguments, or if any of the values passed are invalid,
the default values of 1, 1, 2001 (i.e., January 1, 2001) should be
used. The class should have member functions to print the date in
the following formats:

3/15/20
March 15, 2020
15 March 2020

Demonstrate the class by writing a program that uses it.
Be sure your program only accepts reasonable values for month and
day. The month should be between 1 and 12. The day should be between
1 and the number of days in the selected month.

PSEUDOCODE
- int month, int day, int year
- 3 parameter constructor
  - do validation
  - if invalid use 1, 1, 2001
- default constructor - 1, 1, 2001 should be used
- member function for all numbers format
- member function for month - day string format
- member function for day - month string format
- demonstrates works with a program. assume input is valid

*/

class Date {
    private:
        // best practice to secure member variables
        int month;
        int day;
        int year;

    public:
        Date(); // default constructor
        Date(int, int, int); // month, day, year
};

Date::Date(){
    month = 1;
    day = 1;
    year = 2001;
};

Date::Date(int newMonth, int newDay, int newYear){
    if(newMonth <= 0 || newMonth >= 13){
        // invalid month
        month = 1;
        day = 1;
        year = 2001;
        return;
    }

    if(newDay <= 0 || newDay >= 31){ // for simplicity of example, assume all months can have 31 days
        // invalid day
        month = 1;
        day = 1;
        year = 2001;
        return;
    }

    if(newYear < 1990 || newYear > 2050){ // assume year can only be between 1990 and 2050
        // invalid year
        month = 1;
        day = 1;
        year = 2001;
        return;
    }

    // all inputs are valid
    month = newMonth;
    day = newDay;
    year = newYear;
}