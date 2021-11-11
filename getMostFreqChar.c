#include <stdio.h>
#include <ctype.h>
int main(int argc, char *argv[]){
	FILE *fp = fopen(argv[1], "r");
	int freq[256] = {0};
	int i, max, ch;
	while((ch = tolower(fgetc(fp))) != EOF){
		if(ch != 32){ 
		freq[ch]++;
		}
	}
	for(i=0;i<256;i++){
		if(freq[i]>freq[max]){
		max = i;
		}
	}
	printf("The most common character is %c and it occurs %d times!\n", max, freq[max]);
return 0;
}
