1  #include <stdio.h>
 2
 3  int main() {
 4      int i, j;
 5      float notas[5][3];
 6
 7      // 1) Pedir notas con validación 0 a 10
 8      for (i = 0; i < 5; i++) {
 9          printf("\n=== Estudiante %d ===\n", i + 1);
10
11          for (j = 0; j < 3; j++) {
12              do {
13                  printf("Ingrese nota de Asignatura %d (0 a 10): ", j + 1);
14                  scanf("%f", &notas[i][j]);
15
16                  if (notas[i][j] < 0 || notas[i][j] > 10) {
17                      printf("Error: la nota debe estar entre 0 y 10.\n");
18                  }
19              } while (notas[i][j] < 0 || notas[i][j] > 10);
20          }
21      }
22
23      // 2) Promedio + max/min por estudiante
24      printf("\n\n--- Promedio, Nota Max y Min por Estudiante ---\n");
25      for (i = 0; i < 5; i++) {
26          float suma = 0;
27          float max = notas[i][0];
28          float min = notas[i][0];
29
30          for (j = 0; j < 3; j++) {
31              suma += notas[i][j];
32
33              if (notas[i][j] > max) max = notas[i][j];
34              if (notas[i][j] < min) min = notas[i][j];
35          }
36
37          printf("Estudiante %d -> Promedio: %.2f | Max: %.2f | Min: %.2f\n",
38                 i + 1, suma / 3, max, min);
39      }
40
41      // 3) Promedio + max/min + aprobados/reprobados por asignatura
42      printf("\n--- Promedio, Nota Max/Min y Aprobados/Reprobados por Asignatura ---\n");
43      for (j = 0; j < 3; j++) {
44          float suma = 0;
45          float max = notas[0][j];
46          float min = notas[0][j];
47          int aprobados = 0, reprobados = 0;
48
49          for (i = 0; i < 5; i++) {
50              suma += notas[i][j];
51
52              if (notas[i][j] > max) max = notas[i][j];
53              if (notas[i][j] < min) min = notas[i][j];
54
55              if (notas[i][j] >= 6) aprobados++;
56              else reprobados++;
57          }
58
59          printf("Asignatura %d -> Promedio: %.2f | Max: %.2f | Min: %.2f | Aprobados: %d | Reprobados: %d\n",
60                 j + 1, suma / 5, max, min, aprobados, reprobados);
61      }
62
63      return 0;
64  }