#include <stdio.h>
#include <stdlib.h>

int main(){
	//FILE *fd;
	ssize_t readIn;
	char *inputPtr;
	size_t length;
    
    inputPtr = NULL;
    length = 0;
    
    while(1){
        printf("$ ");
        readIn = getline(&inputPtr, &length, stdin);
	if (readIn == -1)
	{
		if(feof(stdin))
		{
			printf("End of input \n");
			break;
		}
		else
		{
			perror("Error reading input");
			break;
		}
	}

        printf("You entered: \n %s", inputPtr);
	break;
    }
    free(inputPtr);
    return (0);
}
