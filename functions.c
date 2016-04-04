#include "functions.h"

/**
 * Project Specific Functions
 */
int sum(int a, int b)
{
	return a + b;
}

/**
 * String Functions
 */

/******************************************************************************
 * name: concatString
 * description: concatenates two strings 
 * params:
 * 		str1 	left side of concatenated string
 * 		str2	right side of concatenated string	
 * return:
 *		char* 	concatenated string	
 ******************************************************************************/
char* concatString(char* str1, char* str2){
	int len1;
	int len2;
	len1 = stringLength(str1);
	len2 = stringLength(str2);

	char* concat;
	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	int i;
	for(i = 0; i < len1; i++){
		concat[i] = str1[i];
	}
	for(i = len1; i < (len1 + len2); i++){
		concat[i] = str2[i - len1];
	}
	concat[len1 + len2 + 1] = '\0';
	return concat;
}

/******************************************************************************
 * name: getSubString 
 * description: get a substring from a char*
 * params:
 * 		begin	beginning index of substring
 * 		end		ending index of substring	
 * return:
 *		char*	subString of larger string	
 ******************************************************************************/
char* getSubString(char* line, int begin, int end){
	int length;
	length = end - begin + 1;
	char* substr;
	substr = malloc(sizeof(char) * (length + 1));
	int i;
	for(i = 0; i < length; i++){
		substr[i] = line[begin + i];
	}
	substr[length] = '\0';
	return substr;
}

/******************************************************************************
 * name: 
 * description: 
 * params:
 * 		
 * return:
 *		
 ******************************************************************************/
char* stringCopy(char* source)
{
	char* dest;
	int sourceLen;
	sourceLen = stringLength(source);

	dest = malloc(sizeof(char) * (sourceLen + 1));

	int i;
	for(i = 0; i < sourceLen; i++)
	{
		dest[i] = source[i];
	}
	dest[sourceLen] = '\0';

	return dest;
}

/******************************************************************************
 * name: 
 * description: 
 * params:
 * 		
 * return:
 *		
 ******************************************************************************/
int stringLength(char* source)
{
	char c;
	int len;
	len = 0;
	c = source[0];

	while(c != '\0')
	{
		len++;
		c = source[len];
	}

	return len;
}


