//
//  rle.c
//  rle
//
//  Created by y.baykov on 27/09/2019.
//

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "rle.h"

void rle(const char * const string, char *result) {
	size_t currentResultPosition = 0;
	unsigned int nRepeatings = 1;
	size_t currentCharIndex = 0;
	unsigned long length = strlen(string);
	char buffer[16];
	
	for (size_t i = 1; i <= length; ++i) {
		if (string[currentCharIndex] == string[i]) {
			nRepeatings++;
		} else {
			result[currentResultPosition++] = string[currentCharIndex];
			
			if (nRepeatings > 1) {
				sprintf(buffer, "%d", nRepeatings);
				strcat(result, buffer);
				currentResultPosition += strlen(buffer);
			}

			currentCharIndex = i;
			nRepeatings = 1;
		}
	}
	
	result[currentResultPosition] = '\0';
}
