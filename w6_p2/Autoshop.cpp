/*==============================================
    Name: Smitkumar K PATEL
   Student Number: 157308214
   Email: spatel556@myseneca.ca  
   Date: Nov 6 2022         
   Workshop: 6     
   I have done all the coding by myself and only copied the code that
   my professor provided to complete my workshops and assignments. 
  ==============================================*/


#include <iomanip>
#include "Autoshop.h"
using namespace std;
namespace sdds {
	Autoshop::Autoshop()
	{
	}
	Autoshop& Autoshop::operator+=(Vehicle* theVehicle)
	{
		m_vehicles.push_back(theVehicle);
		return *this;
	}
	void Autoshop::display(std::ostream& out) const
	{
		for (auto i = m_vehicles.begin(); i != m_vehicles.end(); i++) {
			(*i)->display(out);
			out << endl;
		}
	}
	Autoshop::~Autoshop()
	{
		for (auto i = m_vehicles.begin(); i != m_vehicles.end(); i++) {
			delete (*i);
		}
	}
}