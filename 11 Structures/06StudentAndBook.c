#include <stdio.h>

struct Book
{
  char title[100];
  char author[100];
  float price;
};

typedef struct Book Book;

typedef struct
{
  char id[10];
  char name[50];
  char year[10];
  char grade;
  int no_of_books;
  Book borrowed_books[3];
} Student;

void print_student(Student *);
void print_book(Book *);

int main()
{
  Student stu1 = {
      .id = "CS001",
      .name = "Ravi",
      .year = "First",
      .grade = 'B',
      .no_of_books = 2,
      .borrowed_books = {
          {.title = "The Selfish Gene", .author = "Richard Dawkins", .price = 499.99},
          {.title = "Why We sleep", .author = "Matthew Walker", .price = 399.99}}};

  printf("Welcome to our College\n");
  printf("Here are the student details:");
  print_student(&stu1);
  return 0;
}

void print_student(Student *stu)
{
  printf("\nThe student with %s name has id: %s and studies in %s year has achieved %c grade", stu->name, stu->id, stu->year, stu->grade);

  printf("\nHere are the books borrowed: ");
  for (int i = 0; i < stu->no_of_books; i++)
  {
    print_book(&(stu->borrowed_books[i]));
  }
}

void print_book(Book *book)
{
  printf("\n%s is written by %s, and is sold for Rs%.2f",
         book->title, book->author, book->price);
}

// #include <stdio.h>
// struct Book
// {
//   char title[50];
//   char author[20];
//   int price;
// };
// struct Student
// {
//   char Name[50];
//   int Year;
//   char gpa;
//   struct BookborrowedBook[3];
// };

// int main()
// {
//   struct Student Student1 = {"Prashant", 2022, 'a', [{"Ego-1", "Justin", 200}]};
//   struct Student Student2 = {"Suthar", 2020, 'b'};
//   struct Student Student3 = {"rameshbhai", 2019, 'a'};

//   struct Student *str1 = &Student1;
//   struct Student *str2 = &Student2;
//   struct Student *str3 = &Student3;

//   printf("\nStudent Name: %s, Year:%d,Grade:%c", (*str1).Name, (*str1).Year, (*str1).gpa);
//   printf("\nStudent Name: %s, Year:%d,Grade:%c", (*str2).Name, (*str2).Year, (*str2).gpa);
//   printf("\nStudent Name: %s, Year:%d,Grade:%c", (*str3).Name, (*str3).Year, (*str3).gpa);

//   return 0;
// }