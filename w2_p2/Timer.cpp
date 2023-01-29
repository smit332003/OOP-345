/*==============================================
   Name: Smitkumar K PATEL
   Student Number: 157308214
   Email: spatel556@myseneca.ca  
   Date: SEPT 24 2022          
   Workshop: 2 
  ==============================================*/
#include "Timer.h"

namespace sdds {


void Timer::start() { m_start = std::chrono::system_clock::now(); }


long long Timer::stop() {
   auto end = std::chrono::system_clock::now();
   auto duration =
       std::chrono::duration_cast<std::chrono::nanoseconds>(end - m_start);
   return duration.count();
}

} 
