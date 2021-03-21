FT_LINE1=3
FT_LINE2=10
cat /etc/passwd | sed '/#/d' | awk 'NR!=0 {print}' | sed 's/:.*//' | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | sed 's/\n/, /' | sed 's/, $/./'
