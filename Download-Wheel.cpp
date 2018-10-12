/*
Author: Suri Bhasker Sri Harsha
	MS- Research Scholar
	Computer Science Department
	IIT Tirupati.
	
Notice: You are free to use the code as you like.Enjoy.
*/

/*
Theory behind this is very simple. We are using the "\r" feature to return the cursor back to the initial position and we are 
re-writing everything. That's it.
*/
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
