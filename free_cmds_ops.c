#include "main.h"

void free_cmd_ops(cmd_ops *cls)
{
	free_strings(cls->cmd_tokens);
	free_strings(cls->ops_tokens);
	free(cls);
}
