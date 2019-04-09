#include <stdio.h>

void ShellSort(int n, int mass[])
{
	int i, j, step;
	int tmp;
for (step = n / 2; step > 0; step /= 2)
for (i = step; i < n; i++)
{
	tmp = mass[i];
		for (j = i; j >= step; j -= step)
			{
				if (tmp > mass[j - step])
				mass[j] = mass[j - step];
			else
	break;
}
	mass[j] = tmp;
	}
}

	int main(){
		int n;
			printf("Vvedite kol-vo elementov n: ");
			scanf("%d", &n);
		int a[n];
		int i, j;
			printf("Vvedite element: ");
	for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
int a1[n - 1];
int n2 = 0;
int n1 = n;
	for(i = 0; i < n1 - 1; i++){
		for(j = i + 1; j < n1; j++){
			if(a[i] == a[j]){
				a[j] = a[n1 - 1];
				n1--;
				a1[n2] = a[i];
				n2++;
			}
		}
	}

ShellSort(n1, a);
ShellSort(n2, a1);

for(i = 0; i < n2; i++){
	a[n1 + i] = a1[i];
}
	printf("Vivod: ");
for(i = 0; i < n; i++){

	printf("%d ", a[i]);
	}	
return 0;
}
