#include "../include/minitalk.h"

void	handle_signal(int sig)
{
	static char	buffer[9] = {0};
	static int	bit_count = 0;
	static pid_t	client_pid = 0;

	if (sig == SIGUSR1)
		buffer[bit_count++] = '1';
	else if (sig == SIGUSR2)
		buffer[bit_count++] = '0';
	if (bit_count == 8)
	{
		if (client_pid == 0)
			client_pid = ft_atoi(buffer);
		else
		{
			if (buffer[0] == '\0')
				ft_printf("Message received from client %d\n", client_pid);
			else
				ft_printf("%c", ft_atoi_base(buffer, 2));
		}
		ft_memset(buffer, 0, 9);
		bit_count = 0;
	}
}

int	main(void)
{
	struct sigaction	sa;

	ft_printf("Server PID: %d\n", getpid());
	sa.sa_flags = 0;
	sa.sa_handler = &handle_signal;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	while (1)
		pause();
	return (0);
}

