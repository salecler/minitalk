#include "../include/minitalk.h"

void	send_message(pid_t server_pid, char *message)
{
	while (*message)
	{
		int i = 7;
		while (i >= 0)
		{
			if ((*message >> i) & 1)
				kill(server_pid, SIGUSR1);
			else
				kill(server_pid, SIGUSR2);
			usleep(100);
			i--;
		}
		message++;
	}
}

int	main(int argc, char **argv)
{
	pid_t	server_pid;

	if (argc != 3)
	{
		ft_printf("Usage: %s <server_pid> <message>\n", argv[0]);
		return (1);
	}
	server_pid = ft_atoi(argv[1]);
	send_message(server_pid, argv[2]);
	return (0);
}

