set(header_path "${${PROJECT_NAME}_SOURCE_DIR}/include")
set(header ${header_path}/Interfaces.h ${header_path}/Employee.h ${header_path}/Manager.h ${header_path}/Personal.h ${header_path}/Engineer.h ${header_path}/Factory.h ${header_path}/Project.h)
set(src Employee.cpp Personal.cpp Engineer.cpp Manager.cpp Factory.cpp Project.cpp)


add_library(${PROJECT_NAME} SHARED
