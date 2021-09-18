#include<stdbool.h>
#ifndef STACK_H
    #define STACK_H
    typedef int eleType;
    
    //DATA
    struct stack
    {
        eleType *stack_array;
        int max_size;
        int top;
        int value;
    };
    typedef struct stack stackType;

//prototypes
    eleType peek(stackType *s1);
    eleType pop(stackType *s1);
    void destroyStack(stackType*);
    stackType createStack(int size);
    _Bool push(eleType ele, stackType *s1);
    _Bool isFull(stackType s);
    _Bool isEmpty(stackType s);
    eleType displayStack(stackType *s1);
#endif
