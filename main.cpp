

#include <iostream>

using namespace std;

int main()
{
char name[30], pizza1[]="Fiery Jalapeno & Paprika" ,pizza2[]="Blazing Onion & Paprika" ,pizza3[]="Farmhouse" ,pizza4[]="Peppy Paneer",
 BEVERAGES1[]="Pepsi ", BEVERAGES2[]="7Up", BEVERAGES3[]="Mirinda", BEVERAGES4[]="Mountain Dew", BEVERAGES5[]="B Natural Alphonsos",
 SIDES1[]="Garlic Breadsticks",SIDES2[]="Roasted Chicken Wings Peri-Peri",SIDES3[]="Crunchy Strips",SIDES4[]="Veg Parcel",SIDES5[]="Potato Cheese Shots",SIDES6[]="Taco Mexicana-Veg (Single)",SIDES7[]="Paneer Tikka Stuffed Garlic Bread";
	char CHOCO1[]="Club Sandwich", CHOCO2[]="Chicken Crispy Sandwich", CHOCO3[]="Extream Veg Sandwich";
	char combo1[]="Garlic Breadsticks + Pepsi", combo2[]="Meal for 4: Veg Extravanga & Indo Tandoori Paneer", combo3[]="Choco Lava Cake + Pepsi",combo4[]="Veg Parcel + Pepsi",combo5[]="Meal for 2: Farmhouse & Peppy Paneer",combo6[]="Meal for 2: Margherita & Farmhouse",
	combo7[]="Meal for 2: Pepper BBQ Chicken & Spiced Double Chicken",combo8[]="Meal for 2: Veg Paradise & Farmhouse",combo9[]="Meal for 4: Margherita & Peppy Paneer", gotostart ;
	int choice=0,pchoice,pchoice1, quantity;// time=40;
	beginning:
	system("CLS");
	cout<<"\t\t\t----------DOMINO-----------\n\n";
	cout<<"Please Enter Your Name: ";
	cin.getline(name, 20);
	cout<<"Hello "<<name<<"\n\nWhat would you like to order?\n\n";

	cout<<"\t\t\t\t--------Menu--------\n\n";

	cout<<"1) Pizzas\n";
	cout<<"2) SIDES\n";//burger
	cout<<"3) CHOCO LAVA & DESSERTS\n";//choco
	cout<<"4) BEVERAGES\n";//roll
	cout<<"5) VALUE COMBOS\n\n";//Combo
	cout<<"\nPlease Enter your Choice: ";
	cin>>choice;

	if(choice==1)
	 {
		cout<<"\n1) "<<pizza1<<"\n";
		cout<<"2) "<<pizza2<<"\n";
		cout<<"3) "<<pizza3<<"\n";
		cout<<"4) "<<pizza4<<"\n";
		cout<<"\nPlease Enter which Size would you like to have?:";
		cin>>pchoice;
		if(pchoice>=1 && pchoice<=5)
		{
			cout<<"\n1) Small Rs.250\n"<<"2) Regular Rs.500\n"<<"3) Large Rs.900\n";
			cout<<"\nChoose Size Please:";
			cin>>pchoice1;
			if(pchoice1>=1 && pchoice1<=3)
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 250*quantity;
			break;

			case 2: choice = 500*quantity;
			break;

			case 3: choice = 900*quantity;
			break;


			      }
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<pizza1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\n\nThank you For Ordering From DOMINO\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<pizza2;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From DOMINO\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<pizza3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From DOMINO\n";
			 break;
			 case 4:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<pizza4;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From DOMINO\n";
			 break;

			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}



		}

	 }


	 else if(choice==2)
	 {
		cout<<"\n1 "<<SIDES1<<" Rs.109"<<"\n";
		cout<<"2 "<<SIDES2<<" Rs.159"<<"\n";
		cout<<"3 "<<SIDES3<<" Rs.69"<<"\n";
		cout<<"4 "<<SIDES4<<" Rs.169"<<"\n";
		cout<<"5 "<<SIDES5<<" Rs.45"<<"\n";
		cout<<"6 "<<SIDES6<<" Rs.79"<<"\n";
		cout<<"7 "<<SIDES7<<" Rs.169"<<"\n";

		cout<<"\nPlease Enter which SIDES you would like to have?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 109*quantity;
			break;

			case 2: choice = 159*quantity;
			break;

			case 3: choice = 69*quantity;
			break;
	        case 4: choice = 169*quantity;
			break;

			case 5: choice = 45*quantity;
			break;

			case 6: choice = 79*quantity;
			break;
			case 7: choice = 169*quantity;
			break;
			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<SIDES1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From DOMINO \n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<SIDES2;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From DOMINO\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<SIDES3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From DOMINO\n";
			 break;
			 case 4:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<SIDES4;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From DOMINO\n";
			 break;
			 case 5:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<SIDES5;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From DOMINO\n";
			 break;
			 case 6:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<SIDES6;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From DOMINO\n";
			 break;
			 case 7:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<SIDES7;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From DOMINO\n";
			 break;
			}
			cout<<"\nWould you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}

 }
}
	else if(choice==3)
	 {
		cout<<"\n1  "<<CHOCO1<<" Rs.139"<<"\n";
		cout<<"2  "<<CHOCO2<<" Rs.149"<<"\n";
		cout<<"3  "<<CHOCO3<<" Rs.109"<<"\n";
		cout<<"\nPlease Enter which CHOCO LAVA & DESSERTS you would like to have?:";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 139*quantity;
			break;

			case 2: choice = 149*quantity;
			break;

			case 3: choice = 109*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<CHOCO1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Domino\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<CHOCO2;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Domino\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<CHOCO3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Domino\n";
			 break;


			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}
			}
			}


	 else if(choice==4)
	 {
		cout<<"\n1 "<<BEVERAGES1<<" Rs.50"<<"\n";
		cout<<"2 "<< BEVERAGES2<<" Rs.100"<<"\n";
		cout<<"3 "<< BEVERAGES3<<" Rs.120"<<"\n";
		cout<<"4 "<< BEVERAGES3<<" Rs.180"<<"\n";
		cout<<"5 "<< BEVERAGES3<<" Rs.220"<<"\n";
		cout<<"\nPlease Enter which you would like to have?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nHow Much BEVERAGES Do you want: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 50*quantity;
			break;

			case 2: choice = 100*quantity;
			break;

			case 3: choice = 120*quantity;
			break;
			case 4: choice = 180*quantity;
			break;
			case 5: choice = 220*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<BEVERAGES1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Domino\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<BEVERAGES2;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Domino\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<BEVERAGES3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Domino\n";
			 break;
             case 4:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<BEVERAGES4;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Domino\n";
			 break;
			 case 5:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<BEVERAGES5;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Domino\n";
			 break;

			}

 }
}
	else if(choice==5)
	 {
		cout<<"\n1 "<<combo1<<" Rs.1600"<<"\n";
		cout<<"2 "<<combo2<<" Rs.2200"<<"\n";
		cout<<"3 "<<combo3<<" Rs.1400"<<"\n";
		cout<<"4 "<<combo4<<" Rs.1600"<<"\n";
		cout<<"5 "<<combo5<<" Rs.2200"<<"\n";
		cout<<"6 "<<combo6<<" Rs.1490"<<"\n";
		cout<<"7 "<<combo7<<" Rs.1690"<<"\n";
		cout<<"8 "<<combo8<<" Rs.2290"<<"\n";
		cout<<"9 "<<combo9<<" Rs.1480"<<"\n";
		//cout<<"4 "<<pizza4<<"\n";
		cout<<"\nPlease Enter which Biryani you would like to have?:";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 1600*quantity;
			break;

			case 2: choice = 2200*quantity;
			break;

			case 3: choice = 1400*quantity;
			break;
			case 4: choice = 1600*quantity;
			break;

			case 5: choice = 2200*quantity;
			break;

			case 6: choice = 1490*quantity;
			break;
			case 7: choice = 1690*quantity;
			break;

			case 8: choice = 2290*quantity;
			break;

			case 9: choice = 1480*quantity;
			break;
			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<combo1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Domino \n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<combo2;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From  Domino\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<combo3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Domino\n";
			 break;
			 case 4:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<combo4;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Domino\n";
			 break;
			 case 5:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<combo5;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Domino\n";
			 break;
			 case 6:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<combo6;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Domino\n";
			 break;
			 case 7:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<combo7;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Domino\n";
			 break;
			 case 8:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<combo8;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Domino\n";
			 break;
			 case 9:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<combo9;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Domino\n";
			 break;
			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}
			}
			}

			else
			{
				system("CLS");
				cout<<"Please Select Right Option: \n";
				cout<<"Would You like to Start the program again? Y / N: " ;
				cin>>gotostart;

				if(gotostart=='Y' || gotostart=='y')
				{
				  goto beginning;
			  //return 0;
			}
			}
    return 0;
}
