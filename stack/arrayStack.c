#include "arrayStack.h"

void initStack(STACK_S* stack)
{
    memset(stack, 0, sizeof(STACK_S));
}

bool isEmpty(STACK_S* stack)
{
    return stack->num == 0;
}

size_type size(STACK_S* stack)
{
    return stack->num;
}

/* 调用者需保证栈未满 */
void push(STACK_S* stack, item_type item)
{
    stack->items[stack->num] = item;
    stack->num++;
    return;
}

/* 调用者需保证栈非空 */
item_type pop(STACK_S* stack)
{
    stack->num--;
    return stack->items[stack->num];
}
