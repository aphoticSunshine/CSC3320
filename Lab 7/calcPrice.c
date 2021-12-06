#include <stdio.h>

int main(int argc, char *argv[]){
	char d[10];
	int n, q;
	double p;
	printf("Enter item number: ");
	scanf("%d", &n);
	printf("Enter unit price: ");
	scanf("%lf", &p);
	printf("Enter quantity: ");
	scanf("%d", &q);
	printf("Enter the purchase date (mm/dd/yyyy): ");
	scanf("%s",d);
	double sum = q * p;
	printf("Item	 Unit Price	QTY  Purchase Date  Total Amount\n");
	printf("%-9d$%9.2lf\t%-5d%-15s$%11.2lf\n", n, p, q, d, sum);

	return 0; 
}
