#include "generator.h"

// Function which check whether the user's 'requested_amount' of words is valid
bool	ft_check_requested_amount(int max_amount, int requested_amount)
{
	if (requested_amount > max_amount || requested_amount <= 0)
	{
		printf("Requested amount of words is not valid!\n");
		return (false);
	}
	return (true);
}