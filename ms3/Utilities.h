/*----------------------------------------
Name: Smitkumar K Patel
Student id: 157308214
Date: 03 DEC 2022
email: spatel556@myseneca.ca
Project: 3
I HAVE DONE ALL CODING PART BY MYSELF.
---------------------------------------------*/

#ifndef SDDS_UTILITIES_H
#define SDDS_UTILITIES_H

#include <string>
#include <stdexcept>

using namespace std;

namespace sdds {
    class Utilities {
        size_t m_widthField = 1;
        static char m_delimiter;

    public:
        void setFieldWidth(size_t newWidth);
        size_t getFieldWidth() const;
        string extractToken(const string& str, size_t& next_pos, bool& more);
        static void setDelimiter(char newDelimiter) {
            m_delimiter = newDelimiter;
        }
        static char getDelimiter() {
            return m_delimiter;
        }
    };
};

#endif