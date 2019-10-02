project(Hospital)

set(SOURCE_FILES main.cpp Paciente.h Paciente.cpp Pabellon.h Pabellon.cpp
Cama.h Cama.cpp Doctor.h Doctor.cpp Especialidad.h Especialidad.cpp)

add_executable(ProyectoHospitalSierra ${SOURCE_FILES})
