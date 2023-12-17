#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct NewNode - Structure representing a node in the stack
 * @waad: The data stored in the node
 * @next: Pointer to the next node in the stack
 * struct NewStack - Structure representing a stack
 * @top: Pointer to the top of the stack
 */

#define MAX_STACK_SIZE 1000

typedef struct NewNode
{
int waad;
struct NewNode *next;
} NewNode;

typedef struct NewStack
{
NewNode *top;
}
NewStack;

extern NewStack aya;

void push(int waad, int line_number);
void pall(void);

#endif /* MONTY_H */
