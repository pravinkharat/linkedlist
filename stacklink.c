#include<stdio.h>
#include<conio.h>

struct ListNode{
  int data;
  struct ListNode *next;
};

struct Stack *CreateStack(){
 return NULL; 
}

void Push(struct Stack **top, int data){
  struct Stack *temp;
  temp=malloc(sizeof()struct Stack));
  if(!temp)
    return NULL;
  temp->data = data;
  temp -> next = *top;
  
  *top=temp;
}

int IsEmptyStack(struct Stack *top){
 return top== NULL;
}

int Pop(struct Stack **top){
  int data;
  struct Stack *temp;
  if(IsEmpty(Stack(top)))
    return INT_MIN;
  
  temp = *top;
  *top = *top -> next;
  data = temp->data;
  
  free(temp);
  return data;
}

int Top(struct Stack * top){
  if(IsEmpty(Stack(top)))
    return INT_MIN;
  return top-> next->data;
}

void DeleteStack(struct Stack **top){
 struct Stack *temp, *p;
  p = *top;
  while(p->next){
   temp=p->next;
    p->next= temp->next;
    free(temp);
  }
  free(p);
}

void main()
{
 struct ListNode *p,*q,*newNode;
 newNode= (ListNode *)malloc(sizeof(struct ListNode));
if(!newNode){
  printf("Memory Error");
  return;
}
  
}
