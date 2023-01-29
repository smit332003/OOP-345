/*==============================================
   Name: Smitkumar K PATEL
   Student Number: 157308214
   Email: spatel556@myseneca.ca  
   Date: OCT 9 2022          
   Workshop: 4       
  ==============================================*/


#ifndef SDDS_RESTAURANT_H
#define SDDS_RESTAURANT_H

#include "Reservation.h"
namespace sdds {
class Restaurant
{
   size_t m_count{};
   Reservation** m_reservations{};
   void deallocate();

 public:
   ~Restaurant();
   Restaurant(const Reservation* reservations[], size_t count);
   Restaurant(const Restaurant& restaurant);
   Restaurant(Restaurant&& restaurant);
   Restaurant& operator=(const Restaurant& restaurant);
   Restaurant& operator=(Restaurant&& restaurant);
   size_t size() const;
   friend std::ostream& operator<<(std::ostream&, const Restaurant& restaurant);
};

} // namespace sdds

#endif // !SDDS_RESTAURANT_H
