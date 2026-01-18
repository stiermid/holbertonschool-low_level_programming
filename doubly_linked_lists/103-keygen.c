#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Keygen for crackme5
 * @argc: Number of arguments
 * @argv: Arguments passed (username)
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int i, sum;
	size_t len;
	char *user;
	char key[7];
	char *lookup = "A-CHRDw87lNS0E9B2TibgpnY70oDsUbhS9StWDYG6t899alvLzablvLzablvLz";

	lookup = "abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	if (argc != 2)
		return (1);

	user = argv[1];
	len = strlen(user);

	sum = 0;
	for (i = 0; i < len; i++)
		sum += user[i];
	key[0] = lookup[(sum ^ 59) & 63];

	for (i = 0; i < len; i++)
		sum *= user[i];
	key[1] = lookup[(sum ^ 79) & 63];

	sum = user[0];
	for (i = 0; i < len; i++)
		if (user[i] > (char)sum)
			sum = user[i];
	srand(sum ^ 14);
	key[2] = lookup[rand() & 63];

	sum = 0;
	for (i = 0; i < len; i++)
		sum += (user[i] * user[i]);
	key[3] = lookup[(sum ^ 239) & 63];

	sum = 0;
	for (i = 0; i < len; i++)
		sum = rand();
	key[4] = lookup[(sum ^ 155) & 63];

	sum = 0;
	for (i = 0; i < (unsigned int)user[0]; i++)
		sum = rand();
	key[5] = lookup[(sum ^ 255) & 63];

	key[6] = '\0';
	printf("%s", key);

	return (0);
}


