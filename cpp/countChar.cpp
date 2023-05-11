#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int checkMinCase(int minCase, string intStr)
{
    unsigned int i;
    int count = 0;
    for(i = 0; i < intStr.size(); i++)
        //if(isupper(intStr[i]))
        if(islower(intStr[i])) //isdigit, isalpha, isupper
            count ++;

    if(count<minCase)
        return 0;
    else
        return 1;
}


int main() 
{
  string intStr = "nhvq123";
  int min = 1;
  
  if (checkMinCase(min, intStr))
  {
    cout << "<";
  }
  else
  {
    cout << ">=";
  }
  return 0;
}

