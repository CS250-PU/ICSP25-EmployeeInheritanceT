//********************************************************************** 
// File name:	 Employee.cpp
// Author:		 Computer Science, Pacific University
// Date:		   
// Class:		   CS 250
// Assignment: Inheritance
// Purpose:		 Demonstrate Inheritance
//***********************************************************************
#include <istream>
#include <ostream>
#include <string>
#include <iostream>
#include "../include/Employee.h"
#include "../include/HourlyEmployee.h"

HourlyEmployee::HourlyEmployee () : Employee (), mWageRate (0.0),
mHoursWorked (0.0) {
  std::cout << "HourlyEmployee ctor called" << std::endl;
}

HourlyEmployee::HourlyEmployee (const std::string& rcName,
  const std::string& rcSSN,
  double wageRate, double hoursWorked) : Employee (rcName, rcSSN),
  mWageRate (wageRate), mHoursWorked (hoursWorked) {
}

double HourlyEmployee::getPay () const {
  return mWageRate * mHoursWorked;
}

void HourlyEmployee::addWorkedHours (double additionalHours) {
  mHoursWorked += additionalHours;
}

void HourlyEmployee::write (std::ostream& rcOutStream) const {
  Employee::write (rcOutStream);
  rcOutStream << "Wage Rate: " << mWageRate << std::endl;
  rcOutStream << "Hours Worked: " << mHoursWorked << std::endl;
}

void HourlyEmployee::read (std::istream& rcInStream) {
  Employee::read (rcInStream);
  rcInStream >> mWageRate;
  rcInStream >> mHoursWorked;
}