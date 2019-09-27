project(Hospital)

set(SOURCE_FILES Main.cpp Paciente.h Paciente.cpp Pabellones.h Pabellones.cpp
Camas.h Camas.cpp Doctores.h Doctores.cpp Especialidades.h Especialidades.cpp)

add_executable(ProyectoHospitalSierra ${SOURCE_FILES})
