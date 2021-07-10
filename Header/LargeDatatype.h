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
char ones[20][12]={"\0","One","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten",
                   "Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen",
                   "Eighteen","Nineteen"};
char tens[10][10]={"\0","\0","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
char Indian[20][10]={"\0","\0","\0","Hundred","Thousand","\0","Lakh","\0","Crore","\0","Arab","\0",
                        "Kharab","\0","Neel","\0","Padma","\0","Shank","\0"};
char International[22][20]={"\0","\0","\0","Hundred","Thousand","\0","Hundred","Million",
                            "\0","Hundred","Billion","\0","Hundred","Trillion","\0",
                            "Hundred","Quadrillion","\0","Hundred","Quintillion","\0","Hundred"};
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
void INITIALIZE(long long int , Node*, Node**, short int );

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
void numtowords(Node*,char sys[20],int,int);
/*
Function under <LargeDatatype.h> to print any number in words.
Function defination you must include
void inwords(Node* Start)
*/
void inWords(Node*);

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
void INITIALIZE(long long int num, Node *newptr, Node **start, short int n) 
{
    Str = *start;  //Value of start is stored in Str 
    // This loop seperate the digits of the number from one's place and so on and 
    // put them in Linked List (Insertion from the begining).
    if(num==0)
    {
        newptr = Create_New_Node((num % 10) + '0');
        Insert_Beg(newptr); 
    }
    while (num != 0) 
    {
        newptr = Create_New_Node((num % 10) + '0');  //creates a node using the digits
        // The stored address is to be linked with the previous Node present in the list
        Insert_Beg(newptr); 
        num /= 10;    //Then num is divided by 10
    }
    *start = Str;  //Then the modified Str value is stored back to start
    
    //Display the number from the number.
    printf("Number #%d :",n);
    Display(Str);
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
        if(cursor == S1)
           printf("yes"); 
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

void numtowords(Node *n,char sys[20],int size,int choice)
{   
    Node *n1, *n2;
    if(size==2 && (n->info-'0')==1)
    {
        n1=n->nextadr;
        printf(" %s",ones[10+(n1->info - '0')]);
    }
    else if(size==2)
    {
        n1=n->nextadr;
        printf(" %s",tens[n->info - '0']);
        printf(" %s",ones[n1->info-'0']);
    }
    else if(choice==1&&(size==5||size==7||size==9||size==11||size==13||size==15||size==17||size==19))
    {
        n1=n->nextadr;
        if((n->info-'0')==1)
            printf(" %s",ones[10+(n1->info - '0')]);
        else if((n->info-'0')>1)    
            printf(" %s",tens[n->info - '0']);
    }
    else if(choice==2 && (size==5||size==8||size==11||size==14))
    {
        n1=n->nextadr;
        if((n->info-'0')==1)
            printf(" %s",ones[10+(n1->info - '0')]);
        else if((n->info-'0')>1)    
            printf(" %s",tens[n->info - '0']);
    }
    else
    {   printf(" %s",ones[n->info-'0']); }
    
    if(n->info!='0')
    {   
        printf(" %s",sys);
        n1=n->nextadr; n2 =n1->nextadr;
        if(choice==1 && (n1->info=='0'))
           printf(" %s",Indian[size-1]);
        if(choice==2)
        {   
            if((size==5||size==8||size==11||size==14||size==17||size==20) && n1->info=='0')
                printf(" %s",International[size-1]); 
            else if((size>=6 && size%3==0)&&(n1->info=='0' || (n1->info=='0'&&n2->info=='0')) )
                printf(" %s",International[size-2]);
        }        
    }        
}

void inWords(Node *S)
{
    Node *tmp= S; int org, size = getSize(S);
    org=size;
    printf("\033[0;32m");printf("\nIndian System \n");printf("\033[0m");
    if(size==1)  
    {
        if(S->info=='0') printf(" Zero");
        else  printf("%s",ones[(S->info-'0')]);
    }
    else{    
    while(size!=1)
    {
        numtowords(S,Indian[size],size,1);
        if((S->info-'0'>=1 && S->info-'0'<=9)&&(size==5||size==7||size==9||size==11||size==13||size==15||size==17||size==19))
        {   
            if((S->info-'0')>1) 
            {  
                S=S->nextadr; size--; numtowords(S,Indian[size],size,1);     
            }
            else  
            {
                S=S->nextadr; size--; printf(" %s",Indian[size]);
            }      
        }   
        S = S->nextadr;  size--;   
    }
    }
    size=org; S = tmp;
    printf("\033[0;32m");printf("\nInternational System\n");printf("\033[0m");
    if(size==1)  
    { 
        if(S->info=='0') printf(" Zero");
        else printf("%s",ones[(S->info-'0')]);    
    }
    else{
    while(size!=1)
    {
        numtowords(S,International[size],size,2);
        if((S->info-'0'>=1 && S->info-'0'<=9) && (size==5||size==8||size==11||size==14||size==17||size==20))
        {    
            if(S->info-'0'>1) 
            { S=S->nextadr; size--; numtowords(S,International[size],size,2);  }   
            else
            { S=S->nextadr; size--; printf(" %s",International[size]); }
        }   
        S = S->nextadr;   size--;   
    }
    }
}