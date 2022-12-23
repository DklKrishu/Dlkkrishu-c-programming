#include <stdio.h>

typedef struct {
  double real;
  double imag;
} complex_t;

complex_t add_complex(complex_t c1, complex_t c2) {
  complex_t c3;
  c3.real = c1.real + c2.real;
  c3.imag = c1.imag + c2.imag;
  return c3;
}

int main(void) {
  complex_t c1, c2, c3;

  printf("Enter the first complex number (real imag): ");
  scanf("%lf %lf", &c1.real, &c1.imag);

  printf("Enter the second complex number (real imag): ");
  scanf("%lf %lf", &c2.real, &c2.imag);

  c3 = add_complex(c1, c2);

  printf("The sum of the two complex numbers is: %.2lf + %.2lfi\n", c3.real, c3.imag);

  return 0;
}


