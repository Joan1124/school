#include <iostream>
#include <iomanip>


using namespace std;

    int const size = 10;
	int stack [size];
	int i= -1;

// Function prototypes

void pushstack(int item);
void popstack();
void emptystack();
void purgestack();
void topstack();
void display();

// Main function **************
int main ()
{
	
	int item;
	int select;
	
	// Menu *******************
	cout << "A New Stack has Been Created."<<endl;
	do 
	{
	cout << endl;
	cout << "******Please select one of the following to perform on the stack***** " <<endl;
	cout << "*********************************************************************"<<endl;
	cout << "*1-) Push " <<endl;
	cout << "*2-) Pop " << endl;
	cout << "*3-) Top(display value on top) " <<endl;
	cout << "*4-) Purge " << endl;
	cout << "*5-) Empty (checks if stack is empty) " << endl;
	cout << "*6-) Display all items in the stack" <<endl;
	cout << "*7-) Exit Program " <<endl;
	cout << "*********************************************************************" <<endl;
	cin >> select;
	cout <<endl;
	cout <<endl;
	
	// Switch statement************
	
	switch (select)
	{
	
    	case 1 :
    	cout << "Input an item to be pushed into the stack: ";
    	cin >> item;
    	pushstack (item);
    	break;
    	
    	case 2 : popstack();
    	break;
    	
    	case 3 : topstack ();
    	break;
    	
    	case 4 : purgestack();
    	break;
    	
    	case 5 : emptystack();
    	break;
    	
    	case 6 : display();
    	break;
    	
    	default : cout << "Wrong number! Please enter a valid choice. " <<endl;
    	cout <<endl;
}
}
		while  (select != 7 );
	



    system("pause");	
    return 0;
}
	// functions ******************
	
	void pushstack (int item)
	
	{
		if (i <= 9)
		{
			i++;
			cout << "Pushing "	<< item << " into the stack. " <<endl;
			cout <<endl;
			stack[i] = item;
		}
		
		else
		{
			cout << "Overflow! Cant push any more items in the stack " <<endl;
			cout <<endl;
		}
	
	}
	
	
	
	void popstack()
	{
		
		if (i>= 0)
		{
		
			cout << "popping item " << stack[i]<<" from the stack" <<endl;
			i--;
		}
			
		else 
		{
		 cout << "Underflow! cant pop any items" <<endl;
		}
				
	    
	}
	
	void topstack()
	{
		cout << "The item on top is: " << stack[i] <<endl;
		
	}
	
	void emptystack()
	{
		if (i <= 0)
		{
		cout << "Theres no elements in the stack. " <<endl;
		}
		else 
		cout << "The stack is not empty. " <<endl;
	}
	
	void purgestack()
	{
	
	for (int N = -5; N<=i; N++  )
	{

		popstack();
		
	}

	cout << "Purge complete. " <<endl;	
	}
	
	void display  ()
	{
	cout<< "These are the items on the stack: "<< endl;
	
		
		for(int N = 10; N!=-1; N--)
		{
		
			if (stack[N]!=0)
				{
	 				cout << stack[N] << "  " << endl;
				}	
				
		}	
			
	}

	
	
	


