#include "ScoreTools.h"

#include <algorithm>

int MariaTools::ClampScore(int score)
{
	return std::min(score, 100);
}
int MariaTools::SumaNumeros(int a, int b)
{
	return ClampScore(a + b);
}