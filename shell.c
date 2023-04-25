#include "shell.h"
/**
 * main - Entry point
 * Description: Here is the shell implementation
 * Return: Always returns (0)
 */
int main()
{
char command[1024];
while (1)
{
prompt_cmd(command);
execute_cmd(command);
}
return (0);
}
