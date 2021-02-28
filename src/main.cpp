// Copyright 2021 Kuznetsov Mikhail

#include <vector>
#include <random>
#include "Employee.h"
#include "Engineer.h"
#include "Factory.h"
#include "Manager.h"
#include "Personal.h"

int main() {
    StaffFactory factory;
    std::vector<Employee*> staff =
    factory.makeStaff("../data/Projects.txt", "../data/Employees.txt");
    for (auto e : staff) {
      e->setWorktime(std::rand() % 36 + 20);
      //  установка рабочего времени в промежутке [20, 55]
    }
    for (auto e : staff) {
      e->calc();
      //  вычисление дохода, заработанного сотрудниками
    }
    for (auto e : staff) {
      e->printInfo();
      //  вывод информации о сотрудниках
    }
    return 0;
}
