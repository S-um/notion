
#include <unistd.h>

void *ft_print_memory(void *addr, unsigned int size)
{
	char address[17];
	char memory[3];
	char *ptr;
	unsigned long temp;
	int len, i;

	address[16] = ':';
	memory[0] = ' ';
	ptr = addr;
	while(size) {
		if(size>16)
			len = 16;
		else
			len = size;

		size -= len;
		i = len-1;
		temp = (unsigned long)ptr;
		while(i>=0) {
			address[i] = temp%16;
			if(address[i]>=10)
				address[i] += 'a'-10;
			else
				address[i] += '0';
			temp /= 16;
			--i;
		}
		write(1,address,17);
		i = 0;
		while(i<len) {
			if(i%2) {
				memory[1] = ptr[i]/16;
				if(memory[1]>=10)
					memory[1] += 'a'-10;
				else
					memory[1] += '0';

				memory[2] = ptr[i]%16;
				if(memory[2]>=10)
					memory[2] += 'a'-10;
				else
					memory[2] += '0';

				write(1,memory+1,2);
			}else{
				memory[1] = ptr[i]/16;
				if(memory[1]>=10)
					memory[1] += 'a'-10;
				else
					memory[1] += '0';

				memory[2] = ptr[i]%16;
				if(memory[2]>=10)
					memory[2] += 'a'-10;
				else
					memory[2] += '0';
				write(1,memory,3);
			}
			++i;
		}
		write(1," ",1);
		i = 0;
		while(i<len) {
			if(32<=ptr[i]&&ptr[i]<=126)
				write(1,ptr+i,1);
			else
				write(1,".",1);
			++i;
		}
		ptr += len;
		write(1,"\n",1);
	}
	return addr;
}

int main(void)
{
	ft_print_memory("Bonjour les aminches\n\n\nc  est fou\ntout\nce qu on peut faire avec\n\n\nprint_memory\n\n\n\nlol\nlol\n ",92);
}
