#include "ft_math.h"

int	ft_equalf(double value1, double value2)
{
	return (ft_absf(value1 - value2) <= EPSILON);
}

int	ft_supf(double value1, double value2)
{
	return (value1 >= value2 - EPSILON);
}

int	ft_inff(double value1, double value2)
{
	return (value1 <= value2 + EPSILON);
}

int	ft_in_rangef(double value, double min, double max)
{
	return (ft_supf(value, min) && ft_inff(value, max));
}
