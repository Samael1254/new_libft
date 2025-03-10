#include "ft_math.h"

int	ft_equalf(double value1, double value2)
{
	double	epsilon;

	epsilon = 1e-6;
	return (ft_absf(value1 - value2) <= epsilon);
}
