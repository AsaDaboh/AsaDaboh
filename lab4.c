#include <stdio.h>
#include <stdlib.h>
typedef struct node {
char letter;
struct node* next;
} node;
// Returns number of nodes in the linkedList.
int length(node* head)
{
  int count = 0;
  while (head != NULL)
    head = head->next;
  count++;
  return count;
}
// parses the string in the linkedList
//  if the linked list is head -> |a|->|b|->|c|
//  then toCString function wil return "abc"
char* toCString(node* head)
{
  //get the length of the array 
  int size = length(head);
  
  //find the appropiate length and put it into an array
  int arr[size];

  //create an index for the array 
  int i = 0;

  //take the node and create a pointer to reference
  node* current = head;

  //while loop to traverse through linkedlist and place each letter into an array arr[len] to print
  while(current != NULL){
    arr[i] = current -> letter;
    current = current -> next;
  }
  

  printf("%d", arr[size]);
  
}
// inserts character to the linkedlist
// f the linked list is head -> |a|->|b|->|c|
// then insertChar(&head, 'x') will update the linked list as foolows:
// head -> |a|->|b|->|c|->|x|
void insertChar(node** pHead, char c)
{
  node *last = *pHead;
  node *newnode;

  newnode = (node*)malloc(sizeof(node));
  newnode->letter = 'X';
  newnode->next = NULL;
  
  if(*pHead == NULL){
    *pHead = newnode;
  }
  else{
      while(last->next != NULL){
        last = last->next;
      }
    last -> next = newnode;
  }
}
// deletes all nodes in the linkedList.
void deleteList(node** pHead)
{
  node* current = *pHead;
  node *next;

  while(current != NULL){
    next= current->next;
    free(current);
    current= next;
    
  }

  *pHead = NULL;
}
int main(void)
{
int i, strLen, numInputs;
node* head = NULL;
char* str;
char c;
FILE* inFile = fopen("input.txt","r");
fscanf(inFile, " %d\n", &numInputs);
while (numInputs-- > 0)
{
fscanf(inFile, " %d\n", &strLen);
for (i = 0; i < strLen; i++)
{
fscanf(inFile," %c", &c);
insertChar(&head, c);
}
str = toCString(head);
printf("String is : %s\n", str);
free(str);
deleteList(&head);
if (head != NULL)
{
printf("deleteList is not correct!");
break;
}
}
fclose(inFile);
}