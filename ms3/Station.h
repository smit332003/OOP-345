/*----------------------------------------
Name: Smitkumar K Patel
Student id: 157308214
Date: 03 DEC 2022
email: spatel556@myseneca.ca
Project: 3
I HAVE DONE ALL CODING PART BY MYSELF.
---------------------------------------------*/


#ifndef STATION_H
#define STATION_H
#include <string>

using namespace std;

namespace sdds {
    class Station {
        int id;
        string name;
        string description;
        unsigned int nextSerialNum;
        unsigned int numItems;

        static size_t m_widthField;
        static int id_generator;

    public:
        Station(const string& record);
        const string& getItemName() const;
        size_t getNextSerialNumber();
        size_t getQuantity() const;
        void updateQuantity();
        void display(ostream& os, bool full) const;
    };
};
#endif