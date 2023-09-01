/**
 * get_endianness - checks the endianness
 *
 * Return: 0 for big endian, 1 for little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *an = (char *)&num;

	
	if (*an)
		return (1);
	else
		return (0);
}
