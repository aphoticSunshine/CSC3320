#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[]){
	char passwd[30];
	int check;
	printf("Please enter a password: ");
	fgets(passwd, sizeof(passwd), stdin);
	char *passptr = (char *) passwd;
	check = passwordcheck(passptr);
	if(check == 1) printf("The password is safe!");
	else
	printf("The password is unsafe, please reset! Your score deduction was %d!\n", 100-check);
	return 0;
}


int passwordcheck(char *pass){
	int score = 100;
	int i, size, prev;
	int flagl= -1, flagu = -1, flagn = -1, flagc1 = -1, flagc2 = -1;
	char *temp = pass;
	char *temp2 = temp+1;
	for(temp;*temp != '\0';temp++){
		if(flagl == -1)
		{
			if(*temp>96 && *temp<123)
			{
				flagl=1;
			}
		}
		if(flagu == -1)
		{
			if(*temp>64 && *temp<91)
			{
				flagu=1;
			}
		}
		if(flagn == -1)
		{
			if(*temp>47 && *temp<58)
			{
				flagn = 1;
			}
		}
		if(flagc1 == -1)
		{
			if(*temp == *temp2-1)
			{
				flagc1 = 1;
			}
		}
		if(flagc1 == 1)
		{
			if(*temp == *temp2-1)
			{
				flagc2 = 1;
			}
			if(*temp != *temp2-1)
			{
				flagc1 = -1;
			}
		}	
		temp2++;
	}
	if(flagl==-1){
	score=score-20;
	}
	if(flagu==-1){
	score=score-20;
	}
	if(flagn==-1){
	score=score-20;
	}
	if(flagc2==1){
	score=score-20;
	}
	if(score>=70)
	{
	return 1;
	}
	else
	return score;
}
