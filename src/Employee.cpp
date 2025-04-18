//********************************************************************** 
// File name:	 Employee.cpp
// Author:		 Computer Science, Pacific University
// Date:		   
// Class:		   CS 250
// Assignment: Inheritance
// Purpose:		 Demonstrate Inheritance
//***********************************************************************

#include <string>
#include <istream>
#include <ostream>
#include <iostream>
#include "../include/Employee.h"

//**********************************************************************
// Constructor:	Employee
//
// Description:	Initialize the name with the parameter string
//
// Parameters:	name - the name to store in the object
//							ssn  - employee's social security number
//
// Returned:		none
//**********************************************************************
Employee::Employee () : mcName (""), mcSSN ("") {
	std::cout << "Employee ctor called" << std::endl;
}

//**********************************************************************
// Constructor:	Employee
//
// Description:	Initialize the name with the parameter string
//
// Parameters:	name - the name to store in the object
//							ssn  - employee's social security number
//
// Returned:		none
//**********************************************************************
Employee::Employee (const std::string& rcName,
	const std::string& rcSSN) : mcName (rcName), mcSSN (rcSSN) {
	//mcName = rcName;
	//mcSSN = rcSSN;
}

//**********************************************************************
// Function:	  name
//
// Description:	Retrieve the name of the Employee
//
// Parameters:	none
//
// Returned:		the name of the Employee
//**********************************************************************
std::string Employee::getName () const {
	return mcName;
}

//**********************************************************************
// Function:	  ssn
//
// Description:	Retrieve the ssn of the Employee
//
// Parameters:	none
//
// Returned:		the ssn of the Employee
//**********************************************************************
std::string Employee::getSSN () const {
	return mcSSN;
}

//**********************************************************************
// Function:	  print
//
// Description:	Output the Employee to the stream
//
// Parameters:	rcOutStream - the stream to output to
//
// Returned:		the output stream
//**********************************************************************

void Employee::write (std::ostream& rcOutStream) const {
	rcOutStream << "Name: " << mcName << " SSN: " << mcSSN;
}

//**********************************************************************
// Function:	  read
//
// Description:	Read the Employee from the stream
//
// Parameters:	rcInStream - the stream to read from
//
// Returned:		the input stream
//**********************************************************************
void Employee::read (std::istream& rcInStream) {
	rcInStream >> mcName >> mcSSN;
}