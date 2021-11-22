/*
2. Receive n strings from the input and sort them ascendingly.
Ex:
 _________________________________________
| Input: one two three                    |
| Output: one three two                   |
|_________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex2(int n, char *str[]){
	//Your codes here
	//Your codes here
	int arr[n];

	for (int i = 0; i < n; i++)
		arr[i] = i;

	for (int i = 0; i < n; i++)
		for (int j = i + 1; j < n; j++)
		{
			int a = 0;

			while (str[arr[i]][a] != '\0')
			{
				if (str[arr[i]][a] > str[arr[j]][a])
				{
					int temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
					break;
				}
				else if (str[arr[i]][a] == str[arr[j]][a])
					a++;
				else
					break;
			}
		}

	for (int i = 0; i < n; i++)
		printf("%s ", str[arr[i]]);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	char *testcase[argc];
	int i;
	for(i=0; i<argc; i++){
		testcase[i] = argv[i+1];
	}
	
	Ex2(argc, testcase);
	
	return 0;
}
