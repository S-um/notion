#include <stdio.h>
void ft_rev_int_tab(int *tab, int size)
{
	int temp, l, r;
	l = 0;
	r = size-1;
	while(l<r) {
		temp = tab[l];
		tab[l] = tab[r];
		tab[r] = temp;
		++l;
		--r;
	}
}
