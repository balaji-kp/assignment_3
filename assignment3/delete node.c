
#include <stdio.h>
#include <stdlib.h>
struct node{
  int data;
  struct node* next;
};
struct node *head = NULL;
struct node *current = NULL;
void insert(int d){
    struct node *link = (struct node*) malloc(sizeof(struct node));
    link->data = d;
    link->next = NULL;
    if(head==NULL){
        head = link;
        current = head;
    }
    else{
        current->next = link;
        current = link;
    }
}
void display(){
    struct node*temp;
    temp = head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
void delete(int pos){
    struct node*temp;
    int i=1;
    if(pos>lenght()){
        printf("index out of range");
        
    }
    else{
    if(pos==1){
        temp = head;
        head = head->next;
        temp->next = NULL;
        free(temp);
    }
    else{
        struct node*temp;
        struct node*prev;
        temp = head;
        prev = head;
        while(i<pos-1){
            temp = temp->next;
            i++;
        }
        prev = temp->next;
        temp->next = prev->next;
        prev->next= NULL;
        free(prev);
        
    }
    }
    
}
int lenght(){
    struct node*temp;
    temp = head;
    int element=1;
    if(head==NULL){
        return 0;
    }
    else{
    while(temp->next!=NULL){
        element++;
    }
    return element;
    }
}
int main()
{
    int n;
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    display();
    printf("\n");
    delete(3);
    display();
    printf("\n");
    delete(1);
    display();
    printf("\n");
    delete(2);
    display();
    
    
    
    

    return 0;
}
