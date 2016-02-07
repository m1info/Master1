#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc,char *argv[])
{
	
	int k, i, j, p, n=1;
	
	if (argc > 2)
   {
      fprintf(stderr,"%s: invalid number of parameters \n",argv[0]);
      return 1;
   }
	
   else if (argc < 2)
   {
      fprintf(stdout,"%s: please provide k : ",argv[0]);
      fscanf(stdin,"%d",&k);
   }
   else
   {
      k = atoi(argv[1]);
   }
   
   if ((k < 0) || (k >31))
   {
      fprintf(stderr,"%s: invalid value for k, must be greater than 0 and lesser than 32!\n",argv[0]);
      return 1;
   }
   
   n = n<<k;
   
   int a[n];
   
   // Calculate the sum
   for (i = 0; i < n; i++)
   {
	   a[i] = i+1;
	}
	
	p=1;
	
	for (j = 0; j < k; j++)
	{
		for (i = 0; i < n; i+=p)
		{
			a[i] += a[i+p];
		}
		p *=2;
	}
	
	// Display table
	fprintf(stdout, "%s: The table a contains [", argv[0]);
	for (i = 0; i < (n-1); i++)
	{
		fprintf(stdout, "%d, ", a[i]);
	}
	fprintf(stdout, "%d]\n", a[i]);
	
	// Display results
	fprintf(stdout, "%s: The result of the sum is %d\n", argv[0], a[0]);
	
	return 0;
};