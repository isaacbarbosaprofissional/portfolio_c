/*MDC de dois numeros*/
//By Isaac barbosa
#include <stdio.h>

int main()
{
	int n1,n2;
	printf("Digite dois numeros:\n");
	scanf("%d\n%d",&n1,&n2);
	while(n1!=n2)
	{
		if(n1>n2)
		{
			n1=n1-n2;
		}
		else
		{
			n2=n2-n1;
		}

	}
	printf("O MDC de dois numeros C): %d",n1);

	return 0;
}
