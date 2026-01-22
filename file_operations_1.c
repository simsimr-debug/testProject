#include<stdio.h>
void main()
{
  FILE *file = fopen("C:\\Users\\simra\\OneDrive\\Documents\\txt file(basic_file_operations).txt","r");
  if (file == NULL)
  {
    perror("error opening a file");
  }
}

