#include<stdio.h>
#include<iostream>
#include<unistd.h>

using namespace std;

int main()

{
	for(int i=0;i<10;i++)
	{

        sleep(1);
	printf("Downloading \\");
	fflush(stdout);


	sleep(1);
	printf("\r");
	printf("Downloading |");
	printf("\r");
	fflush(stdout);

	sleep(1);
	printf("Downloading /");
	printf("\r");
	fflush(stdout);

	sleep(1);
	printf("Downloading -");
	printf("\r");
	fflush(stdout);

	}
}
