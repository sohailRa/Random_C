#include <stdio.h>

#define MAXBUF 128

int getlines(char line[], int size);

int main(void){
	
	int length;
	char buffer[MAXBUF];

	while(1){
		length = getlines(buffer, MAXBUF);
		if(length==0)
			break;
		printf("length = %d, line = %s\n", length, buffer);
	}
}

int getlines(char line[], int size){
	int len;
	char c;

	len = 0;
	printf("Enter a string (Enter to exit): ");
	while(((c=getchar()) != '\n') && len<size-1)
		line[len++] = c;
	line[len] = '\0';
	return len;
}