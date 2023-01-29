/*==============================================
  Name: Smitkumar K PATEL
   Student Number: 157308214
   Email: spatel556@myseneca.ca  
   Date: NOV 20 2022          
   Workshop: 8 Part- 2     
   I have done all the coding by myself and only copied the code that
   my professor provided to complete my workshops and assignments. 
  ==============================================*/


#ifndef SDDS_STATION_H
#define SDDS_STATION_H

#include <iostream>

namespace sdds
{
  class Station
  {
    int stationID{0};
    std::string itemName{""};
    std::string stationDescription{""};
    size_t nextSerialNum{0u};
    size_t numItems{0u};
    static size_t m_widthField;
    static size_t id_generator;

  public:
    Station(const std::string &src);
    const std::string &getItemName() const;
    size_t getNextSerialNumber();
    size_t getQuantity() const;
    void updateQuantity();
    void display(std::ostream &os, bool full) const;
  };
}
#endif // !SDDS_STATION_H
