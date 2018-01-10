#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Node{
    int info;
    struct Node* next;};
struct Node *first, *last, *current;
void displayList();
void deleteList();
int main()
{
    int nb_elements;
    int i;
    cout<<Input number of elements: ";
    cin>>nb_elements;
    cout<<"\n";
    first = NULL;
    for(i=0;i<nb_elements;++i)
    {
        current=(struct Node*)malloc(sizeof(struct Node));
        cin>>i;
        cin>>current->info;
        current->next=NULL;
        if(first==NULL)
        {
            first=current;
            last=current;
        }
        else{
            last->next=current;
            last=current;
        }
    }

    displayList();
    deleteList();
    displayList();

}

void deleteList()
{
   current=first;
   struct Node* nextNode=NULL;

   while (current!=NULL)
   {
       nextNode=current->next;
       free(current);
       current=nextNode;
   }
   free(nextNode);
   first=NULL;
    cout<<endl<<"The list has been deleted!";
}
void displayList()
{
    if(first!=NULL)
    {
        cout<<endl<<"Displaying the list..."<<endl;;
        current=first;
        while(current->next!=NULL)
        {
            cout<<current->info;
            current=current->next;
        }
    cout<<last->info);
    }
    else
       cout<<endl<<"The list is NULL!";
}
