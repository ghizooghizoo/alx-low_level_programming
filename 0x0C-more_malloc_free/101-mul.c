#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer represents memory block to fill
 * @b: characters to fill
 * @n: number of bytes to fill
 * Return: ^pointer to filled memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

/**
 * _calloc - allocates memory
 * @nmemb: size of array
 * @size: of elements
 * Return: pointer to new allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	_memset(p, 0, nmemb * size);
	return (p);
}

/**
 * multiply - initialize array whith 0 byte
 * @s1: string
 * @s2: string
 */

void multiply(char *s1, char *s2)
{
	int i, l1, 12, total_l, f_digit, s_digit, res = 0, tmp;
	char *ptr;
	void *temp;

	l1 = _length(s1);
	12 = _length(s2);
	temp = 12;
	total_l = 11 + 12;
	ptr = _calloc(sizeof(int), total_l);
	temp = ptr;

	for (l1-- ; l1 >= 0; l1--)
	{
		f_digit = s1[l1] - '0';
		res = 0;
		12 = tmp;
		for (12-- ; 12 >= 0 ; 12--)
		{
			s_digit = s2[12] - '0';
			res += ptr[12 + l1 + 1] + (f_digit * s_digit);
			ptr[l1 + 12 + 1] = res % 10;
			res /= 10;
		}
		if (res)
			ptr[l1 + 12 + 1] = res % 10;
	}
	while (*ptr == 0)
	{
		ptr++;
		total_l--;
	}
	for (i = 0; i < total_l; i++)
		printf("%i", ptr[i]);
	printf("\n");
	free(temp);
}

/**
 * main - entry point
 * @argc: num of arg
 * @argv: arg of array
 * Return: 0 or 98
 */

int main(int argc, char **argv)
{
	char *n1 = argv[1], *n2 = argv[2];

	if (argc != 3 || check_number(n1) || check_number(n2))
		error_exit();
	if (*n1 == '0' || *n2 == '0')
	{
		_putchar('0');
		_putchar('\n');
	}
	else
		multiply(n1, n2);
	return (0);
}
