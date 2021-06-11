#pragma once

#pragma warning(disable : 4996)

#include <iostream>

struct {
	char	zero[5]			= "0000";
	char	one[5]			= "0001";
	char	two[5]			= "0010";
	char	tree[5]			= "0011";
	char	four[5]			= "0100";
	char	five[5]			= "0101";
	char	six[5]			= "0110";
	char	seven[5]		= "0111";
	char	eight[5]		= "1000";
	char	nine[5]			= "1001";
	char	A[5]			= "1010";
	char	B[5]			= "1011";
	char	C[5]			= "1100";
	char	D[5]			= "1101";
	char	E[5]			= "1110";
	char	F[5]			= "1111";
} HEXA;


class calculator
{
public:
	unsigned short		number;

	unsigned char		binary[17];

	unsigned char		hex[7];

public:
	void	toBinary();

	void	toHex();
};

