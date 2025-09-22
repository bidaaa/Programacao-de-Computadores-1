#include <stdio.h>
#include <stdlib.h>

enum semana {Domingo = 1, Segunda, Terca, Quarta = 7, Quinta, Sexta, Sabado
};

int main()
{
  enum semana s1, s2, s3;
  s1 = Segunda;
  s2 = Terca;
  s3 = s1+s2;
  printf("Domingo = %d\n", Domingo);
  printf("Segunda = %d\n", Segunda);
  printf("Terca = %d\n", Terca);
  printf("Quarta = %d\n", Quarta);
  printf("Quinta = %d\n", Quinta);
  printf("Sexta = %d\n", Sexta);
  printf("Sabado = %d\n", Sabado);
  system("pause");
  return 0;
}
