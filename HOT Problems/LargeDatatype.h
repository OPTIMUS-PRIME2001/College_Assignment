#include<stdio.h>
#include<stdlib.h>
#include<math.h>

/*New DataType in the form of Linked List 
  Only inputs are taken under calculation 
*/
struct LinkedNode 
{
    char info;
    struct LinkedNode *nextadr;
}*Str, *newptr_a, *newptr_b, *newptr_c, *newptr_plus, *newptr_minus, *save, *ptr;
typedef struct LinkedNode Node;

/*This Function under <LargeDatatype.h> is used to Create a New Node (Node means a new object of structLinkedNode)

Function defination You must include
Node *Create_New_Node(char);
*/
Node *Create_New_Node(char); 

/*
This is the function under <LargeDatatype.h> which is used Link two nodes (current node's address is
 linked or inserted to the previous node's pointers)
Function defination You must include
void Insert_Beg(Node* ); 
*/
void Insert_Beg(Node*);

/* Function under <LargeDatatype.h> to Display the whole Linked List, by passing a starting address
Function defination you must include
void Display(Node*); 
*/
void Display(Node* );

/*Function under <LargeDatatype.h> to swap two address values of pointers, by simple temporary swaping method.
void swapPointer(Node**, Node**);
*/
void swapPointer(Node**, Node**);


/*Function under <LargeDatatype.h> to calculate the size of the Linked List: How many nodes are there in a linked list
int getSize(Node*);
*/
int getSize(Node*);

/*
Funtion under <LargeDatatype.h>
void INITIALIZE(int, Node*, Node**, short int ); 
*/
void INITIALIZE(int , Node*, Node**, short int );

/*Reccurssive Function under <LargeDatatype.h> to Add upto same nodes of the different lists. and 
return start position of result linked list
Node *ADD_Same_Size(Node*, Node*,Node*,int*)
*/
Node *ADD_Same_Size(Node*, Node*, Node*,int*);

/*
Function under <LargeDatatype.h> to Add carry to the remaining part of larger list
Node *ADD_Carry_To_Remaining(Node *H1,Node *cursorPoint,Node *s,int *carry)
*/
Node *ADD_Carry_To_Remaining(Node*,Node*,Node*,int*);

/*
Function under <LargeDatatype> to ADD two linked list datatypes.
Node *ADD(Node *S1, Node *S2)
*/
Node *ADD(Node*, Node*);
/*
Function under <LargeDatatype.h> to copy one linked list to another linked list.
Node *ListCopy(Node** , Node*);
*/
Node *ListCpy(Node** , Node*);

Node *Create_New_Node(char n) 
{
    ptr = (Node*)malloc(sizeof(Node));    //Dynamically Alocated New object of struct LinkedNode
    ptr->info = n;           // Then we initialize the value of new node in its info part. 
    ptr->nextadr = NULL;  // And Initialize 
    return ptr;
}
void Insert_Beg(Node *np) 
{
    if (Str == NULL)
        Str = np;
    else 
    {
        save = Str;
        Str = np;
        np->nextadr = save;
    }
}
void Display(Node *np) 
{
    while (np != NULL) 
    {
        printf("%c",np->info);
        np = np->nextadr;
    }
    printf("\n");
}
void swapPointer(Node **a, Node **b)
{
    Node *temp = *a;   
    *a = *b;
    *b = temp;
}
int getSize(Node *node)
{
    int size = 0;
    while (node != NULL) 
    {
        node = node->nextadr;
        size++;
    }
    //and return the size of the linked list whose starting node address is passed
    return size;
}
void INITIALIZE(int num, Node *newptr, Node **start, short int n) 
{
    Str = *start;  //Value of start is stored in Str 
    // This loop seperate the digits of the number from one's place and so on and 
    // put them in Linked List (Insertion from the begining).
    while (num != 0) 
    {
        newptr = Create_New_Node((num % 10) + '0');  //creates a node using the digits
        // The stored address is to be linked with the previous Node present in the list
        Insert_Beg(newptr); 
        num /= 10;    //Then num is divided by 10
    }
    *start = Str;  //Then the modified Str value is stored back to start
    
    //Display the number from the number.
    //printf("Number #%d :",n);
    //Display(Str);
}
Node *ADD_Same_Size(Node *head1, Node *head2, Node *start,int *carry)
{
    Str = start;
    int sum;
    if(head1 == NULL || head2==NULL)
        return NULL;   //if both list reached to last digit/ one's place digit, then return null
    ADD_Same_Size(head1->nextadr, head2->nextadr, Str,carry);
    sum = (head1->info - '0') + (head2->info - '0') + *carry;
    *carry = sum/10;
    sum = sum%10;
    newptr_plus = Create_New_Node(sum + '0');
    Insert_Beg(newptr_plus);
    return Str;
}
Node *ADD_Carry_To_Remaining(Node *H1,Node *cursorPoint,Node *s,int *carry)
{
    Str = s;
    int sum;
    if(H1!=cursorPoint)
    {
        ADD_Carry_To_Remaining(H1->nextadr,cursorPoint,Str,carry);
        sum = (H1->info - '0') + *carry;
        *carry = sum/10;
        sum = sum%10;
        newptr_plus = Create_New_Node(sum + '0');
        Insert_Beg(newptr_plus);
        return Str;
    }
    return Str;
}
Node *ADD(Node *S1, Node *S2)
{   
    int diff,carry=0, size1 = getSize(S1), size2 = getSize(S2);
    
    Node *start_d = NULL, *cursor = NULL;
    if(S1==NULL)
    {  
        start_d = S2; 
    } 
    else if(S2==NULL)
    {  
        start_d = S1; 
    } 
    else
    {
        diff =  abs(size1-size2);
        if(size1<size2)
           swapPointer(&S1, &S2);

        for(cursor = S1; diff-- ; cursor = cursor->nextadr);
        start_d = ADD_Same_Size(cursor,S2,start_d,&carry);
        if(size1!=size2) 
            start_d = ADD_Carry_To_Remaining(S1,cursor,start_d,&carry);
        //cout<<"\ncarry="<<carry<<"\n";
    }
    if(carry!=0)
    {
        Str = start_d;
        newptr_plus = Create_New_Node(carry + '0');
        Insert_Beg(newptr_plus); 
        start_d = Str;
    }
    return start_d;
}

Node *ListCpy(Node **S1, Node *S2)
{
    *S1 = S2;
    return *S1;
}