#include <stdio.h>
#include <string.h>

typedef struct IDC {
	char *name;       /*Creates a structure for the international dialing codes to store the name of the country it refers to*/
} IDC;

void formatIDC(char a[])
{
	char *a2 = a;
	for(a2; *a2 != '\0';a2++)	
	{				/*This for loop takes a char array pointer and removes any newline characters for the if-else block*/
		if(*a2 == '\n')
		{
			*a2 = 0;
		}
	}
}

int main(){
	char a[5] = {0};		/*Initializes the user input array for the ID code*/
	char* b = a;			/*Creates a pointer to the user input IDC to pass to the format function*/
        struct IDC a93;
	a93.name = "Afghanistan";
        struct IDC a355;
	a355.name = "Albania";
        struct IDC a213; 
	a213.name = "Algeria";
        struct IDC a1_648;
	a1_648.name = "American Samoa";
        struct IDC a376;
	a376.name = "Andorra";
        struct IDC a244; 
	a244.name = "Angola";
        struct IDC a1_264; 
	a1_264.name = "Anguilla";
        IDC a672; 
	a672.name = "Antarctica";
        IDC a1; 
	a1.name = "Canada/United States";
        IDC a238; 
	a238.name = "Cape Verde";		/*This block initializes all the recognized IDCs and their corresponding countries*/
        IDC a253;
	a253.name = "Djibouti";
        IDC a241; 
	a241.name = "Gabon";
        IDC a502; 
	a502.name = "Guatemala";
        IDC a509;
	a509.name = "Haiti";
        IDC a39; 
	a39.name = "Italy";
        IDC a81; 
	a81.name = "Japan";
        IDC a254; 
	a254.name = "Kenya";
        IDC a218; 
	a218.name = "Libya";
        IDC a44; 
	a44.name = "United Kingdom";
        IDC a967; 
	a967.name = "Yemen";

	printf("Please enter a country's international dialing code!\n");
	fgets(a, sizeof(a), stdin);
	formatIDC(b);
	if(strcmp(a, "967") == 0) printf("The IDC you entered corresponds to %s\n", a967.name);
	else if(strcmp(a, "93") == 0) printf("The IDC you entered corresponds to %s\n", a93.name);
	else if(strcmp(a, "355") == 0) printf("The IDC you entered corresponds to %s\n", a355.name);
        else if(strcmp(a, "213") == 0) printf("The IDC you entered corresponds to %s\n", a213.name);
        else if(strcmp(a, "1-648") == 0) printf("The IDC you entered corresponds to %s\n", a1_648.name);
        else if(strcmp(a, "376") == 0) printf("The IDC you entered corresponds to %s\n", a376.name);
        else if(strcmp(a, "244") == 0) printf("The IDC you entered corresponds to %s\n", a244.name);
        else if(strcmp(a, "1-264") == 0) printf("The IDC you entered corresponds to %s\n", a1_264.name);
        else if(strcmp(a, "672") == 0) printf("The IDC you entered corresponds to %s\n", a672.name);
        else if(strcmp(a, "1") == 0) printf("The IDC you entered corresponds to %s\n", a1.name);
        else if(strcmp(a, "238") == 0) printf("The IDC you entered corresponds to %s\n", a238.name);
        else if(strcmp(a, "253") == 0) printf("The IDC you entered corresponds to %s\n", a253.name);
        else if(strcmp(a, "241") == 0) printf("The IDC you entered corresponds to %s\n", a241.name);	/*This takes the user input IDC and checks*/
        else if(strcmp(a, "502") == 0) printf("The IDC you entered corresponds to %s\n", a502.name);	/*to see if theres a match, if there is,  */
        else if(strcmp(a, "509") == 0) printf("The IDC you entered corresponds to %s\n", a509.name);	/*displays the country. Otherwise provides*/
        else if(strcmp(a, "39") == 0) printf("The IDC you entered corresponds to %s\n", a39.name);	/*a message stating it couldnt be found.  */
        else if(strcmp(a, "81") == 0) printf("The IDC you entered corresponds to %s\n", a81.name);
        else if(strcmp(a, "254") == 0) printf("The IDC you entered corresponds to %s\n", a254.name);
        else if(strcmp(a, "218") == 0) printf("The IDC you entered corresponds to %s\n", a218.name);
        else if(strcmp(a, "44") == 0) printf("The IDC you entered corresponds to %s\n", a44.name);
	else printf("I'm sorry, I don't have record of this IDC.\n");
	return 0;
}
