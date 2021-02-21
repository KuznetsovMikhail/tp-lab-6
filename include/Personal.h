// Copyright 2021 Kuznetsov Mikhail
#ifndef INCLUDE_PERSONAL_H
#define INCLUDE_PERSONAL_H

#include <string>
#include <iostream>
#include <cmath>
#include "Factory.h"
#include "Employee.h"
#include "Interfaces.h"

class Personal : public Employee, public WorkBaseTime {
 protected:
    unsigned int salary;

 public:
    Personal(unsigned int _id, std::string _name,
             std::string _position, unsigned int _payment);
    unsigned int calc() override;
    unsigned int calcBase(unsigned int salary,
                          unsigned int wtime) override;
    unsigned int calcBonus() override;
    void printInfo() override;
};

class Driver : public Personal {
 public:
    Driver(unsigned int _id, std::string _name,
          std::string _position, unsigned int _payment);
    unsigned int calcBonus() override;
};

class Cleaner : public Personal {
 public:
  Cleaner(unsigned int _id, std::string _name,
          std::string _position, unsigned int _payment);
};

#endif // INCLUDE_PERSONAL_H
