#include "clox.h"

int main(int argc, char* argv[])
{
	
	switch(argc){
		case 1:
		runPrompt();
		
		break;
		
		case 2:
		runFile(argv[1]);
		break;

		default:
		printf("Provide 1 file to run or none\n");
		break;
	}

	return 0;
}
