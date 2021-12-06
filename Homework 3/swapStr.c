#include <stdio.h>
#include <string.h>
void swap(char a, char b, char arr1[], char arr2[])	/*a is the value of arr1, b is the value of arr2*/
{
	char *a1 = arr1;
	char *a2 = arr2;	/*This initializes pointers to edit the two user input strings.*/
	a=a+b;
	b=a-b;			/*As characters are integers until interpretted, this exchanges the two integers with each other.*/
	a=a-b;			/*Ie: a=5, b=6, a=a+b=11, b=a-b=11-6=5, a=a-b=11-5=6*/
	*a1 = a;		/*This changes the value the pointer is referring to, hence changing the value of the array.*/
	*a2 = b;
}

int main(){
	int i;
	char arrA[20], arrB[20];
	char *a1 = arrA, *a2 = arrB;	/*Initalizes the two entered strings, pointers to the strings, and an array of pointers to keep them unified*/
	char *aAll[2] = {a1, a2};
	printf("Please enter two alphanumeric strings!\n");
	fgets(arrA, sizeof(arrA), stdin);	
	fgets(arrB, sizeof(arrB), stdin);	/*Asks for the two user input strings*/	
	for(i=0;i<strlen(arrA);i++){
		if((arrA[i] >= 48) && (arrA[i] <= 57))
		{
			swap(arrA[i], arrB[i], aAll[0]+i, aAll[1]+i);	/*This only swaps the numeric characters of the first string with their*/
		}							/*-corresponding spot on the second string. aAll[0]+i will iterate a pointer*/
	}						       	      /*-through the first string by adding bytes to the location, same with aAll[1]*/
	printf("String 1: %s\nString 2: %s\n", arrA, arrB);	/*Returns the two strings following the swap.*/
	return 0;
}
	
