#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Node{
    int info;
    struct Node* next;};
struct Node *first, *last, *current;
void displayList();
int count(int nr);
int main()
{
    int nb_elements;
    int i, number;
    cout<<"Input number of elements: ";
    cin>>nb_elements;
    cout<<"\n";
    first=NULL;
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
    cout<<"Input number to count apparitions: ";
    cin>>number;
    cout<<"The number"<<number<<"occurs in the list"<<count(number)<<"times.";
}
int count(int nr)
{
    int count=0;
    current=first;
    while(current)
    {
        if(current->info==nr)
        count++;
        current=current->next;
    }
    return count;
}
void displayList()
{
    cout<<endl<<"Displaying the list..."<<endl;
    current=first;
    while(current->next!=NULL)
    {
        cout<<current->info;
        current=current->next;
        }
    cout<<last->info;
}
