//This program creates a Dynamic Linked list.
//The user is able to add, remove, display and modify an ID.

//Joan Estepan CIS 277
#include <iostream>
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

using namespace std;

//Prototypes

void create(); //Creates  DDl
void add();  //Add new ID
void remove(); //remove ID
void display();//display all ID
void modify();//modify ID
int select;

int item;

// Struct
typedef int INFO_REC;
struct NODE;
typedef NODE * PT_NODE;

struct NODE 
{
INFO_REC info;
PT_NODE next;
 };
 
 struct node
  {
   int data;
   struct node *next;
};
struct node* front = NULL;
struct node* rear = NULL;
struct node* temp;
 
 // struct dll list
struct LIST
{
PT_NODE front;
PT_NODE back;
};
LIST q;

//function to create DLL
void create()

{
   q.front = q.back = NULL;
   cout << "A DLL list has been created!"<<endl;
   cout<< "" <<endl;
}
// Add node function
void add ()
{

   int val;
   cout<<"Insert an ID number to be Added in the Record : "<<endl;
   cin>>val;
   cout << "Insertion succesfull! "<<endl;
   if (rear == NULL && front == NULL) 
   {
   	
      rear = (struct node *)malloc(sizeof(struct node));
      rear->next = NULL;
      rear->data = val;
      front = rear;
      return;
   } 
   
   
   if (front != NULL && rear != NULL)
   {
   	temp=(struct node *)malloc(sizeof(struct node));
   	temp -> data = val;
   	temp -> next = front -> next;
   	front -> next = temp;
   }
    
   
   else if(front != NULL)
    {
    	
      temp=(struct node *)malloc(sizeof(struct node));
      rear->next = temp;
      temp->data = val;
      temp->next = NULL;
      rear = temp;
    }
}

// Display all nodes
void display() 

{
   temp = front;
   if ((front == NULL) && (rear == NULL) )
   {
      cout<<"DLL is empty"<<endl;
      return;
   }
   
   cout<<"The elements in the DLL are ";
   
   while (temp != NULL)
   {
      cout<< " ID #" << temp->data;
      temp = temp->next;
   }
   cout<<endl;
}	
// fucntion to remove a node	
void remove() 
{
		//empty check 
		if (front == NULL) 
   		{
    	  cout <<"Error! Underflow"<<endl;
     	 return;
  		 }

cout << "What would you like to Remove? : "<<endl;
cin >> item;
    struct node* prev = front; 
    struct node* current = prev ->next; 
    while(current != NULL) 
	{
        if(current->data == item) 
		{ 
            break; 
        }
        else 
		{
            prev = current; 
            current = current->next; 
        }
        if (front -> data == item && current == NULL)
        {
        node* temp = front; 
    	front = front->next; 
  		cout << "Deleting: " << item;
  		cout <<endl;
   		 delete temp; 
 		return;
		}
    }
    if(current == NULL) 
	{ //end of list or list is empty
        cout << " No match found. Can't remove ID Number"<<endl; 
    }
	 else 
	{
        cout << "Deleting: ID #" << item << endl;
        prev->next = current->next; 
        delete current; 
    }
    
}
// modify function
     
void modify()
{
	
	//empty check 
		if (front == NULL) 
   		{
    	  cout <<"Error! DLL is Empty"<<endl;
     	 return;
  		 }

	cout << "What record would you like to modify? "<<endl;
	display();
	cout << "Record: ID #" <<endl;
	cin >> item;
    struct node* prev = front; 
    struct node* current = front->next; 
    while(current != NULL) 
	{
        if(current->data == item) 
		{ 
            break; 
        }
        else 
		{
            prev = current; 
            current = current->next; 
        }
    }
    
    
    if(current == NULL) 
	{ 
        cout << "no match found."<<endl; 
    }
	 else 
	{
        prev->next = current->next; 
        delete current; 
    }
    if (front -> data == item && current == NULL)
        {
        node* temp = front; 
    	front = front->next; 
  		cout <<endl;
   		 delete temp; 
		}
    
    int val;
   cout<<"Insert New ID Number : "<<endl;
   cout << "ID #";
   cin>>val;
   cout <<endl;
   cout << "Insertion Succesfull! "<<endl;
   if (rear == NULL) 
   {
   	
      rear = (struct node *)malloc(sizeof(struct node));
      rear->next = NULL;
      rear->data = val;
      front = rear;
      return;
   } 
   
   
   if (front != NULL && rear != NULL)
   {
   	temp=(struct node *)malloc(sizeof(struct node));
   	temp -> data = val;
   	temp -> next = front -> next;
   	front -> next = temp;
   }
    
   
   else 
    {
      temp=(struct node *)malloc(sizeof(struct node));
      rear->next = temp;
      temp->data = val;
      temp->next = NULL;
      rear = temp;
    }
}


int main()
{

// Menu *******************
	do 
	{
	
	cout << endl;
	cout << "******Please select one of the following to perform***** " <<endl;
	cout << "*********************************************************************"<<endl;
	cout << "*1-) Create a DLL  " << endl;
	cout << "*2-) Add a record to DLL " <<endl;
	cout << "*3-) Delete Record " << endl;
	cout << "*4-) Display "<<endl;
	cout << "*5-) Modify " <<endl;
	cout << "*6-) Exit " <<endl;
	cout <<endl;
	cin >> select;

	
	// Switch statement************
	
	switch (select)
	{
		case 1 : create ();
		break;
    	case 2 : add ();
    	break;
    	case 3 : remove ();
    	break;
    	case 4: display ();
    	break;
    	case 5 : modify ();
    	break;
    	case 6: cout <<"Exiting Program... " <<endl;
    	break;
    	default : cout << "Wrong number! Please enter a valid choice. " <<endl;
    	cout <<endl;
}
}
	 while  (select !=6 );
		
		return 0;
}

