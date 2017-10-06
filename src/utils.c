#include "utils.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
void mysh_parse_command(const char* command,
                        int *argc, char*** argv)

{
	*argc = 0;
	*argv = (char**)malloc(sizeof(char*)*10);
	for(int i=0; i<10; i++)
	{
		(*argv)[i] = (char*)malloc(sizeof(char)*10);
	}

	char copy[8096];
	strcpy(copy, command);

		char* result;
		result = strtok(copy," \t\n");
		while(result!=NULL)
		{
			strcpy((*argv)[*argc],result);

			*argc = *argc+1;
			result = strtok(NULL," \t\n");
		}

	if((*argc)==0)
	{
		strcpy((*argv)[0], "");
		(*argc) = 1;
	}

	/*

	int j;
	for(j=0; j<10; j++)
	{
		free((*argv)[j]);
	}

	free(*argv);
        */
		
		
	
}
