#include "stack.h"
#include<stdlib.h>
#include<stdbool.h>



_Bool isFull(stackType s)
{
    if(s.top==s.max_size-1) 
    {
        return true;
    }
    else
    {
        return false;
    }
}

_Bool isEmpty(stackType s)
{
    if(s.top==-1)
    {
        return true;
    }
    else
    {
        return false;
    }
}


_Bool push(eleType ele, stackType *s1)
{
    s1->top +=1;
    s1-> stack_array[s1->top] = ele;
    return true;
}

eleType pop(stackType *s1)
{
    eleType popped_ele = s1->stack_array[s1->top];
    s1->top=s1->top-1;
    return popped_ele;
}


eleType peek(stackType *s1)
{
    eleType peeked_ele = s1->stack_array[s1->top];
    return peeked_ele;

}

stackType createStack(int size)
{
    stackType s1;
    s1.top=-1;
    s1.max_size=size;
    //allocate memory for array
    s1.stack_array=(eleType *)malloc(size * sizeof(eleType));
    if(s1.stack_array==NULL)
    {
        exit(1);
    }
    return s1;
}

void destroyStack(stackType *s1)
{
    free(s1->stack_array);
    s1->top = -1;
    s1->max_size=0;
}
 
eleType displayStack(stackType *s1)
{
    int i;
    while (i=s1->top)
    {
        eleType display = s1->stack_array[i];
        return display;
    }
}
