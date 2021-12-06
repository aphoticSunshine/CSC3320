#include <stdio.h>
#include <ctype.h>
#include <string.h>
int palCheck(char checkstr[]){		/*This function passes a pointer to an array and returns an integer value*/
        int i, k=0, check;		/*Initializes i and k, the array indecies of tempStr and editStr*/
        char editStr[50] = {0};		/*This array stores only the alphanumeric characters in a string, ommitting punctuation and spaces*/
        char revStr[50] = {0};		/*This array stores the reversed editted string*/
        char tempStr[50] = {0};
	strcpy(tempStr, checkstr);
        for(i=0;i<strlen(tempStr);i++)
	{
                if((tempStr[i] >= 48) && (tempStr[i] != 63) && (tempStr[i] <= 122))
                {
                        editStr[k] = tolower(tempStr[i]);		/*iterates through tempStr and stores only the alphanumerics to editStr*/
                        k++;
                }
        }
        k=k-1;		/*Removes one from the value of k to utilize it in storing the reversed editStr to revStr*/
        for(i=0;i<strlen(editStr);i++)
        {
                revStr[k] = editStr[i];					/*incrememnts through editStr and stores the values starting from the end*/
                k--;							/*into revStr*/
        }
        check = strcmp(editStr, revStr);				/*Compares editStr and revStr and returns the value.*/
        return check;
}

int main()
{
	char palStr[50] = {0};
	char *strStore = palStr;
	char *strStore1[1] = strStore
	int check;
	printf("Please enter a sentence to check if it's a palindrome!\n");
	fgets(palStr, sizeof(palStr), stdin);
	check = palCheck(strStore1[0]);		/*Passes the pointer to the palStr as an argument to the palCheck function*/
	if(check > 0 || check < 0)
	{
	printf("This is not a palindrome.\n");
	}					/*If the check function returns anything beside 0, returns a not palindrome message*/
	else					/*else, returns a palindrome confirmed message.*/
	printf("This is a palindrome!\n");

	return 0;
}
