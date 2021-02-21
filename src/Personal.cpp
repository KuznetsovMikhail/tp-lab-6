// Copyright 2021 Kuznetsov Mikhail
#include "Personal.h"

Personal::Personal(unsigned int _id, std::string _name,
             std::string _position, unsigned int _payment)
    : Employee (_id, _name,
                _position, _payment) {
}

unsigned int Personal::calc() {
  salary = calcBase(payment, worktime) + calcBonus();
  return salary;
}

unsigned int Personal::calcBase(unsigned int _payment,
                      unsigned int _worktime) {
  return _payment * _payment;
}

unsigned int Personal::calcBonus() {
  return 0;
}

void Personal::printInfo() {
    std::cout << "-----------------Employee card-----------------\n"
    << "id: " << id << "\nname: " << name
    << "\nposition: " << position << "\nworktime: " << workTime;
    << "\nsalary: " << salary
    << "\n-----------------Employee card-----------------\n";
}

Driver::Driver(unsigned int _id, std::string _name,
          std::string _position, unsigned int _payment)
  : Personal(_id, _name, _position, _payment) {
}

Driver::calcBonus() {
  unsigned int bonusTime = worktime > 40 ? worktime - 40 : 0;
  return payment * 2 * bonusTime;
}

Cleaner::Cleaner(unsigned int _id, std::string _name,
          std::string _position, unsigned int _payment);
  : Personal(_id, _name, _position, _payment) {
}
