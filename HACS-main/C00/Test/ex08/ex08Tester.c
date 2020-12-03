#include <stdio.h>
#include <unistd.h>

void ft_print_combn(int n);

int main(void)
{
	printf("---Expected-output---\n");
	printf("0, 1, 2, 3, 4, 5, 6, 7, 8, 9\n");
	printf("----Actual---output---\n");
	ft_print_combn(1);
	printf("\n---------------------\n");
	printf("---Expected-output---\n");
	printf("012, 013, 014, 015, 016, 017, 018, 019, 023, 024, 025, 026, 027, 028, 029, 034, 035, 036, 037, 038, 039, 045, 046, 047, 048, 049, 056, 057, 058, 059, 067, 068, 069, 078, 079, 089, 123, 124, 125, 126, 127, 128, 129, 134, 135, 136, 137, 138, 139, 145, 146, 147, 148, 149, 156, 157, 158, 159, 167, 168, 169, 178, 179, 189, 234, 235, 236, 237, 238, 239, 245, 246, 247, 248, 249, 256, 257, 258, 259, 267, 268, 269, 278, 279, 289, 345, 346, 347, 348, 349, 356, 357, 358, 359, 367, 368, 369, 378, 379, 389, 456, 457, 458, 459, 467, 468, 469, 478, 479, 489, 567, 568, 569, 578, 579, 589, 678, 679, 689, 789\n");
	printf("----Actual---output---\n");
	ft_print_combn(3);
	printf("\n---------------------\n");
	printf("---Expected-output---\n");
	printf("012345678, 012345679, 012345689, 012345789, 012346789, 012356789, 012456789, 013456789, 023456789, 123456789\n");
	printf("----Actual---output---\n");
	ft_print_combn(9);
}
