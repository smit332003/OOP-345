/*==============================================
    Name: Smitkumar K PATEL
   Student Number: 157308214
   Email: spatel556@myseneca.ca  
   Date: Nov 6 2022         
   Workshop: 6     
   I have done all the coding by myself and only copied the code that
   my professor provided to complete my workshops and assignments. 
  ==============================================*/

#include "Luxuryvan.h"

namespace sdds {
	Luxuryvan::Luxuryvan(std::istream& in) :Van(in) {
		char value = '\0';
		in >> value;
		if (value == 'e') {

			m_consumption = "electric van ";
		}
		else {
			throw std::string("Invalid record!");
		}
		in.ignore(1000, '\n');
	}
	void Luxuryvan::display(std::ostream& out) const {
		Van::display(out);
		out << " " << m_consumption << " *";
	}
	std::string Luxuryvan::consumption() const {
		return m_consumption;
	}
}