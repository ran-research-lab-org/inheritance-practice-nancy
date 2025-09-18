#include "Employee.h"
using namespace std;

Employee::Employee(){
  name = " ";
  id = 0;
  type = " ";
}

Employee::Employee(const string& name, int id, const string& type)                  
{
  this->name=name;   //le asignas al atributo el del parámetro (this es el del atributo)
  this-> id = id; 
  this->type = type;
}

/* IMPLEMENT GETTERS*/
string Employee::getType()const{
  return type;
}
string Employee::getName()const{
  return name;
}