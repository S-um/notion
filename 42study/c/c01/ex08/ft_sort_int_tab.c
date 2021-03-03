void ft_sort_int_tab(int *tab, int size)
{
	int i, j, temp;
	i = 0;
	while(i<size) {
		j = 1;
		while(j<size-i) {
			if(tab[j-1]>tab[j]) {
				temp = tab[j-1];
				tab[j-1] = tab[j];
				tab[j] = temp;
			}
			++j;
		}
		++i;
	}
}
