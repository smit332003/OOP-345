/*==============================================
   Name: Smitkumar K PATEL
   Student Number: 157308214
   Email: spatel556@myseneca.ca  
   Date: Nov 18 2022          
   Project : 1    
  ==============================================*/

#ifndef SDDS_STATION_H
#define SDDS_STATION_H
#include <string>
#include <vector>
#include <list>
namespace sdds
{
	class Station
	{
	private:
		int m_id{};
		std::string m_itemName{};
		std::string m_description{};
		size_t m_nextSerial{};
		size_t m_itemsNum{};

	public:
		//static size_t m_widthField; //default 0;
		//static int id_generator; //default 0;
		Station(const std::string& record);
		const std::string& getItemName() const;
		size_t getNextSerialNumber();
		size_t getQuantity() const;
		void updateQuantity();
		void display(std::ostream& os, bool full) const;
	};
}
#endif