#include "clox.h"
void runPrompt()
{

	char line[100];
	printf("%s\n", WELCOME);

	while(1) {

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

