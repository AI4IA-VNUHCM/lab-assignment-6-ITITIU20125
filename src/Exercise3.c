/*
3. Receive a string, find the shortest and longest word in that string.
Ex:
 __________________________________________________________
| Input: "This is a string with shortest and longest word" |
| Output: Shortest word: a                                 |
|         Longest word: shortest                           |
|__________________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex3(char *str){
	//Your codes here
	int length = strlen(str);
	char longstr[1000], shortstr[1000];
	int i = 0, count_long = 0, count_short = 0, longest = 0, shortest = 1000;
	int idx_long, idx_short;
	for (i = 0; i < length; i++)
	{
		if (str[i] != ' ')
		{
			count_short++;
			count_long++;
		}
		else
		{
			if (count_short < shortest)
			{
				shortest = count_short;
				idx_short = i - shortest;
			}
			if (count_long > longest)
			{
				longest = count_long;
				idx_long = i - longest;
			}
			count_short = 0;
			count_long = 0;
		}
	}
	if (count_short < shortest)
	{
		shortest = count_short;
		idx_short = i - shortest;
	}
	if (count_long > longest)
	{
		longest = count_long;
		idx_long = i - longest;
	}

	int j = 0;
	for (int i = idx_long; i < (idx_long + longest); i++)
	{
		longstr[j] = str[i];
		j++;
	}

	int k = 0;
	for (int i = idx_short; i < (idx_short + shortest); i++)
	{
		shortstr[k] = str[i];
		k++;
	}
	shortstr[k] = '\0';
	longstr[j] = '\0';

	printf("Shortest word: %s\n", shortstr);
	printf("Longest word: %s", longstr);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];
	
	Ex3(testcase);
	
	return 0;
}
