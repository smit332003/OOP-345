/*----------------------------------------
Name: Smitkumar K Patel
Student id: 157308214
Date: 03 DEC 2022
email: spatel556@myseneca.ca
Project: 3
I HAVE DONE ALL CODING PART BY MYSELF.
---------------------------------------------*/
#ifndef SDDS_WORKSTATION_H
#define SDDS_WORKSTATION_H

#include <deque>
#include <iostream>
#include "CustomerOrder.h"
#include "Station.h"

using namespace std;

extern deque<sdds::CustomerOrder> g_pending;
extern deque<sdds::CustomerOrder> g_completed;
extern deque<sdds::CustomerOrder> g_incomplete;

namespace sdds {

    class Workstation : public Station {
        deque<CustomerOrder> m_orders;
        Workstation* m_pNextStation = nullptr;

    public:
        Workstation(const string& data);
        void fill(ostream& os);
        bool attemptToMoveOrder();
        void setNextStation(Workstation* station = nullptr);
        Workstation* getNextStation() const;
        void display(ostream& os) const;
        Workstation& operator+=(CustomerOrder&& newOrder);
        bool empty() const;
    };
};

#endif