// Copyright 2021 Kuznetsov Mikhail
#ifndef INCLUDE_EMPLOYEE_H
#define INCLUDE_EMPLOYEE_H

#include <string>

class Employee {
 protected:
    unsigned int id;
    std::string name;
    std::string position;
    unsigned int worktime;
    unsigned int payment;

 public:
    Employee(unsigned int _id, std::string _name,
             std::string _position, unsigned int _payment);
    void setWorkTime(unsigned int _worktime);
    unsigned int getId();
    std::string getName();
    std::string getPosition();
    unsigned int getWorktime();
    unsigned int getPayment();
    virtual int calc() = 0;
    virtual void printInfo() = 0;
};

#endif // INCLUDE_EMPLOYEE_H
