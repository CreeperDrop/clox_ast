#include "clox.h"
void runPrompt()
{

	char line[100];

	while(1) {

		printf("%s\n", WELCOME);
		printf("%s", PROMPT);
		read_line(line);

		if(line[0] == '\0')
			continue;
		
		printf("%s\n", line);
	}

	return;
}

void runFile(char* file)
{
	printf("Will run file: %s\n", file);
	return;
}

