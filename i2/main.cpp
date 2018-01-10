#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Node{
    int info;
    struct Node* next;};
struct Node *first, *last, *current;
void displayList();
int GetNth(int index);
int main()
{
    int nb_elements;
    int i;
    int ind;
    cout<<"Input number of elements: ";
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
    cout<<endl<<"Input the index for the node to be shown: ";
    cin>>ind;
    cout<<endl<<"The data of the node at given index is:"<<GetNth(ind);
}
int GetNth(int index)
{
    int cnt=0;
    current=first;
    while(cnt<index)
    {
        current=current->next;
        cnt++;
    }
return current->info;
}
void displayList()
{
    cout<<endl<<"Displaying the list..."<<endl;
    current = first;
    while(current->next!=NULL)
    {
        cout<<current->info;
        current=current->next;
    }
    cout<<last->info;
}
