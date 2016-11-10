double summa(double a, double b)
{
	return  a + b;
}

double sub(double a, double b)
{
	return a - b;
}

double mult(double a, double b)
{
	return a*b;
}

double dev(double a, double b)
{
	if (b != 0) return a / b;
	else return 0;
}

double pow(double a, double b)
{
	double c;
	c = 1;
	if (b == 0) c = 1;
	else if (b > 0)

		while (b > 0)
		{
			c = c*a;
			b = b - 1;
		}
	else if (b < 0)
		while (b < 0)
		{
			c = c / a;
			b = b + 1;
		}
	return c;
}

double sqrt(double a)
{
	if (a <= 0)
		return 0;
	else
	{
		double c;
		c = 1;
		while (c*c != a)
		{
			c = 1. / 2 * (c + a / c);
		}
		return c;
	}
}
