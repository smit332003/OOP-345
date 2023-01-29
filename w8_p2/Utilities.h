/*==============================================
    Name: Smitkumar K PATEL
   Student Number: 157308214
   Email: spatel556@myseneca.ca  
   Date: NOV 20 2022          
   Workshop: 8 Part- 2     
   I have done all the coding by myself and only copied the code that
   my professor provided to complete my workshops and assignments. 
  ==============================================*/

#ifndef SDDS_UTILITIES_H
#define SDDS_UTILITIES_H

#include <iostream>

namespace sdds
{
  class Utilities
  {
    size_t m_widthField{1u};
    static char m_delimiter;

  public:
    void setFieldWidth(size_t newWidth);
    size_t getFieldWidth() const;
    std::string extractToken(const std::string &str, size_t &next_pos, bool &more);
    static void setDelimiter(char newDelimiter);
    static char getDelimiter();
  };
}
#endif 
