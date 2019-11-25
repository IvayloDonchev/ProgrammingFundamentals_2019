#pragma once
unsigned long fact(unsigned n)
{
	unsigned long f = 1;
	for (unsigned i = 2; i <= n; i++)
		f *= i;
	return f;
}
