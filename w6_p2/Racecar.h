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
#ifndef SDDS_RACECAR_H_
#define SDDS_RACECAR_H_
#include <iostream>
#include "Car.h"
namespace sdds {

	class Racecar :public Car {
		double m_booster = 0;
	public:
		Racecar();
		Racecar(std::istream& in);
		void display(std::ostream& out) const;
		double topSpeed() const;
	};
}
#endif // !SDDS_RACECAR_H_