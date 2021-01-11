#include <cmath>
int centuryFromYear(int year)
{
	return std::round((year - 1) / 100) + 1;
}