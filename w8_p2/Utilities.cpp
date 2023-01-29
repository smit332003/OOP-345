/*==============================================
    Name: Smitkumar K PATEL
   Student Number: 157308214
   Email: spatel556@myseneca.ca  
   Date: NOV 20 2022          
   Workshop: 8 Part- 2     
   I have done all the coding by myself and only copied the code that
   my professor provided to complete my workshops and assignments. 
  ==============================================*/

#include <iostream>
#include <string>
#include <algorithm>
#include "Utilities.h"

using namespace std;

namespace sdds
{
  char Utilities::m_delimiter = ' ';

  void Utilities::setFieldWidth(size_t newWidth)
  {
    m_widthField = newWidth;
  }

  size_t Utilities::getFieldWidth() const
  {
    return m_widthField;
  }

  std::string Utilities::extractToken(const std::string &str, size_t &next_pos, bool &more)
  {
    string result = "";
    size_t first_pos = next_pos;

    next_pos = str.find(m_delimiter, first_pos);

    if (first_pos == next_pos)
    {
      more = false;
      throw "   ERROR: No token.\n";
    }
    else if (next_pos == string::npos)
    {
      result = str.substr(first_pos);
      m_widthField = max(result.length(), m_widthField);
      more = false;
    }
    else
    {
      result = str.substr(first_pos, next_pos - first_pos);
      m_widthField = max(result.length(), m_widthField);
      more = true;
    }

    next_pos++;

    return result;
  }

  void Utilities::setDelimiter(char newDelimiter)
  {
    m_delimiter = newDelimiter;
  }

  char Utilities::getDelimiter()
  {
    return m_delimiter;
  }
}
