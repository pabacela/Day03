#include<unistd.h>

void  ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
		int c = 2;
		int d = 3;
		int *e, *f;
		e = &c;
		f = &d;
		ft_swap(e,f);
}
