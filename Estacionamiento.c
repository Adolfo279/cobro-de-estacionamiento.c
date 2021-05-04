#include <stdio.h>
int main()
{
  float precio, tiempo, multiplicacion;
  printf("\n\n BIENVENIDO AL ESTACIONAMIENTO");
  printf("\n\n El precio que se tiene es de $50 por hora");
  printf("\n\n ¿Cuánto tiempo se va a quedar en el estacionamiento?");
  scanf("%f",& tiempo);
  multiplicacion = tiempo * 50;
  printf("\n El precio total seria de %f" , multiplicacion);
  printf("\n Eso es todo, ya puede dejar su auto con seguridad, gracias por su preferencia");
  return 0;

}