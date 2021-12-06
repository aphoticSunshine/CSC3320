#include <stdio.h>

int main(){
	int p1, p2, p3;
        printf("Enter phone number [(999)999-9999]: ");
        scanf("(%d)%d-%d", &p1, &p2, &p3);
        printf("You entered %d-%d-%d \n", p1, p2, p3);

        return 0;
}
