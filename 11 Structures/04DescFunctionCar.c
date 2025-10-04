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
  printf("Welcome to our Car World\n");
  print_car(&ford);
  return 0;
}

void print_car(Car *car)
{
  printf("This %s model of car, which is of %s color, was purchsed in %d year, and is made by %s company", car->model, car->color, car->year, car->make);
}
// #include <stdio.h>
// #include <string.h>
// struct Car
// {
//   int make;
//   char model[10];
//   int year;
// };
// void desc_car(struct Car c);
// int main()
// {
//   struct Car Maruti;
//   Maruti.make = 2023;
//   strcpy(Maruti.model, "2023febAX");
//   Maruti.year = 2025;
//   desc_car(Maruti);
//   return 0;
// }
// void desc_car(struct Car c)
// {
//   printf("Car Make: %d ,Model: %s,Year: %d", c.make, c.model, c.year);
// };
