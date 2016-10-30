#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(void)
{
	ft_putstr("Shaga c'est une pétasse, eh ouai maggle, j'ai beau être une femme ça ne m'empêche pas de t'insulter pour t'exprimer mon affection");
	return(0);
}
