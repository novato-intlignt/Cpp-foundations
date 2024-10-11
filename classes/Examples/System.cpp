#include <iostream>
#include <memory>
#include <vector>

// Clase base abstracta
class Empleado {
protected:
  std::string nombre;
  int id;

public:
  Empleado(const std::string &nombre_, int id_) : nombre(nombre_), id(id_) {}
  virtual ~Empleado() {}

  virtual void mostrarInformacion() const = 0;
};

// Clase derivada: Empleado de Tiempo Completo
class EmpleadoTiempoCompleto : public Empleado {
private:
  double salarioAnual;

public:
  EmpleadoTiempoCompleto(const std::string &nombre_, int id_, double salario)
      : Empleado(nombre_, id_), salarioAnual(salario) {}

  void mostrarInformacion() const override {
    std::cout << "Empleado Tiempo Completo - ID: " << id
              << ", Nombre: " << nombre << ", Salario Anual: $" << salarioAnual
              << std::endl;
  }
};

// Clase derivada: Empleado por Horas
class EmpleadoPorHoras : public Empleado {
private:
  double tarifaHora;
  int horasTrabajadas;

public:
  EmpleadoPorHoras(const std::string &nombre_, int id_, double tarifa,
                   int horas)
      : Empleado(nombre_, id_), tarifaHora(tarifa), horasTrabajadas(horas) {}

  void mostrarInformacion() const override {
    std::cout << "Empleado por Horas - ID: " << id << ", Nombre: " << nombre
              << ", Tarifa Hora: $" << tarifaHora
              << ", Horas Trabajadas: " << horasTrabajadas << std::endl;
  }
};

// Clase Empresa que gestiona empleados
class Empresa {
private:
  std::vector<std::shared_ptr<Empleado>> empleados;

public:
  void agregarEmpleado(const std::shared_ptr<Empleado> &empleado) {
    empleados.push_back(empleado);
  }

  void mostrarTodosEmpleados() const {
    for (const auto &emp : empleados) {
      emp->mostrarInformacion();
    }
  }
};

int main() {
  Empresa miEmpresa;

  std::shared_ptr<Empleado> emp1 =
      std::make_shared<EmpleadoTiempoCompleto>("Ana Pérez", 101, 60000);
  std::shared_ptr<Empleado> emp2 =
      std::make_shared<EmpleadoPorHoras>("Luis Gómez", 102, 20, 1200);

  miEmpresa.agregarEmpleado(emp1);
  miEmpresa.agregarEmpleado(emp2);

  miEmpresa.mostrarTodosEmpleados();

  return 0;
}
