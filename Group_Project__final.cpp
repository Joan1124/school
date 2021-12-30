//This program Calculates the expenses of a business trip 
//First programmung team project I worked on. My code is at 157 - 233

#include <iostream>
#include <iomanip>

using namespace std;
//1~3 Jiun-Hwan
int day (int&);
void time (double&, double&);
double getairfare (double&);

//4~7 by Joan Estepan
double transp_expenses(double&,double&,double&,double&,double&,double&,double&,double&);

//8~9 Isaiah
double conference(double&);
double hotel(double&,double&,double&);


//10 Jikai
double dailyEats(double, double, double);
double allowedMeals = 0, totalMealDebt = 0, totalMealCost = 0;

int main() {
	cout << "----Tranvel Expenses----"<< endl;
	
	//1~3 by Jiun-Hwan
	int tripDays;
	double departureTime, arrivalTime, airfare;
	day (tripDays);
	time (departureTime, arrivalTime);
	getairfare (airfare);
	
	//4~7 by Joan Estepan
	double car_expenses = 0,car_rental,taxifee, milesdriven, parkingcost, parkingfees, taxicost, parkingdays, taxidays, milescost=0.58;
	transp_expenses (car_rental, milesdriven, parkingcost, parkingfees, taxicost, parkingdays, taxidays, milescost);

	//8~9 Isaiah
	double cfee=0,hday,allowed,hfee=0,hcost;
	conference(cfee);
	hotel (hday,hfee,allowed);
	//10 Jikai
	
	double dailyEats(double, double, double);
	double allowedMeals = 0, totalMealDebt = 0, totalMealCost = 0;
	dailyEats(07.00,12.00,18.00);
	//Youn
	double totaldebt = 0;
	 
	//calling functions

	
	//~~~~~~~~~~~~~~~~~~~~outputs~~~~~~~~~~~~~~~~~~~~~~~
	cout<<endl;
	cout<<"---------------------Costs---------------------"<<endl;
	//1~3
	cout <<"Airfare fee: $"<<airfare<< endl;
	
	//4~7
	cout << "Your Car rental cost is $" << car_rental<<endl;
	car_expenses = milesdriven * milescost;
	cout << "The Vehicle expenses for your miles driven is $" << car_expenses<< endl;
	if (parkingfees > 12)
	{
	 	double parkingcost = (parkingfees - 12) * parkingdays ;
	 	cout << "your parking cost is $" << parkingcost <<endl;
	}
	if (taxicost > 40)
	{
	double taxifee = (taxicost - 40) * parkingdays;
	cout << "Your taxi fee is $" << taxifee <<endl;
	}
	else
	{
	cout << "your taxi fee is $0 " <<endl;
    }
    
	//8~9
	
	cout <<"Total Conference fees are: $"<<cfee<<endl;
	
	if (hfee > 90)
	{
		double hcost = (hfee - 90) * hday;
		cout << "Your Hotel fee is $" << hcost <<endl;
	}
	else
	{
		cout << "Your hotel fee is covered." <<endl;
	}

	
	//10
	
	

    //cout << "\nWe're back in main!\n"<<endl;
    cout << "\nEmployees Expenses: $" << totalMealDebt << "\n Employees food expenses covered: $";
    cout << allowedMeals << "\nTotal Expenses, debt and covered expenses: $" << totalMealCost;
    
    totaldebt=taxifee+hcost+parkingcost+totalMealDebt;
	cout<< "You currently owe to the company: $"<<totaldebt<<endl;
	
    
    
}
//++++++++++++++++++++++++++++++++++++++++++++other functions++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	//1~3 by Jiun-Hwan--------------------------------------------------------------------------------------------------------------

int day(int &tripDays)
{
    cout<<"Enter Days spents on trip\n";
    cin>>tripDays;
    while(tripDays<1)
    {	cout<<"Days on trip must be at least 1\n";
        cin>>tripDays;
    }
}
 
void time(double &departureTime, double &arrivalTime)
{
    cout<<"Enter departure time in military format(HH.MM)\n";
    cout<<"You must include a period  '.' E.G '15.30 or 03.40'"<< endl; //edited by YHC
    cin>>departureTime;
    while (departureTime<00.00 || departureTime>23.59)
    {
        cout<<" Please enter time in military format(HH.MM)\n";
        cin>>departureTime;
    }
    cout<<"Enter arrival time in military format(HH.MM)\n";
    cin>>arrivalTime;
    while (arrivalTime<00.00 || arrivalTime>23.59)
    {
        cout<<" Please enter time in military format(HH.MM)\n";
        cin>>arrivalTime;
    }
}
 
double getairfare(double &airfare)
{
    cout<<"Enter total airfare cost in dollars:\n";
    cout<<"$";     //edited by YHC
    cin>>airfare;
    
    while(airfare<0)
    {
        cout<<" Airfare cost cannot be less then zero\n";
        cin>>airfare;
    }
    cout<<endl;
}


//4~7 Joan------------------------------------------------------------------------------------------------------

double transp_expenses(double&car_rental, double&milesdriven, double&parkingcost,double&parkingfees,
double&taxicost,double&parkingdays,double&taxidays,double&milescost)
{
	 
//car rental
	cout << "How much did you spend on car rentals? " <<endl; //prompt user for money spent on car rental
	cout << "$";
	cin >> car_rental;
	
	while (car_rental < 0 )// Check if Input is valid
	{
		cout << "Invalid number! this program doesn't accept negative numbers. " <<endl; 
		cout <<"$";
		cin.clear();
		cin.ignore(1);
		cin >> car_rental;
	}
	// private car miles driven
    cout << "How many Miles did you drive in a private car? " ; //prompt user for miles driven in private car
    cout << "(Each mile driven costs 0.58$)" <<endl;
    cin >> milesdriven; //Get input
		
		while (milesdriven < 0 )//Check Input
	{
		cout << "Invalid number! this program doesn't accept negative numbers. " <<endl; 
		cin.clear(); //Clear invalid input
		cin.ignore(1);
		cin >> milesdriven; //Get new input
	}
	//parking
	cout << "How much did you Pay for parking daily? " ; //Prompt user for parking spendings 
	cout << "(The company only covers up to $12 per day) " <<endl;
	cout << "$";
	cin >> parkingfees; //Get input
		
		while (parkingfees < 0 ) //Check input
	{
		cout << "Invalid number! this program doesn't accept negative numbers " <<endl;
		cout <<"$" ;
		cin.clear(); //Clear invalid input
		cin.ignore(1);
		cin >> parkingfees; // Get new input
	}
	cout << "for how many days? " <<endl; // prompt user for days parked
	cin >> parkingdays; // Get input
		while (parkingdays < 0 )//Check input
	{
		cout << "Invalid number! this program doesn't accept negative numbers " <<endl;
		cin.clear();  //Clear invalid input
		cin.ignore(1);
		cin >> parkingdays; //Get new input
	}
	//taxi fees
	cout << "How much did you pay in Taxi fees? " ; // prompt user for taxi fees
	cout << "(the company covers up to $40 per day) " <<endl;
	cout << "$";
	cin >> taxicost; // get input
	
		while (taxicost < 0 ) //Check input
	{
		cout << "Invalid number! this program doesn't accept negative numbers " <<endl;
		cout <<"$";
		cin.clear();//Clear input 
		cin.ignore(1);
		cin >> taxicost; // Get new input
	}
	cout << "For how many days? " <<endl; // prompt user for number of days he used taxi
	cin >> taxidays; //get input
	cout << ""<<endl;
	
		while (taxidays < 0 ) //Check input
	{
		cout << "Invalid number! this program doesn't accept negative numbers " <<endl;
		cin.clear(); // clear invalid input
		cin.ignore(1);
		cin >> taxidays; //get new input 
	}


	// Calculations (has moved up into main^)
	

	
		
	}
	//8~9 Isaiah
double conference(double &cfee)
{
	cout<<"Put how much you spent on conference or seminar registartion fees: "<< endl;
	cout<<"$";
	cin>>cfee;
	//Verify
	while(cfee<0)
	{
		cout<<"Amount Spent cannot be less than zero: ";
		cin>>cfee;
	}
	

}


double hotel(double &hday,double &hfee,double &allowed)
{
	cout<<"How much did you spent on hotel expenses? "<<endl;
	cout<<"$";
	cin>>hfee;
	cout<<"How many days have you spent in hotels?"<<endl;
	cin>>hday;
	cout<<endl;
	//Verification
	while(hfee<0)
	{
		cout<<"Amount Spent cannot be less than zero: "<<endl;
		cin>>hfee;
	}
	//Calculations
	if(hfee != 0)
	allowed=hday*90;
	
	
}
	
	
	
	
	
//10 Jikai

double dailyEats(double departureTime, double arrivalTime, double tripDays)
{
    int i, x, setX = 0, fDayMealStart = 0, onlyOnce = 0;
    double cost = 0, bExpense = 0;
    string mealType[3] = {"breakfast", "lunch", "dinner"};
    int mealMax[3] = {18, 12, 20};
    string answer = ""; 
    
    for(i = 1;i <= tripDays;i++)
	{
        setX = 0;
        if(fDayMealStart == 0 && i == 1)
		{ 
            if(departureTime >= 0 && departureTime <= 6.59)
			{
                cout << "You're covered.";
                fDayMealStart++;
            }
			else if(departureTime >= 07.00 && departureTime < 11.59)
			{
                cout << "Only lunch and Dinner is covered on the first day.\n";
                setX = 1; fDayMealStart++;
            }
			else if(departureTime >= 12.00 && departureTime < 17.59)
			{
                cout << "Only dinner is covered on the first day.\n";
                setX = 2; fDayMealStart++;
            }
			else if(departureTime >= 18.00 && departureTime <= 23.59)
			{
                cout << "Sorry nothing is covered on the first day. Its after 6pm.\n";
                setX = 3; fDayMealStart++;
        	}
		}
		
        if(i == tripDays)
		{
            if(0 <= arrivalTime && arrivalTime <= 08.00)
			{
                mealType[0] = "0"; mealType[1] = "0"; mealType[2] = "0";
                if(onlyOnce == 0){cout << "\nSorry, nothing is covered on the last day, day "<<i<<".\n"; onlyOnce++;}
            }
			else if(08.00 < arrivalTime && arrivalTime <= 12.59)
			{
                mealType[1] = "0"; mealType[2] = "0";
                if(onlyOnce == 0){cout << "\nOnly breakfast is covered on the last day."; onlyOnce++;}
            }
			else if(13.00 < arrivalTime && arrivalTime <= 18.59)
			{
                mealType[2] = "0";
                if(onlyOnce == 0){cout << "\nOnly breakfast & lunch is covered on the last day.\n"; onlyOnce++;}
            }
			else if(19.00 < arrivalTime && arrivalTime <= 23.59)
			{
                if(onlyOnce == 0){cout << "\nYou're covered on the last day, day "<<i<<".\n"; onlyOnce++;}
        	}
		break;
		}
        
        for(x = setX;x < 3;x++)
		{
            if(mealType[x] != "0"){
                cout << "\nDid you have " << mealType[x] << " on day " << i << "? [Y/N]: ";
                cin >> answer;
                if(answer == "Y" || answer == "y")
				{
                    cout << "\nHow much did it cost?:";
                    cin >> cost;
                    while(cost < 0)
					{
                        cout << "Really? So you were paid to eat there?\n";
                        cout << "Please CORRECTLY enter the amount spent, value more than $0: ";
                        cin >> cost;
                    }
                    if(cost >= mealMax[x])
					{
                        if(cost == mealMax[x])
						{
                            allowedMeals = allowedMeals + mealMax[x];
                            totalMealCost = totalMealCost + cost;
                            cout <<"\n"<< mealType[x] << " expenses covered: " << mealMax[x] << endl;
                        }
						else if(cost > mealMax[x])
						{
                            double debt = 0;
                            debt = cost - mealMax[x];
                            totalMealDebt = totalMealDebt + debt;
                            totalMealCost = totalMealCost + cost;
                            bExpense = mealMax[x];
                            allowedMeals = allowedMeals + bExpense;
                            if(debt == 0)
							{
                                cout << mealType[x] << " expenses covered: $"<<bExpense<<".\n\n";
                            }
							else 
							{
                                cout << mealType[x] << " expenses covered: $"<< bExpense;
                                cout <<".\ndebt added: "<<debt<<".\n";
                            }
                        }
                    }
					else if(cost < mealMax[x])
					{
                        allowedMeals = allowedMeals + cost;
                        totalMealCost = totalMealCost + cost;
                        cout <<  mealType[x] << " expenses covered: $" << cost << endl;
                    }
                }
				else if(answer == "N" || answer == "n")
				{
                    cout << "No " << mealType[x] << ", got it. \n"; 
				} 
                else if(answer != "Y" || answer != "y" || answer != "N" || answer != "n")
				{
                    while(answer != "Y" || answer != "y" || answer != "N" || answer != "n")
					{
                        cout << "\nI didnt quite get that. ";
                        cout << "Did you have " << mealType[x] << " on day " << i << " ? [Y/N]: ";
                        cin >> answer;
                        if(answer == "Y" || answer == "y" || answer == "N" || answer == "n")
						{
                            if(answer == "Y" || answer == "y")
							{
							cout << "\nHow much did it cost?:";
							cin >> cost;
							while(cost < 0)
							{
							cout << "Really? So you were paid to eat there?\n";
							cout << "Please CORRECTLY enter the amount spent, value more than $0: ";
							cin >> cost;}if(cost >= mealMax[x]){if(cost == mealMax[x]){allowedMeals = allowedMeals + mealMax[x];totalMealCost = totalMealCost + cost;cout <<"\n"<< mealType[x] << " expenses covered: " << mealMax[x] << endl;}else if(cost > mealMax[x]){double debt = 0;debt = cost - mealMax[x];totalMealDebt = totalMealDebt + debt;totalMealCost = totalMealCost + cost;bExpense = mealMax[x];allowedMeals = allowedMeals + bExpense;if(debt == 0){cout << mealType[x] << " expenses covered: $"<<bExpense<<".\n\n";} else {cout << mealType[x] << " expenses covered: $"<< bExpense;cout <<".\ndebt added: "<<debt<<".\n";}}}else if(cost < mealMax[x]){allowedMeals = allowedMeals + cost;totalMealCost = totalMealCost + cost;cout <<  mealType[x] << " expenses covered: $" << cost << endl;}}else if(answer == "N" || answer == "n"){cout << "No " << mealType[x] << ", got it. \n"; }  
                            break;
                        }
                    }
                }
            answer = ""; cost = 0;
            }
        }
    }
}
	


