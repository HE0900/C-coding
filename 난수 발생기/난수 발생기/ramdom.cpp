#define SEED 17
int MULT = 22373;
int INC = 14349;
int MOD = 665436;

static unsigned int seed = SEED;

unsigned random1()
{
	seed = (MULT * seed + INC) % MOD;

	return seed;

}

double random2()
{
	seed = (MULT * seed + INC) % MOD;
	return seed / (double) MOD;
}