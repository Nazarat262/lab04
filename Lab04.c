#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

///task46

void task46() {
	int i;
	for (i = 10; i <= 50; i++) {
		printf("%d\n", i * i);
	}
	double a, b;
	printf("input:a\n");
	scanf("%lf", &a);
	for (; a <= 50; a++) {
		printf("%g\n", a * a);


	}


	printf("input:a\n");
	scanf("%lf", &a);
	printf("input:b\n");
	scanf("%lf", &b);
	for (; b >= -10; a++, b--) {
		printf("%g\n", a * b);

	}
	printf("input:a\n");
	scanf("%lf", &a);
	printf("input:b\n");
	scanf("%lf", &b);
	for (; b >= a; a++, b--) {
		printf("%g\n", a * b);
	}

}



////task53
int task53() {
       int p = 4, i = 2, sum = 0;

		while (i <= 10) {
			sum += p;
			p *= 2;
			i++;
			
		}
		printf("Sum = %d\n", sum);
		return 0;
	
}

int task72() {
	int n, i, f=1, sum=0;
	printf("input:n\n");
	scanf("%d", &n);
	if (n <= 1 || n > 10) {
		printf("n must be from 1 to 10\n");
			return 0;
	}
	for (i = 1; i <= n; i++) {
		f *= i;
		sum += f;
	}
printf("sum=%d\n", sum);

	return 0;
}

int task109() {
	int x,sum, pn=1;
	printf("input:x\n");
	scanf("%d", &x);
		if (x < 0 || x>15) {
			printf("x must be from 0 to 15\n");
			return 0;
		}
		sum=x* x + x + 17;

		if (sum < 2) {
			pn = 0;
		}
		for (int i = 2;i * i <= sum; i++) {
			if (sum % i == 0)
				pn = 0;
		}
		if (pn)
			printf("prime number\n");
		else
			printf("not prime number\n");
		return 0;
}
int task108() {
	int a, b, c;
	for (a = 0; a <= 14; a++) {
		for (b = 0;b <= 33;b++) {
			c = 100 - a - b;
			if (7000 * a + 3000 * b + 1000 * c == 100000) {
				printf("bulls = %d, cows = %d, calves = %d\n", a, b, c);

			}

		}
		
	    }
	return 0;
}



int task170() {
	double a[15], n;
	int i;
	printf("Input 15 numbers\n");
	for (i = 0;i < 15;i++)
	scanf("%lf", &a[i]);
	printf("Input:n\n");
	scanf("%lf", &n);
	i = 0;
	while (a[i] < n) {
		printf("%g", a[i]);
		i++;
	}
	return 0;
}


int task261() {
	double a = 1, b = -2,x, y;
	for (x = -1; x <= 5; x += 0.5) {
		if (2 * a - b * x == 0 || fabs(a - x) == 0) {
		printf("x = %g: no solution\n", x);
		}
		else {
y = 0.3 * a * b * x / (2 * a - b * x)- 3 * sqrt((2 * a - atan(x)) / fabs(a - x));
printf("x = %g, y = %g\n", x, y);}
  }
	return 0;

}

int task205() {
	double x = 2, a, f = 1, sum = 1, sum2=1;
	int n, i;
	printf("Input:n\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		sum *= x;
	for (i = 1; i <= n; i++)
		f *= i;
	for (i = 1; i <= n; i++)
		sum2 *= n;

	a = sum * f / sum2;
	printf("a= %g\n", a);

	return 0;


}

int task214() {
	int n, i;
	double a = 0.5;
	printf("input:n\n");
	scanf("%d", &n);
	printf("a1 = %g\n", a);
	for (i = 2; i <= n; i++) {
		a = 0.5 * cos(a);
		printf("a%d = %g\n", i, a);
	}
	return 0;
}


	int main()
{
	
	task46();
	task53();
	task72();
	task109();
	task108();
	task170();
	task261();
	task205();
	task214();
	

	return 0;
}