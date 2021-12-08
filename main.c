#include "fractol.h"
#include <stdio.h>

int main()
{
	void	*mlx;
	int		i;
	void	*mlx_win;
	void	*mlx_im;
	int		j;

	mlx = mlx_init();
	i = 0;
	mlx_win = mlx_new_window(mlx, 1920, 1080, "HELLO WOLRD");
	mlx_im = mlx_new_image(mlx, 1920, 1080);
	while (i < 25000)
	{
		j = 0;
		while (j < 3)
		{
			mlx_pixel_put(mlx, mlx_win, (int) ((sin(i/100.0) * 19200.0/4) * 100.0/i) + 1920 / 2 + j, (int) ((cos(i/100.0) * 19200.0/4) * 100.0/i) + 1080/2 + j, ((i + 1) * 1000) ^ 0xff000000 + 0x1fffffff);
			mlx_pixel_put(mlx, mlx_win, (int) ((sin(i/100.0) * 19200.0/4) * 100.0/i) + 1920 / 2 - j, (int) ((cos(i/100.0) * 19200.0/4) * 100.0/i) + 1080/2 - j, ((i + 1) * 1000) ^ 0xff000000 + 0x1fffffff);
			j++;
		}
		//mlx_pixel_put(mlx, mlx_win, 1920/2, 10, );
		//mlx_pixel_put(mlx, mlx_win, );
		//mlx_pixel_put(mlx, mlx_win, );
		i++;
	}
	mlx_loop(mlx);
}
