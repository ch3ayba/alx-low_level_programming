#include "main.h"

/**
 * check_error - error
 *
 * @f: ffff
 * @g: gg
 * @argv: vector
 *
 * Return: void
 */
void check_error(int f, int g, char *argv[])
{
	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (g == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}
/**
 * main - entry point
 *
 * @argc: counter
 * @argv: vector
 *
 * Return: value
 */
int main(int argc, char *argv[])
{
	int f, g;
	int error;
	ssize_t n = 1024;
	ssize_t m;
	char c[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp f g");
		exit(97);
	}
	f = open(argv[1], O_RDONLY);
	g = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_error(f, g, argv);

	while (n == 1024)
	{
		n = read(f, c, 1024);
		if (n == -1)
			check_error(-1, 0, argv);
		m = write(f, c, n);
		if (m == -1)
			check_error(0, -1, argv);
	}
	error = close(f);
	if (error == -1)
		{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
	error = close(g);
	if (error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
		exit(100);
	}
	return (0);
}
