#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
  char text[100];
  printf("Welcome to converting string to UPPERCASE\n\n");
  printf("Please enter your text: ");
  fgets(text, sizeof(text), stdin);

  // for (int i = 0; text[i] != '\0'; i++) {
  for (int i = 0; i < strlen(text); i++)
  {
    text[i] = toupper(text[i]);
  }

  printf("Here is your final output\n%s", text);
  return 0;
}

// #include <stdio.h>
// int main()
// {
//   char str[100];
//   printf("Enter A String : ");
//   fgets(str, sizeof(str), stdin);
//   for (int i = 0; i < sizeof(str); i++)
//   {
//     if (str[i] > 96)
//     {
//       str[i] = str[i] - 32;
//     }
//   }
//   printf("%s", str);
//   return 0;
// }