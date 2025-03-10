int	ft_in_range(int value, int min, int max)
{
	return (value >= min && value <= max);
}

int	ft_in_rangef(double value, double min, double max)
{
	double	epsilon;

	epsilon = 1e-6;
	return (value >= min - epsilon && value <= max + epsilon);
}
