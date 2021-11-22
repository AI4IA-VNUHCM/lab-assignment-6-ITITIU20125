/*
5. Given a string containing just the characters '(', ')', '{', '}', '[' and ']',
determine if the input string is valid. The brackets must close in the correct order.
Ex:
 ________________________
| Input: "{([])}"        |
| Output: Valid!         |
| Input: "{[)}"          |
| Output: Invalid!       |
|________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex5(char *str){
	//Your codes here
	int a = 0;
	int digit = 0;
	while (str[a++] != '\0')
	{
		digit++;
	}
	for (int i = 0; i <= (digit / 2) - 1; i++)
	{
		if (!(str[i] + 1 == str[digit - 1 - i] || str[i] + 2 == str[digit - 1 - i]))
		{
			printf("Invalid!");
			return;
		}
	}
	printf("Valid!");
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ex5(testcase);
	return 0;
}
