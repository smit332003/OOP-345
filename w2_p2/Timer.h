/*==============================================
   Name: Smitkumar K PATEL
   Student Number: 157308214
   Email: spatel556@myseneca.ca  
   Date: sept 24 2022          
   Workshop: 2      
  ==============================================*/
#ifndef SDDS_TIMER_H
#define SDDS_TIMER_H

#include <chrono>

namespace sdds {

class Timer
{
   std::chrono::time_point<std::chrono::system_clock> m_start;

 public:
   void start();     
   long long stop(); 
};

} 
#endif // SDDS_TIMER_H
