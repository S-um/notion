
#include <unistd.h>

void ft_putstr_non_printable(char *str)
{
	char nonPrintableChar[3];
	nonPrintableChar[0] = '\\';

	while(*str) {
		if(32<=*str && *str<=126)
			write(1,str,1);
		else {
			nonPrintableChar[1] = *str/16;
			if(nonPrintableChar[1]>=10)
				nonPrintableChar[1] += 'a'-10;
			else
				nonPrintableChar[1] += '0';

			nonPrintableChar[2] = *str%16;
			if(nonPrintableChar[2]>=10)
				nonPrintableChar[2] += 'a'-10;
			else
				nonPrintableChar[2] += '0';

			write(1,nonPrintableChar,3);
		}
		++str;
	}
}
