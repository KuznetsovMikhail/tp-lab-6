// Copyright 2021 Kuznetsov Mikhail
#ifndef INCLUDE_ENGINEER_H
#define INCLUDE_ENGINEER_H

#include <string>
#include <iostream>
#include "Factory.h"
#include "Personal.h"
#include "Manager.h"

class Engineer : public Personal, ProjectBudget {
 protected:
    Project* project;

 public:
    Engineer(unsigned int _id, std::string _name,
           std::string _position, unsigned int _payment,
           Project* _project);
    unsigned int calcBudgetPart(float _part,
                                unsigned int _budget) override;
    unsigned int calcBonus();
    unsigned int calcProAdditions();
    void printInfo();
};

class Programmer : public Engineer {
 public:
    Programmer(unsigned int _id, std::string _name,
           std::string _position, unsigned int _payment,
           Project* _project);
};

class Tester : public Engineer {
 public:
    Tester(unsigned int _id, std::string _name,
           std::string _position, unsigned int _payment,
           Project* _project);
};

class TeamLeader : public Programmer, public Heading {
 public:
    TeamLeader(unsigned int _id, std::string _name,
           std::string _position, unsigned int _payment,
           Project* _project);
};


#endif // INCLUDE_ENGINEER_H
