#include "SalariedEmployee.h"
using namespace std;

SalariedEmployee::SalariedEmployee()
:Employee("", 0, "salaried") { // //hereda employee de la clase employee -> el constuctor de salaried tiene name, id, yearly payment
     this -> yearlyPayment = 0.0;
  
}
SalariedEmployee::SalariedEmployee(const string& name, int id, double yearlyPayment)
:Employee(name, id, "salaried")      //hereda employee de la clase employee
{
     this -> yearlyPayment = yearlyPayment;

}
/*TODO: calculate Payment */
 double calculatePay() const {
double result = yearlyPayment/ 26; // lo dijeron en clase
return result;

 }
/* IMPLEMENT GETTERS*/
double SalariedEmployee::getYearlyPayment(){
    return yearlyPayment;
}