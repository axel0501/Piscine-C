#include <unistd.h>

void ft_putchar(char c);
void ft_print_numbers(void);

int main(void) { ft_print_numbers(); }

void ft_print_numbers(void){
	char NBR = '0';
	while (NBR <= '10'){ ft_putchar(NBR); NBR++; }
}

void ft_putchar(char c){ write(STDOUT_FILENO, &c , 1); }