//
//  rle.c
//  rle
//
//  Created by y.baykov on 27/09/2019.
//

#include <string.h>
#include <stdlib.h>
#include "rle.h"

void rle(const char * const string, char *result) {
	size_t currentResultPosition = 0;
	unsigned int nRepeatings = 0;
	size_t currentCharIndex = 0;
	unsigned long length = strlen(string);
	
	for (size_t i = 0; i <= length; ++i) {
		if (string[currentCharIndex] == string[i]) {
			nRepeatings++;
		} else {
			result[currentResultPosition++] = string[currentCharIndex];
			
			currentCharIndex = i;
			nRepeatings = 0;
		}
	}
	
	result[currentResultPosition] = '\0';
}
