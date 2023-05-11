#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

char *ex_cmd(string val)
{
    string cmd;
    cmd = "sed  %d";

    char cmdbuf[256] = {0};
    int len = 0;
    int size_by_byte = atoi(val.c_str())*1;
    //len = snprintf(cmdbuf+len, sizeof (cmdbuf)-len, cmd.c_str(), size_by_byte);
    sprintf(cmdbuf, cmd.c_str(), size_by_byte);

    //return strdup(cmdbuf);
    cout << cmdbuf << endl;
    return cmdbuf;
}

int main() 
{
  char *cmd;
  string value = "123";
  cmd = ex_cmd(value);
  
  cout << cmd << endl;
  return 0;
}

