#include "generator.h"

// Function which checks whether the user's 'requested_amount' of words is valid
bool	check_requested_amount(int requested_amount)
{
	if (requested_amount > MAX_AMOUNT || requested_amount <= 0)
	{
		printf(RED"Requested amount of words is not valid!\n"ESCAPE);
		return (false);
	}
	return (true);
}