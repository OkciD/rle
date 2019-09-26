//
//  main.c
//  rle
//
//  Created by y.baykov on 27/09/2019.
//

#include <stdio.h>
#include <string.h>
#include "rle.h"

char *trimNewLine(char *string) {
	unsigned long length = strlen(string);
	
	if (string[length - 1] == '\n') {
		string[length - 1] = '\0';
	}
	
	return string;
}

int main(int argc, const char * argv[]) {
	char string[256];
	
	printf("Insert string:\n");
	if (!fgets(string, sizeof(string), stdin)) {
		return 1;
	}
	
	rle(trimNewLine(string));
	
	printf("%s\n", string);
	
    return 0;
}
