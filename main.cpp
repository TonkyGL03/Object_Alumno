#include <iostream>

#include "Student.h"

using namespace std;

int main(){
    Date myDate;
    Name myName;

    Student myStudent;

    myStudent.setCode("222333444");

    myName.setLast("Garcia");
    myName.setFirst("Daniel");

    myStudent.setName(myName);

    myDate.setDay(24);
    myDate.setMonth(7);
    myDate.setYear(2010);

    myStudent.setBirthDate(myDate);

    myStudent.setCareer("INNI");

    myDate.setDay(7);
    myDate.setMonth(9);
    myDate.setYear(2020);

    myStudent.setStartDate(myDate);

    myStudent.setGrade(60.00);

    cout << myStudent.toString();

    cout << endl << endl;
}
