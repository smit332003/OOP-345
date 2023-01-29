/*==============================================
    Name: Smitkumar K PATEL
   Student Number: 157308214
   Email: spatel556@myseneca.ca  
   Date: NOV 20 2022          
   Workshop: 8 Part- 2     
   I have done all the coding by myself and only copied the code that
   my professor provided to complete my workshops and assignments. 
  ==============================================*/
#include "GeneratingList.h"
#include "EmpProfile.h"
#include "WritingRecord.h"

using namespace std;

namespace sdds {
	GeneratingList<EmployeeWage> writeRaw(const GeneratingList<Employee>& emp, const GeneratingList<Salary>& sal) {
		GeneratingList<EmployeeWage> activeEmp;
		GeneratingList<Employee> E;
		GeneratingList<Salary> S;
		
		for (size_t i = 0; i < emp.size(); i++)
		{
			for (size_t j = 0; j < sal.size(); j++)
			{
				if (emp[i].id == sal[j].id)
				{
					EmployeeWage* wage = nullptr;
					wage = new EmployeeWage(emp[i].name, sal[j].salary);

					try
					{
						wage->rangeValidator();
						
						if (!E.checkSIN(emp[i].id))
						{
							throw string("SIN is not Valid");
						}

						if (!S.checkSIN(sal[j].id))
						{
							throw string("SIN is not Valid");
						}
					}
					catch (const string&)
					{
						delete wage;
						wage = nullptr;
						throw string("*** Employees salaray range is not valid");
					}
					
					if (wage)
					{
						activeEmp += wage;
					}
					
					delete wage;
				}
			}
		}
		
		return activeEmp;
	}

	GeneratingList<EmployeeWage> writeSmart(const GeneratingList<Employee>& emp, const GeneratingList<Salary>& sal)
	{
		GeneratingList<EmployeeWage> activeEmp;
		GeneratingList<Employee> E;
		GeneratingList<Salary> S;

		for (size_t i = 0; i < emp.size(); i++)
		{

			for (size_t y = 0; y < sal.size(); y++)
			{

				if (emp[i].id == sal[y].id)
				{
					std::unique_ptr<EmployeeWage> wage(new EmployeeWage(emp[i].name, sal[y].salary));

					try
					{
						wage->rangeValidator();
						if (!S.checkSIN(sal[y].id)) {
							throw std::string("SIN is not Valid");
						}
						if (!E.checkSIN(emp[i].id)) {
							throw std::string("SIN is not Valid");
						}
					}
					catch (const std::string&)
					{

						throw std::string("*** Employees salaray range is not valid");

					}

					if (wage)
						activeEmp += move(wage);

				}
			}
		}

		return activeEmp;
	}
}