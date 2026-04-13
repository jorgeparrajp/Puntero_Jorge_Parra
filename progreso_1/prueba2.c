#include <stdio.h> 
 int main() {
      int i, j;
       float notas[5][3];
 
       // 1) Pedir notas con validación 0 a 10
       for (i = 0; i < 5; i++) {
           printf("\n=== Estudiante %d ===\n", i + 1);

          for (j = 0; j < 3; j++) {
              do {
                printf("Ingrese nota de Asignatura %d (0 a 10): ", j + 1);
                scanf("%f", &notas[i][j]);

                  if (notas[i][j] < 0 || notas[i][j] > 10) {
                      printf("Error: la nota debe estar entre 0 y 10.\n");
                  }
              } while (notas[i][j] < 0 || notas[i][j] > 10);
          }
      }
    // 2) Promedio + max/min por estudiante
      printf("\n\n--- Promedio, Nota Max y Min por Estudiante ---\n");
      for (i = 0; i < 5; i++) {
         float suma = 0;
         float max = notas[i][0];
          float min = notas[i][0];

          for (j = 0; j < 3; j++) {
             suma += notas[i][j];

              if (notas[i][j] > max) max = notas[i][j];
            if (notas[i][j] < min) min = notas[i][j];
          }

         printf("Estudiante %d -> Promedio: %.2f | Max: %.2f | Min: %.2f\n",
                 i + 1, suma / 3, max, min);
      }

      // 3) Promedio + max/min + aprobados/reprobados por asignatura
      printf("\n--- Promedio, Nota Max/Min y Aprobados/Reprobados por Asignatura ---\n");
      for (j = 0; j < 3; j++) {
          float suma = 0;
          float max = notas[0][j];
          float min = notas[0][j];
          int aprobados = 0, reprobados = 0;

          for (i = 0; i < 5; i++) {
              suma += notas[i][j];
              if (notas[i][j] > max) max = notas[i][j];
              if (notas[i][j] < min) min = notas[i][j];

              if (notas[i][j] >= 6) aprobados++;
              else reprobados++;
          }

          printf("Asignatura %d -> Promedio: %.2f | Max: %.2f | Min: %.2f | Aprobados: %d | Reprobados: %d\n",
                 j + 1, suma / 5, max, min, aprobados, reprobados);      }

      return 0;
  }