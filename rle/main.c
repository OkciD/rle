//
//  main.c
//  rle
//
//  Created by y.baykov on 27/09/2019.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
	char string[256];
	
	printf("Insert string:\n");
	if (!fgets(string, sizeof(string), stdin)) {
		return 1;
	}
	
	printf("%s\n", string);
	
    return 0;
}
