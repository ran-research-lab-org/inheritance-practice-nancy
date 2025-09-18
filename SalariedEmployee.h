#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include "Employee.h"
using namespace std;

class SalariedEmployee : public Employee {
    privated:
        double yearlyPayment;
    public:
        SalariedEmployee();
        SalariedEmployee(const string& name, int id, double yearlyPayment);

        double calculatePay() const override; //Devuelve el pago quincenal de los empleados asalariados
        double getYearlyPayment(); 
    

};

#endif

