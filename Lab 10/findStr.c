#include <stdio.h>
#include <string.h>
#include <ctype.h>
char *strcpy(char *strDest, const char *strSrc);

int main(){
	char smallest[20];
	char largest[20];
	char current[20];
	int cmp;
	printf("Enter Word: ");
	fgets(current, sizeof(current), stdin);
	strcpy(smallest, current);
	strcpy(largest, current);
	while(strlen(current) != 5){
		printf("Enter Word: ");
		fgets(current, sizeof(current), stdin);
		int cmp1 = strcmp(current, smallest);
		int cmp2 = strcmp(current, largest);
		if(cmp1 < 0)
			strcpy(smallest, current);
		if(cmp2 > 0)
			strcpy(largest, current);
		else 
		continue;
	}
	printf("Smallest Word: %s", smallest);
	printf("Largest Word: %s", largest);
	return 0;
}



char *strcpy(char *strDest, const char *strSrc){
	char *temp = strDest;
	
	while(*strSrc != '\0'){
	*strDest = *strSrc;
	strDest++;
	strSrc++;
	}
	
	*strDest = '\0';
	return temp;

}
