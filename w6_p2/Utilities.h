/*==============================================
    Name: Smitkumar K PATEL
   Student Number: 157308214
   Email: spatel556@myseneca.ca  
   Date: Nov 6 2022         
   Workshop: 6     
   I have done all the coding by myself and only copied the code that
   my professor provided to complete my workshops and assignments. 
  ==============================================*/

#pragma once
#ifndef SDDS_UTILITIES_H_
#define SDDS_UTILITIES_H_
#include "Car.h"
#include "Van.h"
#include "Racecar.h"
#include "Luxuryvan.h"
namespace sdds {
	Vehicle* createInstance(std::istream& in);
}
#endif // !SDDS_UTILITIES_H_