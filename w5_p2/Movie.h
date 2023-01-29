/*==============================================
    Name: Smitkumar K PATEL
   Student Number: 157308214
   Email: spatel556@myseneca.ca  
   Date: Oct 15 2022          
   Workshop: 5   
   I have done all the coding by myself and only copied the code that
   my professor provided to complete my workshops and assignments. 
  ==============================================*/

#ifndef SDDS_MOVIE_H
#define SDDS_MOVIE_H

#include <string>

namespace sdds {
   class Movie
   {
      std::string m_title{};
      size_t m_year{};
      std::string m_description{};
      std::string& trim(std::string& str);

    public:
      Movie();
      Movie(const std::string& strMovie);
      const std::string& title() const;
      template <typename T> void fixSpelling(T& spellChecker) {
         spellChecker(m_description);
         spellChecker(m_title);
      }
      friend std::ostream& operator<<(std::ostream& os, const Movie& movie);
   };
} // namespace sdds

#endif //! SDDS_MOVIE_H
