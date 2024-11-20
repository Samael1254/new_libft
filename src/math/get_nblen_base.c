int	get_intlen_base(int nb, int base_len)
{
	int	len;

	if (nb == -2147483648)
		return (11);
	if (nb < 0)
	{
		len = 2;
		nb *= -1;
	}
	else
		len = 1;
	while (nb >= base_len)
	{
		nb = nb / base_len;
		len++;
	}
	return (len);
}

int	get_ullen_base(unsigned long nb, int base_len)
{
	int	len;

	len = 1;
	while (nb >= (unsigned int)base_len)
	{
		nb = nb / base_len;
		len++;
	}
	return (len);
}
