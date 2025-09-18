#include "HourlyEmployee.h"
using namespace std;

//HERENCIA: 
/* SINTAXIS PARA CLASES DE HERENCIAS:
ClaseDerivada::ClaseDerivada(parámetros)
    : ClaseBase(parámetros_que_recibe_el_constructor_base), atributo1(valor1), atributo2(valor2) {
    // cuerpo del constructor (opcional)
}*/

HourlyEmployee::HourlyEmployee()
   :Employee ("",0,"Hourly"), payPerHour(0.0),workedHours(0.0) //(name, id,tipo de pago) se llaman el constructor con datos default
{
}
HourlyEmployee::HourlyEmployee(const string& name, int id, double payPerHour, double workedHours) // iniciar los atributos heredados
   :Employee (name,id,"Hourly") //se utilizan los atributos de employee
{
   this -> payPerHour = payPerHour;
   this ->workedHours = workedHours;
}
/*TODO: calculate Payment */
double HourlyEmployee::calculatePay() const{ //Devuelve el salario quincenal de los empleados pagados por hora.
double bi_weeklly = payPerHour * workedHours;  
return bi_weeklly;
}

 double HourlyEmployee::getPayPerHour()const{
    return payPerHour;
 }
 double HourlyEmployee::getWorkedHours()const{
    return workedHours;
 }

