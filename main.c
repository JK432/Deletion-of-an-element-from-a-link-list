#include <stdio.h>
#include <stdlib.h>

int main(){
  struct node{
    int data;
    struct node *next;

  };
  int i,choice;
  struct node *newnode,*head,*temp;
  head=0;
  while(i<4){
    newnode=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    if(head==0){
      head=temp=newnode;
      
    }
    else{
      temp->next=newnode;
      temp=newnode;

    }
    i++;
    
    
}
scanf("%d",&choice);
if(choice==1){
  temp=head;
  head=head->next;
  free(temp);
  temp=head;
  while(temp!=0){
    printf("%d ",temp->data);
    temp=temp->next;
  }
}

if(choice==2){
struct node * previous;
temp=head;
while(temp->next!=0){
  previous=temp;
  temp=temp->next;
  

}
if(temp==head){
  head=0;
  free(temp);
}
else{
  previous->next=0;
  free(temp);
}
temp=head;
  while(temp!=0){
    printf("%d ",temp->data);
    temp=temp->next;
  }
}

if(choice==3){
  int pos,i=0;
  scanf("%d",&pos);
  temp=head;
  struct node * previous;
  while(i<pos-1){
    previous=temp;
    temp=temp->next;
    i++;
  }
  
  previous->next=temp->next;
  
  free(temp);
  temp=head;
  while(temp!=0){
    printf("%d ",temp->data);
    temp=temp->next;
  }
}
}