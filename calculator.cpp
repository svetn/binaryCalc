#include "calculator.h"

void calculator::toBinary()
{
	unsigned short buff;

	unsigned short cloneNumb = this->number;	

	for (int i = 0; i < 16; i++)
	{
		buff = cloneNumb % 2;

		if (buff == 0) binary[i] = '0';
		if (buff == 1) binary[i] = '1';

		cloneNumb = cloneNumb / 2;

		if (cloneNumb == 0)
		{
			break;								
		}
	}

	for (int i = 0; i < 16; i++)
	{
		unsigned char swapValue = '0';

		if (binary[i] != '0' && binary[i] !='1')
		{
			for (int j = i; j < 16; j++)				
			{												
				unsigned char value = binary[j];

				binary[j] = swapValue;

				swapValue = value;
			}

		}

	}

	short		  jj = 15;
	unsigned char buff_2[17];

	for (int i = 0; i < 16; i++)
	{
		buff_2[i] = binary[jj];		
		jj--;
	}

	binary[16]	= '\0';				
	buff_2[16]	= '\0';				

	for (int i = 0; i < 17; i++)
	{
		binary[i] = buff_2[i];		
	}

}


int cmp(char a[5], char b[5])
{
	bool isTrue = false;

	for (int i = 0; i < 5 ; i++) 
	{

		if (a[i] != b[i]) 
			return 0;

	}

	return 1;
}
void calculator::toHex()
{
	this->hex[0] = '0';
	this->hex[1] = 'x';

	unsigned short hexN = 2;

	char buf[5];

	int numb = 0;

	for (int j = 0; j < 4; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			buf[i] = binary[i + numb];
		}

		buf[4] = '\0';

			if (cmp(buf, HEXA.zero) == 1)			hex[hexN] = '0';
			if (cmp(buf, HEXA.one) == 1)			hex[hexN] = '1';
			if (cmp(buf, HEXA.two) == 1)			hex[hexN] = '2';
			if (cmp(buf, HEXA.tree) == 1)			hex[hexN] = '3';
			if (cmp(buf, HEXA.four) == 1)			hex[hexN] = '4';
			if (cmp(buf, HEXA.five) == 1)			hex[hexN] = '5';
			if (cmp(buf, HEXA.six) == 1)			hex[hexN] = '6';
			if (cmp(buf, HEXA.seven) == 1)			hex[hexN] = '7';
			if (cmp(buf, HEXA.eight) == 1)			hex[hexN] = '8';
			if (cmp(buf, HEXA.nine) == 1)			hex[hexN] = '9';
			if (cmp(buf, HEXA.A) == 1)				hex[hexN] = 'A';
			if (cmp(buf, HEXA.B) == 1)				hex[hexN] = 'B';
			if (cmp(buf, HEXA.C) == 1)				hex[hexN] = 'C';
			if (cmp(buf, HEXA.D) == 1)				hex[hexN] = 'D';
			if (cmp(buf, HEXA.E) == 1)				hex[hexN] = 'E';
			if (cmp(buf, HEXA.F) == 1)				hex[hexN] = 'F';

			numb += 4;
			hexN += 1;
	}
	hex[6] = '\0';
}


