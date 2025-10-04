#include <stdio.h>

struct Car
{
  char make[25];
  char model[25];
  int year;
  char color[15];
};

typedef struct Car Car;

void print_car(Car *car);

int main()
{
  Car ford = {.make = "Ford", .model = "Aspire", .year = 2016, .color = "Red"};
  return 0;
}
// #include <stdio.h>
// #include <string.h>
// struct Car
// {
//   int make;
//   char model[10];
//   int year;
// };

// int main()
// {
//   struct Car Maruti;
//   Maruti.make = 2023;
//   strcpy(Maruti.model, "2023febAX");
//   Maruti.year = 2025;
//   printf("Car %d ,Model %s,Year %d", Maruti.make, Maruti.model, Maruti.year);
//   return 0;
// }