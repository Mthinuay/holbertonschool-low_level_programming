/**
 * _is_prime_helper - checks if n is divisible by i
 * @n: number to check
 * @i: divisor candidate
 *
 * Return: 1 if prime, 0 if not
 */
int _is_prime_helper(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (_is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - returns 1 if n is prime, else 0
 * @n: number to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_is_prime_helper(n, 2));
}
