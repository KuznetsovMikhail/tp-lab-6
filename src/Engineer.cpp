// Copyright 2021 Kuznetsov Mikhail

Engineer::Engineer(unsigned int _id, std::string _name,
           std::string _position, unsigned int _payment,
           Project* _project)
  : Personal(_id, _name,
             _position, _payment),
             project(_project) {
}

Tester::Tester(unsigned int _id, std::string _name,
           std::string _position, unsigned int _payment,
           Project* _project)
  : Engineer(_id, _name,
             _position, _payment, _project) {
}

Programmer::Programmer(unsigned int _id, std::string _name,
           std::string _position, unsigned int _payment,
           Project* _project)
  : Engineer(_id, _name,
             _position, _payment, _project) {
}

TeamLeader::TeamLeader(unsigned int _id, std::string _name,
           std::string _position, unsigned int _payment,
           Project* _project)
  : Programmer(_id, _name,
             _position, _payment, _project) {
}
