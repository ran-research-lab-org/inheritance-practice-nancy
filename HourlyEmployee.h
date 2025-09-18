#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include "Employee.h"

class HourlyEmployee : public Employee {
    private:
        double payPerHour;
        double workedHours;
    public:
        HourlyEmployee(); //constructor default
        HourlyEmployee(const string& name, int id, double payPerHour, double workedHours); // constructor por parámetro

        double calculatePay() const override; 
    
        double getPayPerHour() const;
        double getWorkedHours() const;
};

#endif

