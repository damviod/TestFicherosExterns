#include "ScoreTools.h"

#include <algorithm>

extern int playerScore;
extern int enemyDamage[5];

int MariaTools::ClampScore(int score)
{
	return std::min(score, 100);
}
int MariaTools::SumaNumeros(int a, int b)
{
	return ClampScore(a + b);
}

void MariaTools::AddPlayerScore(int quantity)
{
	playerScore = ClampScore(playerScore + quantity);
}

void MariaTools::DamagePlayer(int indiceEnemy)
{
	playerScore -= enemyDamage[indiceEnemy];
}
