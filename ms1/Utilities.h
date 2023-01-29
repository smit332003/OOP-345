/*==============================================
   Name: Smitkumar K PATEL
   Student Number: 157308214
   Email: spatel556@myseneca.ca  
   Date: Nov 18 2022          
   Project : 1    
  ==============================================*/

#ifndef SDDS_UTILITIES_H
#define SDDS_UTILITIES_H
#include <string>
#include <vector>
#include <list>
namespace sdds
{
	
	class Utilities
	{
	private:
		size_t m_widthField{ 1 };
	public:
		//static char m_delimiter;
		static void setDelimiter(char newDelimiter);
		static char getDelimiter();
		void setFieldWidth(size_t newWidth);
		size_t getFieldWidth() const;
		std::string extractToken(const std::string& str, size_t& next_pos, bool& more);
	};
}
#endif