#include "shell.h"
/**
 * prompt_cmd - Function name
 * @cmd: Here is the command to manage
 * Description: Here the function to prompt cmd
 */
void prompt_cmd(char *cmd)
{
printf("#cisfun$ ");
scanf("%s", cmd);
}

/**
 * execute_cmd - Function name
 * @cmd: The command to be executed
 * Description: Here is the function for command execution
 * Return: Returns the statut of the execution
 */
int execute_cmd(char *cmd)
{
int status;
status = system(cmd);
if (status == -1)
{
printf("[ERROR] : An error has been encountered\n");
}
return (status);
}
