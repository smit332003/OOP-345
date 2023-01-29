/*==============================================
    Name: Smitkumar K PATEL
   Student Number: 157308214
   Email: spatel556@myseneca.ca  
   Date: NOV 20 2022          
   Workshop: 8 Part- 2     
   I have done all the coding by myself and only copied the code that
   my professor provided to complete my workshops and assignments. 
  ==============================================*/
#ifndef SDDS_GENERATINGLIST_H
#define SDDS_GENERATINGLIST_H

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <memory>
#include <utility>
#include <fstream>

namespace sdds {
	template<typename T>
	class GeneratingList {

		std::vector<T> list;
	public:

		GeneratingList(){}
		GeneratingList(const char* f) {
			std::ifstream file(f);
			if (!file)
				throw std::string("*** Failed to open file ") + std::string(f) + std::string(" ***");

			while (file) {
				T t;
				if (t.load(file))
					list.push_back(T(t));
			}
		}

		size_t size() const { return list.size(); }
		const T& operator[](size_t i) const { return list[i]; }

		bool checkSIN(const std::string str)
		{
			int digit = str.length();

			int sum = 0, isSecond = false;

			for (int i = digit - 1; i >= 0; i--) 
			{

				int x = str[i] - '0';

				if (isSecond == true) {
					x = x * 2;
				}

				sum += x / 10;
				sum += x % 10;

				isSecond = !isSecond;
			}

			return (sum % 10 == 0);
		}

		void operator+=(const T* obj) 
		{
			list.push_back(*obj);
		}

		void operator+=(const std::unique_ptr<T> obj) 
		{
			list.push_back(*obj);
		}

		void print(std::ostream& os) const {
			os << std::fixed << std::setprecision(2);
			for (auto& e : list)
				e.print(os);
		}
	};

	template<typename T>
	std::ostream& operator<<(std::ostream& os, const GeneratingList<T>& rd) {
		rd.print(os);
		return os;
	}
}
#endif // !SDDS_GENERATINGLIST_H
