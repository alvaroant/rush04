#include <unistd.h>

void ft_putchar();

void rush(int x, int y)
{
				int counter_x = 0;
				int counter_y = 0;
				char salto = '\n';



				while (counter_y != y)
				{

					if(counter_y == 0)
					{
								while (counter_x != x)
								{
												if(counter_x	 == 0)
												{
													ft_putchar(0);
												}
												if(counter_x > 0 && counter_x < x-1)
												{
													ft_putchar(1);
												}
												if (counter_x == (x - 1))
												{
														ft_putchar(2);
												}

												counter_x++;
								}
					}
					counter_x = 0;
					if(counter_y >0 && counter_y < (y-1))
					{
								while (counter_x != x)
								{
												if(counter_x	 == 0 || counter_x == x-1)
												{
													ft_putchar(1);
												}
												if(counter_x > 0 && counter_x < x-1)
												{
													ft_putchar(3);
												}
												counter_x++;
								}

					}


								counter_x = 0;


					if(counter_y == y-1)
					{
								while (counter_x != x)
								{
												if(counter_x	 == 0)
												{
													ft_putchar(2);
												}
												if(counter_x > 0 && counter_x < x-1)
												{
													ft_putchar(1);
												}
												if (counter_x == (x - 1))
												{
														ft_putchar(0);
												}

												counter_x++;
								}
					}
								
								write(1,&salto,1);    
								counter_y++;
					
				}
  
}