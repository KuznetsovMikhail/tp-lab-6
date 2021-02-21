// Copyright 2021 Kuznetsov Mikhail
#include "Employee.h"

Employee::Employee(unsigned int _id, std::string _name,
             std::string _position, unsigned int _payment) {
  id = _id;
  name = _name;
  position = _position;
  payment = _payment;
}

void Employee::setWorkTime(unsigned int _worktime) {
  worktime = _worktime;
}

unsigned int Employee::getId() {
  return id;
}

std::string Employee::getName() {
  return name;
}

std::string Employee::getPosition() {
  return position;
}

unsigned int Employee::getWorktime() {
  return worktime;
}

unsigned int Employee::getPayment() {
  return payment;
}
