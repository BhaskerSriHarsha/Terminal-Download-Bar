#include<iostream>
#include<stdio.h>
#include<unistd.h>

using namespace std;

int main()
{
  cout<<endl;
  cout<<endl;

  cout<<"Downloading.."<<endl;


  for(int i=0;i<10;i++)
  {
    sleep(1);
    printf("#");
    fflush(stdout);
  }

  cout<<endl<<"Download complete"<<endl;

}
