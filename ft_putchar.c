#include <unistd.h>



void ft_putchar(int num)
{
  char letter[4];
  letter[0] = 'A';
  letter[1] = 'B';
  letter[2] = 'C';
  letter[3] = ' ';

  write(1,&letter[num],1);
}