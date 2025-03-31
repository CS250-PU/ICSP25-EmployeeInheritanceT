//********************************************************************** 
// File name:	 Employee.h
// Author:		 Computer Science, Pacific University
// Date:		   
// Class:		   CS 250
// Assignment: Inheritance 
// Purpose:		 Demonstrate Inheritance
//**********************************************************************

#pragma once

#include <istream>
#include <ostream>
#include <string>

class Employee {
public:
  Employee ();
  Employee (const std::string& rcName, const std::string& rcSSN);
  std::string getName () const;
  std::string getSSN () const;
  void write (std::ostream& rcOutStream) const;
  void read (std::istream &rcInStream);

private:
  std::string mcName, mcSSN;
};