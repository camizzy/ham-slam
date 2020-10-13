#include <stdio.h>
#include <stdlib.h>

typedef struct _sn{
    struct  _sn        *next;
    int                nodval;
} StkNode;

//Create pointers to create two different stacks

StkNode *stk1_head = NULL;
//StkNode *stk2_head = NULL;


//Introduce pop and push functions, TOS value

void push (StkNode *stk1_head, int n)
{ 
    StkNode *p=malloc(sizeof(StkNode));
    p->nodval=n;
    p->next= stk1_head;
    stk1_head = p;
}

int pop (int n)
{
    StkNode *p = stk1_head;
    int result=p->nodval;
    stk1_head = p->next;
    free (p);
    return result;
}

int *tos (void)
{ 
    return &(stk1_head->nodval);
}

// Call using &stk1 or &stk2

 /* void Reverse(void)
{
   while (&tos != NULL) {
       pop (StkNode, &stk1);
       push (StkNode, &stk2);
   }
} */

void print_data (StkNode *stk1_head)
{
    while (&stk1_head != NULL){
        int data = pop(stk1_head);
        printf ("%d", data);
    }
}


int main_fxn (int n)
{
    //Allow the user to input characters.
    printf ("Input your characters.\n");
    scanf ("%d", &n);
    printf ("%d", &n);
    // Push read characters onto first stack and print.
    push (stk1_head, &n);
    print_data (stk1_head);
    
    // Call reverse function and print result.
   // Reverse (&stk1);
   // print_data (StkNode *stk2);
    
    
}