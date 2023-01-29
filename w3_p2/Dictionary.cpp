/*==============================================
   Name: Smitkumar K PATEL
   Student Number: 157308214
   Email: spatel556@myseneca.ca  
   Date: OCT 2 2022          
   Workshop: 3       
  ==============================================*/
#include "Dictionary.h"
namespace sdds
{
    std::ostream &operator<<(std::ostream &os, const Dictionary &d)
    {
        os.width(20);
        os.setf(std::ios::right);
        os << d.getTerm() << ": " << d.getDefinition();
        return os;
    }
    bool operator==(const Dictionary &left, const Dictionary &right)
    {
        return left.getTerm() == right.getTerm();
    }
}