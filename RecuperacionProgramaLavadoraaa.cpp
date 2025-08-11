#include <iostream>
#include <string>
#include <iomanip>

class MaquinaLavadora {
private:
    std::string estadoActual;
    std::string programaSeleccionado;
    bool funcionando;
    
    // Método para simular tiempo de espera
    void simularProceso(const std::string& proceso, int duracion) {
        std::cout << ">> " << proceso << " ";
        std::cout << "(Duración: " << duracion << " segundos)" << std::endl;
    }
    
    // Verificar si la máquina puede operar
    bool puedeOperar() const {
        return funcionando;
    }
    
public:
    // Constructor
    MaquinaLavadora() : estadoActual("desactivada"), programaSeleccionado("regular"), funcionando(false) {
        std::cout << "[SISTEMA] Lavadora inicializada correctamente" << std::endl;
    }
    
    // Activar la lavadora
    void activar() {
        if (funcionando) {
            std::cout << "[AVISO] La maquina lavadora ya se encuentra activa" << std::endl;
            return;
        }
        funcionando = true;
        estadoActual = "lista";
        std::cout << "[SISTEMA] Maquina lavadora activada - Estado: " << estadoActual << std::endl;
    }
    
    // Desactivar la lavadora
    void desactivar() {
        if (!funcionando) {
            std::cout << "[AVISO] La maquina lavadora ya se encuentra desactivada" << std::endl;
            return;
        }
        funcionando = false;
        estadoActual = "desactivada";
        std::cout << "[SISTEMA] Maquina lavadora desactivada" << std::endl;
    }
    
    // Configurar programa de lavado
    bool configurarPrograma(const std::string& programa) {
        if (programa == "regular" || programa == "delicado" || programa == "super delicado") {
            programaSeleccionado = programa;
            std::cout << "[CONFIG] Programa establecido: " << programaSeleccionado << std::endl;
            return true;
        }
        std::cout << "[ERROR] Programa no valido. Opciones: regular, delicado, super delicado" << std::endl;
        return false;
    }
    
    // Ejecutar ciclo completo de lavado
    void ejecutarLavado() {
        if (!puedeOperar()) {
            std::cout << "[ERROR] No se puede iniciar - La lavadora esta desactivada" << std::endl;
            return;
        }
        
        std::cout << "\n" << std::string(50, '=') << std::endl;
        std::cout << "   INICIANDO PROCESO DE LAVADO: " << programaSeleccionado << std::endl;
        std::cout << std::string(50, '=') << std::endl;
        
        if (programaSeleccionado == "regular") {
            ejecutarCicloRegular();
        } else if (programaSeleccionado == "delicado") {
            ejecutarCicloDelicado();
        } else if (programaSeleccionado == "super delicado") {
            ejecutarCicloSuperDelicado();
        }
        
        // Finalizacion
        estadoActual = "lista";
        std::cout << "\n" << std::string(50, '=') << std::endl;
        std::cout << "   PROCESO COMPLETADO - Estado actual: " << estadoActual << std::endl;
        std::cout << std::string(50, '=') << std::endl;
    }
    
    // Ciclo REGULAR: soak -> rinse -> drain -> dry
    void ejecutarCicloRegular() {
        // SOAK (remojo)
        estadoActual = "soak";
        std::cout << "\n[SOAK] Remojando... light(soak) ON, pump(in) ON" << std::endl;
        simularProceso("Remojo", 30);
        std::cout << "[CONTROL] light(soak) OFF despues de 30 min" << std::endl;
        
        // RINSE (enjuague)  
        estadoActual = "rinse";
        std::cout << "\n[RINSE] Enjuagando... light(rinse) ON, stir() ON" << std::endl;
        simularProceso("Enjuague con agitacion", 30);
        std::cout << "[CONTROL] light(rinse) OFF despues de 30 min" << std::endl;
        
        // DRAIN (drenaje)
        estadoActual = "drain";
        std::cout << "\n[DRAIN] Drenando... light(drain) ON, pump(out) ON" << std::endl;
        simularProceso("Drenando agua", 5);
        std::cout << "[CONTROL] light(drain) OFF despues de 5 min" << std::endl;
        
        // DRY (secado)
        estadoActual = "dry";
        std::cout << "\n[DRY] Secando... light(dry) ON, stir() ON" << std::endl;
        simularProceso("Secado con agitacion", 5);
        std::cout << "[CONTROL] light(dry) OFF despues de 5 min" << std::endl;
    }
    
    // Ciclo DELICADO: soak -> rinse -> drain -> dry
    void ejecutarCicloDelicado() {
        // SOAK (remojo) 
        estadoActual = "soak";
        std::cout << "\n[SOAK] Remojando... light(soak) ON, pump(in) ON" << std::endl;
        simularProceso("Remojo delicado", 30);
        std::cout << "[CONTROL] light(soak) OFF despues de 30 min" << std::endl;
        
        // RINSE (enjuague)
        estadoActual = "rinse";  
        std::cout << "\n[RINSE] Enjuagando... light(rinse) ON, stir() ON" << std::endl;
        simularProceso("Enjuague delicado con agitacion", 30);
        std::cout << "[CONTROL] light(rinse) OFF despues de 30 min" << std::endl;
        
        // DRAIN (drenaje)
        estadoActual = "drain";
        std::cout << "\n[DRAIN] Drenando... light(drain) ON, pump(out) ON" << std::endl;
        simularProceso("Drenando agua", 5);
        std::cout << "[CONTROL] light(drain) OFF despues de 5 min" << std::endl;
        
        // DRY (secado)
        estadoActual = "dry";
        std::cout << "\n[DRY] Secando... light(dry) ON, stir() ON" << std::endl;
        simularProceso("Secado delicado con agitacion", 5);
        std::cout << "[CONTROL] light(dry) OFF despues de 5 min" << std::endl;
    }
    
    // Ciclo SUPER DELICADO: soak (5 min) -> drain -> dry (NO tiene rinse)
    void ejecutarCicloSuperDelicado() {
        // SOAK (remojo corto)
        estadoActual = "soak";
        std::cout << "\n[SOAK] Remojando... light(soak) ON, pump(in) ON" << std::endl;
        simularProceso("Remojo super delicado", 5);
        std::cout << "[CONTROL] light(soak) OFF despues de 5 min (plan = super delicado)" << std::endl;
        
        // DRAIN (drenaje) - VA DIRECTO SIN RINSE
        estadoActual = "drain";
        std::cout << "\n[DRAIN] Drenando... light(drain) ON, pump(out) ON" << std::endl;
        simularProceso("Drenando agua", 5);
        std::cout << "[CONTROL] light(drain) OFF despues de 5 min" << std::endl;
        
        // DRY (secado)
        estadoActual = "dry";
        std::cout << "\n[DRY] Secando... light(dry) ON, stir() ON" << std::endl;
        simularProceso("Secado super delicado con agitacion", 5);
        std::cout << "[CONTROL] light(dry) OFF despues de 5 min" << std::endl;
    }
    
    // Getter para verificar estado
    bool estaActiva() const {
        return funcionando;
    }
};

int main() {
    MaquinaLavadora lavadora;
    std::string entrada, tipoPrograma;
    
    std::cout << "=== CONTROL DE LAVADORA AUTOMATICA ===" << std::endl;
    std::cout << "Activar la lavadora? (si/no): ";
    std::getline(std::cin, entrada);
    
    if (entrada != "si") {
        std::cout << "Sistema no iniciado. Finalizando programa..." << std::endl;
        return 0;
    }
    
    lavadora.activar();
    
    while (lavadora.estaActiva()) {
        std::cout << "\n--- CONFIGURACION DE PROGRAMA ---" << std::endl;
        std::cout << "Ingrese tipo de programa (regular/delicado/super delicado): ";
        std::getline(std::cin, tipoPrograma);
        
        if (lavadora.configurarPrograma(tipoPrograma)) {
            lavadora.ejecutarLavado();
            
            std::cout << "\nRealizar otro lavado? (si/no): ";
            std::getline(std::cin, entrada);
            
            if (entrada != "si") {
                lavadora.desactivar();
                break;
            }
        }
    }
    
    std::cout << "\nGracias por usar el sistema de lavadora automatica." << std::endl;
    return 0;
}
