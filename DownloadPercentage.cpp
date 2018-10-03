#include<stdio.h>
#include<iostream>
#include<unistd.h>

using namespace std;

int main()
{
  cout<<endl;
  for(int i=0;i<20;i++)
  {
    sleep(1);
    printf("\r");
    printf("Downloading %d%c",i,'%');
    fflush(stdout);
  }
  cout<<endl;
}
