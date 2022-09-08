#include "reportes/ComentariosYCaracteresNoReconocidos.h"
#include "reportes/Constantes.h"
#include "reportes/LiteralCadenayPalabrasReservadas.h"
#include "reportes/OperadoresEIdentificadores.h"

//////////////////////////  REPORTES  ////////////////////////////////////

void ejecutarReportes(){
    reportePalabrasReservadas();
    reporteLiteralesCadena();
    reporteConstantesDecimales();
    reporteConstantesOctales();
    reporteConstantesHexadecimales();
    reporteConstantesReales();
    reporteConstantesCaracter();
    reporteOperadoresCaracteresPuntc();
    reporteIdentificadores();
    reporteComentarios();
    reporteCaracNoReconocidos();
}
