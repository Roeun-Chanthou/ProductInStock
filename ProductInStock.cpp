#include<iostream>
#include<conio.h>
#include"antheaderInput.h"
#include"antheaderPlusPlus.h"
#include"design.h"
#include<iomanip>
#include<vector>
#include<algorithm>
#include<limits>
using namespace std;

class ProductInStock
{
	private:
		int barcode, qty;
		char productName[30];
		double price;
		double total;
	public:
		void SetBarcode(int newBarcode)
		{
        	barcode = newBarcode;
    	}
	    void SetQty(int newQty) 
		{
	        qty = newQty;
	    }
    	void SetProductName(const char* newProductName) 
		{
	        strncpy(productName, newProductName, sizeof(productName) - 1);
	        productName[sizeof(productName) - 1] = '\0';
    	}
	    void SetPrice(double newPrice) 
		{
	        price = newPrice;
	    }

		int GetBarcode()
		{
			return barcode;		
		}
		int GetQty()
		{
			return qty;
		}
		char* GetProductName()
		{
			return productName;
		}
		double GetPrice()
		{
			return price;
		}
		const double GetTotal()
		{
			total = qty * price;
			return total;
		}
		void InputData()
		{
			foreColor(9);
			gotoxy(36, 13);
			cout<<"Barcode";
			gotoxy(64, 13);
			cout<<"Product Name";
			gotoxy(96, 13);
			cout<<"Quantity";
			gotoxy(126, 13);
			cout<<"Price($)";
			
			foreColor(5);
			gotoxy(38, 15);	
			barcode = inputNumber();
			fflush(stdin); cin.clear();
			gotoxy(68, 15);
			while(true)
			{
				inputLetter(productName);
				if(!strcmp(productName, "\0"))
				{
					continue;
				}
				else
				{
					break;
				}
			}
			fflush(stdin); cin.clear();
			gotoxy(100, 15);
			qty = inputNumber();
			fflush(stdin); cin.clear();
			gotoxy(128, 15);
			price = inputFloat();
			fflush(stdin); cin.clear();
			GetTotal();  
		}
		void UpdateData()
		{
			foreColor(9);
			gotoxy(36, 13);
			cout<<"Barcode";
			gotoxy(64, 13);
			cout<<"Product Name";
			gotoxy(96, 13);
			cout<<"Quantity";
			gotoxy(126, 13);
			cout<<"Price($)";
			
			foreColor(5);
			gotoxy(38, 15);	
			barcode = inputNumber();
			fflush(stdin); cin.clear();
			gotoxy(68, 15);
			while(true)
			{
				inputLetter(productName);
				if(!strcmp(productName, "\0"))
				{
					continue;
				}
				else
				{
					break;
				}
			}
			fflush(stdin); cin.clear();
			gotoxy(100, 15);
			qty = inputNumber();
			fflush(stdin); cin.clear();
			gotoxy(128, 15);
			price = inputFloat();
			fflush(stdin); cin.clear();
			GetTotal();  
		}
		void ShowData()
		{
			char a = 196;
			foreColor(6);
			cout<<"\t\t\t\t    ";
			cout<<"     "<<left<<setw(20)<<barcode<<setw(20)<<productName<<setw(18)<<qty<<setw(20)<<price<<setw(25)<<total;		
			foreColor(5);
			cout<<"\n\t\t\t\t    ";
			for(int i=0; i<95; i++)
			{
				cout<<a;
			}
			cout<<endl;
			
		}
		static void Header()
		{
			char a = 196;
			foreColor(4);
			gotoxy(0, 9);
			cout<<"\t\t\t\t    ";
			for(int i=0; i<95; i++)
			{
				cout<<a;
			}
			cout<<"\n\t\t\t\t    ";
			foreColor(2);
			cout<<"   "<<left<<setw(20)<<"Barcode"<<setw(20)<<"Product Name"<<setw(20)<<"Quantity"<<setw(20)<<"Price($)"<<setw(20)<<"Total"<<endl;
			foreColor(4);
			cout<<"\t\t\t\t    ";
			for(int i=0; i<95; i++)
			{
				cout<<a;
			}
			cout<<endl;	
		}
		static void Footer()
		{
			cover();
			thank();
			delay(1000);
			cls();
			cover();
			byebye();
			delay(1000);
		}
		
};	

void MainDesign()
{
	cover();
	foreColor(1); gotoxy(50, 5);cout<<"   ___              __         __    ____       ______           __  ";
	foreColor(2); gotoxy(50, 6);cout<<"  / _ \\_______  ___/ /_ ______/ /_  /  _/__    / __/ /____  ____/ /__";
	foreColor(3); gotoxy(50, 7);cout<<" / ___/ __/ _ \\/ _  / // / __/ __/ _/ // _ \\  _\\ \\/ __/ _ \\/ __/  '_/";
	foreColor(4); gotoxy(50, 8);cout<<"/_/  /_/  \\___/\\_,_/\\_,_/\\__/\\__/ /___/_//_/ /___/\\__/\\___/\\__/_/\\_\\ 	";	
	
	
	drawBoxDoubleLineWithBG(62, 11, 45, 1, 2);
	drawBoxDoubleLineWithBG(62, 13, 45, 1, 2);
	drawBoxDoubleLineWithBG(62, 15, 45, 1, 2);
	drawBoxDoubleLineWithBG(62, 17, 45, 1, 2);
	drawBoxDoubleLineWithBG(62, 19, 45, 1, 2);
	drawBoxDoubleLineWithBG(62, 21, 45, 1, 2);
	drawBoxDoubleLineWithBG(62, 23, 45, 1, 2);
	drawBoxDoubleLineWithBG(62, 25, 45, 1, 2);
	drawBoxDoubleLineWithBG(62, 27, 45, 1, 9);

}

void styleview()
{
foreColor(1);gotoxy(62,4); cout<<" _   ___               ___       __      ";
foreColor(2);gotoxy(62,5); cout<<"| | / (_)__ _    __   / _ \\___ _/ /____ _";
foreColor(3);gotoxy(62,6); cout<<"| |/ / / -_) |/|/ /  / // / _ `/ __/ _ `/";
foreColor(4);gotoxy(62,7); cout<<"|___/_/\\__/|__,__/  /____/\\_,_/\\__/\\_,_/";
}
void MenuSearch()
{
foreColor(1);gotoxy(57,4); cout<<"   ____                 __       ___       __      ";
foreColor(2);gotoxy(57,5); cout<<"  / __/__ ___ _________/ /      / _ \\___ _/ /____ _";
foreColor(3);gotoxy(57,6); cout<<" _\\ \\/ -_) _ `/ __/ __/ _ \\    / // / _ `/ __/ _ `/";
foreColor(4);gotoxy(57,7); cout<<"/___/\\__/\\_,_/_/  \\__/_//_/   /____/\\_,_/\\__/\\_,_/";
	
	drawBoxDoubleLineWithBG(60, 12, 45, 1, 2);
	drawBoxDoubleLineWithBG(60, 15, 45, 1, 2);
	drawBoxDoubleLineWithBG(60, 18, 45, 1, 2);
	drawBoxDoubleLineWithBG(60, 21, 45, 1, 2);
	drawBoxDoubleLineWithBG(60, 24, 45, 1, 2);
	drawBoxDoubleLineWithBG(60, 27, 45, 1, 2);
}

void MenuDelete()
{
foreColor(1);gotoxy(59,4); cout<<"   ___      __    __         ___       __      ";
foreColor(2);gotoxy(59,5); cout<<"  / _ \\___ / /__ / /____    / _ \\___ _/ /____ _";
foreColor(3);gotoxy(59,6); cout<<" / // / -_) / -_) __/ -_)  / // / _ `/ __/ _ `/";
foreColor(4);gotoxy(59,7); cout<<"/____/\\__/_/\\__/\\__/\\__/  /____/\\_,_/\\__/\\_,_/ ";
	
	drawBoxDoubleLineWithBG(60, 13, 45, 1, 1);
	drawBoxDoubleLineWithBG(60, 16, 45, 1, 2);
	drawBoxDoubleLineWithBG(60, 19, 45, 1, 3);
	drawBoxDoubleLineWithBG(60, 22, 45, 1, 4);
}

void styleUpdate()
{
foreColor(1);gotoxy(57,4); cout<<"  __  __        __     __         ___       __      ";
foreColor(2);gotoxy(57,5); cout<<" / / / /__  ___/ /__ _/ /____    / _ \\___ _/ /____ _";
foreColor(3);gotoxy(57,6); cout<<"/ /_/ / _ \\/ _  / _ `/ __/ -_)  / // / _ `/ __/ _ `/";
foreColor(4);gotoxy(57,7); cout<<"\\____/ .__/\\_,_/\\_,_/\\__/\\__/  /____/\\_,_/\\__/\\_,_/ ";
foreColor(5);gotoxy(57,8); cout<<"    /_/";
}

void MenuUpdate()
{
foreColor(1);gotoxy(57,4); cout<<"  __  __        __     __         ___       __      ";
foreColor(2);gotoxy(57,5); cout<<" / / / /__  ___/ /__ _/ /____    / _ \\___ _/ /____ _";
foreColor(3);gotoxy(57,6); cout<<"/ /_/ / _ \\/ _  / _ `/ __/ -_)  / // / _ `/ __/ _ `/";
foreColor(4);gotoxy(57,7); cout<<"\\____/ .__/\\_,_/\\_,_/\\__/\\__/  /____/\\_,_/\\__/\\_,_/ ";
foreColor(5);gotoxy(57,8); cout<<"    /_/";
	
	drawBoxDoubleLineWithBG(60, 13, 45, 1, 1);
	drawBoxDoubleLineWithBG(60, 16, 45, 1, 2);
	drawBoxDoubleLineWithBG(60, 19, 45, 1, 3);
	drawBoxDoubleLineWithBG(60, 22, 45, 1, 4);
	drawBoxDoubleLineWithBG(60, 25, 45, 1, 5);
	drawBoxDoubleLineWithBG(60, 28, 45, 1, 6);
	drawBoxDoubleLineWithBG(60, 31, 45, 1, 9);
}

void MenuSort()
{
foreColor(1);gotoxy(62,4); cout<<"   ____         __     ___       __      ";
foreColor(2);gotoxy(62,5); cout<<"  / __/__  ____/ /_   / _ \\___ _/ /____ _";
foreColor(3);gotoxy(62,6); cout<<" _\\ \\/ _ \\/ __/ __/  / // / _ `/ __/ _ `/";
foreColor(4);gotoxy(62,7); cout<<"/___/\\___/_/  \\__/  /____/\\_,_/\\__/\\_,_/ ";
	
	drawBoxDoubleLineWithBG(30, 13, 45, 1, 1);
	drawBoxDoubleLineWithBG(30, 16, 45, 1, 2);
	drawBoxDoubleLineWithBG(30, 19, 45, 1, 3);
	drawBoxDoubleLineWithBG(30, 22, 45, 1, 4);
	drawBoxDoubleLineWithBG(30, 25, 45, 1, 5);
	drawBoxDoubleLineWithBG(30, 28, 45, 1, 6);
	
	drawBoxDoubleLineWithBG(93, 13, 45, 1, 1);
	drawBoxDoubleLineWithBG(93, 16, 45, 1, 2);
	drawBoxDoubleLineWithBG(93, 19, 45, 1, 3);
	drawBoxDoubleLineWithBG(93, 22, 45, 1, 4);
	drawBoxDoubleLineWithBG(93, 25, 45, 1, 5);
	drawBoxDoubleLineWithBG(93, 28, 45, 1, 6);
}

void BoxInput()
{
	drawBoxSingleLineWithBG(25, 12, 30, 1, 2);
	drawBoxSingleLineWithBG(55, 12, 30, 1, 2);
	drawBoxSingleLineWithBG(85, 12, 30, 1, 2);
	drawBoxSingleLineWithBG(115, 12, 30, 1, 2);
	
	
	drawBoxSingleLineWithBG(25, 14, 30, 1, 2);
	drawBoxSingleLineWithBG(55, 14, 30, 1, 2);
	drawBoxSingleLineWithBG(85, 14, 30, 1, 2);
	drawBoxSingleLineWithBG(115, 14, 30, 1, 2);
}

void StyleInsertRecord()
{
gotoxy(42, 4); foreColor(1); cout<<" ___  _____  _____  _____  _____  ____    _____  _____  _____  _____  _____  _____ ";
gotoxy(42, 5); foreColor(2);cout<<"/___\\/  _  \\/  ___>/   __\\/  _  \\/    \\  /  _  \\/   __\\/     \\/  _  \\/  _  \\|  _  \\";
gotoxy(42, 6); foreColor(3);cout<<"|   ||  |  ||___  ||   __||  _  <\\-  -/  |  _  <|   __||  |--||  |  ||  _  <|  |  |";
gotoxy(42, 7); foreColor(4);cout<<"\\___/\\__|__/<_____/\\_____/\\__|\\_/ |__|   \\__|\\_/\\_____/\\_____/\\_____/\\__|\\_/|_____/";	

}

void loginacc()
{
	DrawRectangle(40, 11, 90, 5, 6);
		
	gotoxy(73,12);foreColor(1);cout<<"   __             _    ";
	gotoxy(73,13);foreColor(2);cout<<"  / /  ___  ___ _(_)__ ";
	gotoxy(73,14);foreColor(3);cout<<" / /__/ _ \\/ _ `/ / _ \\";
	gotoxy(73,15);foreColor(4);cout<<"/____/\\___/\\_, /_/_//_/";
	gotoxy(73,16);foreColor(5);cout<<"          /___/        ";	
};

void Loading();
void Login();
void MainMenu();
void InsertRecord();
void ViewAllRecord();
void SearchRecord();
void UpdateRecord();
void DeleteRecord();
void SortRecords();

	vector<ProductInStock> pro;
	ProductInStock tmp;

int main()
{
	Loading();
	Login();
	
	getch();
	return 0;
}

void Loading()
{
	SetConsoleTitle("Studying Vector");
	// Set Full Screen
	system("mode con COLS=700");
    ShowWindow(GetConsoleWindow(),SW_MAXIMIZE);
	cover();
	welcomeFtLoading();
}

void Login()
{
    int attempts = 3;
    
	while(1)
	{
		cls();
		SetConsoleTitle("ProductInStock");
		system("mode con COLS=700");
	    ShowWindow(GetConsoleWindow(),SW_MAXIMIZE);
		
		char username[25];
		char pwd[30];
		cover();
		loginacc();
		
		DrawRectangle(40, 17, 90, 13, 6);
		DrawRectangle(62, 21, 44, 1, 2);	
		gotoxy(68,22); foreColor(4);
		cout<<"Username : "; 
		DrawRectangle(62, 25, 44, 1, 2);
		gotoxy(68,26); foreColor(4);
		cout<<"Password : ";
		gotoxy(79,22); foreColor(4);
		while(true)
		{
			inputLetter(username);
			if(!strcmp(username, "\0"))
			{
				continue;
			}
			else
			{
				break;
			}
		}
		gotoxy(79,26); foreColor(4);
		while(true)
		{
			hidePassword(pwd);
			if(!strcmp(pwd, "\0"))
			{
				continue;
			}
			else
			{
				break;
			}
		}	
		if(!strcmp(username, "Chanthou") && !strcmp(pwd, "2003"))
		{
			gotoxy(75,29); foreColor(2);
			cout<<"[ LOGIN SUCCESS ]";
			delay(800);
			system("cls");
			MainMenu();
		}
		else
		{
			attempts--;
            if(attempts > 0) 
			{
				gotoxy(57,29); foreColor(4);
                cout<<"Incorrect username or password. You have "<<attempts<<" time to login"<<endl;
                delay(2000);
                system("cls");
            } 
			else 
			{
				gotoxy(63,29); foreColor(4);
                cout<<"You have run out of attempts. Login failed."<<endl;
                delay(1500);
                cls();
                cover();
    			thank();
	            delay(1000);
	            cls();
	            cover();
	            byebye();
	            delay(1500);
                exit(0);
            }
		}
	}
}

void MainMenu()
{
	int x = 0;
	char option;

	MainDesign();
	ANT();
	do
	{
		foreColor(5);
		gotoxy(73, 12); cout<<"[1]. INSERT RECORD"<<endl;
		gotoxy(73, 14); cout<<"[2]. VIEW ALL RECORD"<<endl;
		gotoxy(73, 16); cout<<"[3]. SEARCH RECORD"<<endl;
		gotoxy(73, 18); cout<<"[4]. UPDATE RECORD"<<endl;
		gotoxy(73, 20); cout<<"[5]. DELETE RECORD"<<endl;
		gotoxy(73, 22); cout<<"[6]. SORT RECORD"<<endl;
		gotoxy(73, 24); cout<<"[7]. LOGOUT PROGRAM"<<endl;
		gotoxy(73, 26); cout<<"[8]. QUIT PROGRAM"<<endl;
		gotoxy(71,28); foreColor(5); cout<<"USE UP AND DOWN ARROW KEY";	

		if(x == 0)
		{
			gotoxy(50, 10); foreColor(6); gotoxy(73, 12); cout<<"[1]. INSERT RECORD"<<endl;
		}
		if(x == 1)
		{
			gotoxy(50, 12); foreColor(6); gotoxy(73, 14); cout<<"[2]. VIEW ALL RECORD"<<endl;
		}
		if(x == 2)
		{
			gotoxy(50, 14); foreColor(6); gotoxy(73, 16); cout<<"[3]. SEARCH RECORD"<<endl;
		}
		if(x == 3)
		{
			gotoxy(50, 16); foreColor(6); gotoxy(73, 18); cout<<"[4]. UPDATE RECORD"<<endl;
		}
		if(x == 4)
		{
			gotoxy(50, 10); foreColor(6); gotoxy(73, 20); cout<<"[5]. DELETE RECORD"<<endl;
		}
		if(x == 5)
		{
			gotoxy(50, 12); foreColor(6); gotoxy(73, 22); cout<<"[6]. SORT RECORD"<<endl;
		}
		if(x == 6)
		{
			gotoxy(50, 14); foreColor(6); gotoxy(73, 24); cout<<"[7]. LOGOUT PROGRAM"<<endl;
		}
		if(x ==7)
		{
			gotoxy(50, 16); foreColor(6); gotoxy(73, 26); cout<<"[8]. QUIT PROGRAM"<<endl;
		}
		option = getch();
		switch(option)
		{
			case 72:
				{
					x--; 
					if(x < 0)
					{
						x = 7;
					}
					break;
				}
			case 80:
				{
					x++; 
					if(x > 7)
					{
						x = 0;
					}
					break;
				}
		}
	}while(option != 13); 
	
	do
	{	
		switch(x)
		{
			case 0:
				{
					do
					{
						cls();
						cover();
						StyleInsertRecord();
						BoxInput();
						InsertRecord();
						int ch;
						x:
						gotoxy(60, 20); foreColor(6);
						cout<<"<<< Press Key [ESC] or [N] Back to [MAIN MENU] >>>"<<endl;
						gotoxy(63, 22); foreColor(6);
						cout<<"<<< Press Key [Enter] or [Y] Input Again >>>"<<endl;
						ch = getch();
						if(ch == 27 || ch == 78)
						{
							cls();
							cover();
							MainMenu();
						}
						else if(ch == 13 || ch == 89)
						{
							cls();
							cover();
							StyleInsertRecord();
							BoxInput();
							InsertRecord();
							goto x;
						}
						else
						{
							cls();
							cover();
							gotoxy(70, 20); foreColor(4);
							cout<<"<<< Invalid Key >>>";
							delay(1500);
							cls();
							cover();
							goto x;
						}
						
					}while(1);
				}
				break;
			case 1:
				{
					do
					{
						cls();
						cover();
						styleview();
						ViewAllRecord();
						gotoxy(60, 30); foreColor(6);
						cout<<"<<< Press Key [ESC] or [N] Back to [MAIN MENU] >>>"<<endl;
						gotoxy(60, 32); foreColor(6);
						cout<<"      <<< Press Any Key to [View Again] >>>"<<endl;
						int ch;
						ch = getch();
						if(ch == 27 || ch == 78)
						{
							cls();
							cover();
							MainMenu();
						}	
					}while(1);
				}
				break;
			case 2:
				{
					do
					{
						cls();
						SearchRecord();		
					}while(1);
				}
				break;
			case 3:
				{
					do
					{
						cls();
						UpdateRecord();		
					}while(1);
				}
				break;
			case 4:
				{
					do
					{
						cls();
						DeleteRecord();		
					}while(1);
				}
				break;
			case 5:
				{
					do
					{
						cls();
						SortRecords();		
					}while(1);
				}
				break;
			case 6:
				{
					cls();
					Login();
				}
				break;
			case 7:
				{
					cls();
					tmp.Footer();
					exit(0);
				}
				break;
			default:
				cls();
				break;
		}

	}while(1);
	
}



void InsertRecord()
{
    tmp.InputData();
    pro.push_back(tmp);
}

void ViewAllRecord()
{
	if (pro.empty()) 
	{
		cover();
		gotoxy(70, 18); foreColor(4);
        cout << "<<< No records to View. >>>" << endl;
        delay(1500);
        cls();
        MainMenu();
    }
	int n = pro.size();
	for(int i = 0; i<n; i++)
	{
        for(int j = i+1; j<n; j++)
		{
            if(strcmp(pro[i].GetProductName(), pro[j].GetProductName()) < 0)
			{
                swap(pro[i], pro[j]);
            }
        }
    }
    tmp.Header();
    for (int i = 0; i < n; i++)
    {
        pro[i].ShowData();
    }

}

void SearchRecord() 
{
	if (pro.empty()) 
	{
		cover();
		gotoxy(70, 18); foreColor(4);
        cout << "<<< No records to Search. >>>" << endl;
        delay(1500);
        cls();
        MainMenu();
    }
    int op;
    int searchBarcode;
    char searchProductName[30];
    double searchPrice;
    int searchQty;
    
    do
    {
    	d:
    	cls();
    	ANT();
    	cover();
    	MenuSearch();
	    foreColor(7);
		gotoxy(73, 13);
	    cout<< "1. Barcode";
	    gotoxy(73, 16);
	    cout<< "2. Product Name";
	    gotoxy(73, 19);
	    cout<< "3. Price";
	    gotoxy(73, 22);
	    cout<< "4. Quantity";
	    gotoxy(73, 25);
		cout<< "5. Back to [MENU]";
		gotoxy(67, 28);
		foreColor(4);
	    cout<< "Enter your choice (1-4) : ";
	    op = inputNumber();

		back:
		cls();
	    switch (op) 
		{
	        case 1:
	        	{
	        		cls();
	        		cover();
	        		gotoxy(60, 6); foreColor(6);
	        		cout << "Enter Barcode to search : ";
					ViewAllRecord();
					gotoxy(86, 6); foreColor(6); searchBarcode = inputNumber();
				}
	            break;
	        case 2:
	        	{
	        		cls();
	        		cover();
		        	gotoxy(62, 6); foreColor(6);
		            cout << "Enter Product Name to search : ";
		            ViewAllRecord();
		            gotoxy(93, 6); 
		        	while(true)
					{
						inputLetter(searchProductName);
						if(!strcmp(searchProductName, "\0"))
						{
							continue;
						}
						else
						{
							break;
						}
					}
		    	}
	            break;
	        case 3:
	        	{
	        		cls();
	        		cover();
	        		gotoxy(60, 6); foreColor(6);
		            cout << "Enter Price to search : ";
		            ViewAllRecord();
		            gotoxy(84, 6); searchPrice = inputFloat();
				}
	            break;
	        case 4:
	        	{
	        		cls();
	        		cover();
	        		gotoxy(60, 6); foreColor(6);
		            cout << "Enter Quantity to search : ";
		            ViewAllRecord();
		            gotoxy(87, 6); searchQty = inputNumber();
				}
	            break;
	        case 5:
	        	{
	        		cls();
	        		cover();
	        		MainMenu();
				}
	            break;
	        default:
	        	{
	        		cls();
	        		cover();
	        		gotoxy(60, 15);
		            cout<<"Invalid choice. Please choose a number between 1 and 5.";
		            delay(1500);
		            goto d;
				}
	    }
	
	    int n = pro.size();
	    bool found = false;
	
	    for (int i = 0; i < n; i++) 
		{
	        switch (op) 
			{
	            case 1:
	                if (pro[i].GetBarcode() == searchBarcode) 
					{
	                    found = true;
	                }
	                break;
	            case 2:
	                if (strcmp(pro[i].GetProductName(), searchProductName) == 0)  
					{
	                    found = true;
	                }
	                break;
	            case 3:
	                if (pro[i].GetPrice() == searchPrice) 
					{
	                    found = true;
	                }
	                break;
	            case 4:
	                if (pro[i].GetQty() == searchQty) 
					{
	                    found = true;
	                }
	                break;
	            default:
	                break;
	        }
	
	        if(found) 
			{
				cls();
				cover();
				gotoxy(75, 6); foreColor(6);
				cout<<"...SHOW DADTA...";
	            pro[i].Header();
	            pro[i].ShowData();
	            gotoxy(60, 18); foreColor(6);
	            cout<<"<<< Press any key back to [SEARCH MENU] >>>";
	            getch();
	            break;
	        }
	    }
	
	    if(!found) 
		{
			gotoxy(75, 25); foreColor(6);
	        cout<< "... Not Found ..." ;
	        delay(1500);
	        goto back;
	    }
	}while(1);	   
}

void UpdateRecord() 
{
	if (pro.empty()) 
	{
		cover();
		gotoxy(70, 18); foreColor(4);
        cout << "<<< No records to Update. >>>" << endl;
        delay(1500);
        cls();
        MainMenu();
    }
	int option;
    int updateBarcode;
    char updateProductName[30];
    double updatePrice;
    int updateQty;
	do
	{
		f:
		cls();
		ANT();
		cover();
		MenuUpdate();
		gotoxy(73, 14); foreColor(7);
	    cout<<"[1]. Barcode" << endl;
	    gotoxy(73, 17); foreColor(7);
	    cout<<"[2]. Product Name" << endl;
	    gotoxy(73, 20); foreColor(7);
	    cout<<"[3]. Price" << endl;
	    gotoxy(73, 23); foreColor(7);
	    cout<<"[4]. Quantity" << endl;
	    gotoxy(73, 26); foreColor(7);
	    cout<<"[5]. Update All" << endl;
	    gotoxy(73, 29); foreColor(7);
	    cout<<"[6]. Back" << endl;
	    gotoxy(69, 32); foreColor(7);
	    cout<<"Enter your choice (1-6) : ";
	    option = inputNumber();
		fu:
		cls();
	    switch (option) 
		{
	        case 1:
	        	cover();
	        	ViewAllRecord();
	            gotoxy(60, 6); foreColor(6);
	        	cout<<"Enter Barcode of the product to update : ";
				gotoxy(101, 6); foreColor(6); updateBarcode = inputNumber();
	            break;
	        case 2:	
	        do
	        {
	        	
			
	        	cover();
	        	ViewAllRecord();
	        	gotoxy(50, 6); foreColor(6);
	            cout<<"Enter Product Name of the product to update : ";
	            inputLetter(updateProductName);
	            if(!strcmp(updateProductName, "\0"))
				{
					continue;
				}
				else
				{
					break;
				}
				}while(1);
	            break;
	        case 3:
	        	cover();
	        	ViewAllRecord();
	        	gotoxy(57, 6); foreColor(6);
	            cout<<"Enter Price of the product to update : ";
	            updatePrice = inputFloat();
	            break;
	        case 4:
	        	cover();
	        	ViewAllRecord();
	        	gotoxy(61, 6); foreColor(6);
	            cout<<"Enter Quantity of the product to update : ";
	            updateQty = inputNumber();
	            break;
	        case 5:
	            cover();
	        	ViewAllRecord();
	            gotoxy(60, 6); foreColor(6);
	        	cout<<"Enter Barcode of the product to update : ";
				gotoxy(101, 6); foreColor(6); updateBarcode = inputNumber();
	            break;
	        case 6:
	        	cls();
	            MainMenu();
	            break;
	        default:
	        	cover();
	        	gotoxy(60, 15);
	            cout<<"Invalid choice. Please choose a number between 1 and 6."<<endl;
	            delay(1500);
		        goto f;
	    }
	
	    int n = pro.size();
	    bool found = false;
	
	    for(int i = 0; i < n; i++) 
		{
	        switch(option) 
			{
	            case 1:
	                if(pro[i].GetBarcode() == updateBarcode) 
					{
						cls();
	                    found = true;
	                    cover();
	                    gotoxy(69, 7); foreColor(6);
	                    cout<<"Enter new Barcode : ";
	                    int newBarcode;
	                    newBarcode = inputNumber();
	                    pro[i].SetBarcode(newBarcode);
	                }
	                break;
	            case 2:
	                if(strcmp(pro[i].GetProductName(), updateProductName) == 0) 
					{
						cls();
	                    found = true;
	                    cover();
	                    gotoxy(68, 7); foreColor(6);
	                    cout<<"Enter new Product Name : ";
	                    inputLetter(updateProductName);
	                    strcpy(pro[i].GetProductName(), updateProductName);
	                }
	                break;
	            case 3:
	                if(pro[i].GetPrice() == updatePrice) 
					{
						cls();
	                    found = true;
	                    cover();
	                    gotoxy(69, 7); foreColor(6);
	                    cout<< "Enter new Price : ";
	                    double newPrice;
	                    newPrice = inputFloat();
	                    pro[i].SetPrice(newPrice);
	                }
	                break;
	            case 4:
	                if(pro[i].GetQty() == updateQty) 
					{
						cls();
	                    found = true;
	                    cover();
	                    gotoxy(72, 7); foreColor(6);
	                    cout << "Enter new Quantity : ";
	                    int newQty;
	                    newQty = inputFloat();
	                    pro[i].SetQty(newQty);
	                }
	                break;
	            case 5:
				    if(pro[i].GetBarcode() == updateBarcode) 
					{
				        cls();
				        found = true;
				        cover();
				        styleUpdate();
				        BoxInput();
				        tmp.UpdateData();
				        pro[i] = tmp; 
				    }
				    break;
	            default:
	                break;
	        }
	        if(found) 
			{
				cls();
				cover();
				gotoxy(75, 6); foreColor(6);
				cout<<"...SHOW DADTA...";
	            pro[i].Header();
	            pro[i].ShowData();
	            cout<<"\n\n\n\t\t\t\t\t\t\t\t      Record updated successfully";
	            gotoxy(60, 20); foreColor(6);
	            cout<<"  <<< Press any key back to [DELETE MENU] >>>";
	            getch();
	            break;
	        }
	    }
	
	    if(!found) 
		{
	        gotoxy(75, 25); foreColor(6);
	        cout<< "... Not Found ..." ;
	        delay(1500);
	        goto fu;
	        cls();
	    }
	}while(1);
}

void DeleteRecord() 
{
	if(pro.empty()) 
	{
		cover();
		gotoxy(70, 18); foreColor(4);
        cout<<"<<< No records to Delete. >>>";
        delay(1500);
        cls();
        MainMenu();
    }
    int deleteBarcode;
    char deleteProductName[30];
    int choice;
    f:
	do
	{
		cls();
		ANT();
		cover();
		MenuDelete();
		foreColor(6);
		gotoxy(70, 14);
	    cout<<"[1]. Delete By Barcode";
	    gotoxy(70, 17);
	    cout<<"[2]. Delete By Product Name";
	    gotoxy(70, 20);
	    cout<<"[3]. Back to [MENU]";
	    gotoxy(67, 23);
	    cout<<"Enter your choice (1-3) : ";
	    choice = inputNumber();			
	    switch(choice) 
		{
	        case 1:
				{
	        		cls();
	        		cover();
	        		gotoxy(60, 6); foreColor(6);
		            cout << "Enter Barcode of the product to delete : ";
		            ViewAllRecord();	            
		            gotoxy(101, 6); foreColor(6); deleteBarcode = inputNumber();
			    }
				break;
		    case 2:
		        	cls();
		        	cover();
	        		gotoxy(55, 6); foreColor(6);
		            cout << "Enter Product Name of the product to delete : ";
		            ViewAllRecord();
		            gotoxy(101, 6); foreColor(6);
		            while(true)
					{
						inputLetter(deleteProductName);
						if(!strcmp(deleteProductName, "\0"))
						{
							continue;
						}
						else
						{
							break;
						}
					}
		            break;
		    case 3:
		        	cls();
		        	cover();
		        	MainMenu();
		    default:
		    	cls();
		    	cover();
		    	gotoxy(60, 15);
	            cout << "Invalid choice. Please choose a number between 1 and 3." << endl;
	            delay(1500);
		        goto f;
	    }
	
	    int n = pro.size();
	    bool found = false;
	
	    for(int i = 0; i < n; i++) 
		{
	        switch(choice) 
			{
	            case 1:
	                if(pro[i].GetBarcode() == deleteBarcode) 
					{
	                    found = true;
	                }
	                break;
	            case 2:
	                if(strcmp(pro[i].GetProductName(), deleteProductName) == 0) 
					{
	                    found = true;
	                }
	                break;
	            default:
	                break;
	        }
	
	        if(found) 
			{
	            pro.erase(pro.begin() + i);
	            gotoxy(68, 25); foreColor(4);
	            cout << "... Record deleted successfully ..." << endl;
	            gotoxy(65, 29); foreColor(4);
		        cout<<"<<< Press Any key back to [DELETE MENU] >>>";
		        getch();
	            break;
	        }
	    }
	
	    if (!found) 
		{
	        gotoxy(77, 25); foreColor(4);
	        cout<<"... Not Found ...";
	        gotoxy(65, 29); foreColor(4);
	        cout<<"<<< Press Any key back to [DELETE MENU] >>>";
	        getch();
	        break;
	    }
	}while(1);
    
}

void SortRecords()
{
    if(pro.empty()) 
	{
		cover();
		gotoxy(70, 18); foreColor(4);
        cout << "<<< No records to sort. >>>";
        delay(1500);
        cls();
        MainMenu();
    }

	int n = pro.size();
    int op;
    
	cls();
	cover();
	ANT();
	MenuSort();
    foreColor(7);
	gotoxy(38, 14);
    cout << "1. Sort by Barcode(A-Z)";
    gotoxy(101, 14);
    cout << "2. Sort by Barcode(Z-A)";
    gotoxy(38, 17);
    cout << "3. Sort by Product Name(A-Z)";
    gotoxy(101, 17);
    cout << "4. Sort by Product Name(Z-A)";
    gotoxy(38, 20);
    cout << "5. Sort by Price(A-Z)";
    gotoxy(101, 20);
    cout << "6. Sort by Price(Z-A)";
    gotoxy(38, 23);
    cout << "7. Sort by Quantity(A-Z)";
	gotoxy(101, 23);
    cout << "8. Sort by Quantity(Z-A)";
    gotoxy(38, 26);
	cout << "9. Sort by Total(A-Z)";
	gotoxy(101, 26);
	cout << "10. Sort by Total(Z-A)";
	gotoxy(38, 29);
	cout << "11. Back to [MENU]";
	gotoxy(100, 29); foreColor(9);
    cout << "Enter your choice (1-11) : ";
	op = inputNumber();

    switch(op) 
	{
        case 1:
        	cls();
		    cover();
		    gotoxy(70, 6);
		    cout<<"...SORT BY BARCODE...";
            for(int i = 0; i<n; i++)
			{
		        for(int j = i+1; j<n; j++)
				{
		            if(pro[i].GetBarcode() > pro[j].GetBarcode())
					{
		                swap(pro[i], pro[j]);
		            }
		        }
		    }
            break;
        case 2:
        	cls();
		    cover();
		    gotoxy(70, 6);
		    cout<<"...SORT BY BARCODE...";
            for(int i = 0; i < n; i++)
			{
		        for(int j = i+1; j<n; j++)
				{
		            if(pro[i].GetBarcode() < pro[j].GetBarcode())
					{
		                swap(pro[i], pro[j]);
		            }
		        }
		    }
            break;
        case 3:
        	cls();
		    cover();
		    gotoxy(64, 6);
		    cout<<"...SORT BY PRODUCT NAME...";
            for(int i = 0; i<n; i++)
			{
		        for(int j = i+1; j<n; j++)
				{
		            if(strcmp(pro[i].GetProductName(), pro[j].GetProductName()) > 0)
					{
		                swap(pro[i], pro[j]);
		            }
		        }
		    }
            break;
        case 4:
        	cls();
		    cover();
		    gotoxy(64, 6);
		    cout<<"...SORT BY PRODUCT NAME...";
            for(int i = 0; i<n; i++)
			{
		        for(int j = i+1; j<n; j++)
				{
		            if(strcmp(pro[i].GetProductName(), pro[j].GetProductName()) < 0)
					{
		                swap(pro[i], pro[j]);
		            }
		        }
		    }
            break;
        case 5:
        	cls();
		    cover();
		    gotoxy(72, 6);
		    cout<<"...SORT BY PRICE...";
            for(int i = 0; i<n; i++)
			{
		        for(int j = i+1; j<n; j++)
				{
		            if(pro[i].GetPrice() > pro[j].GetPrice())
					{
		                swap(pro[i], pro[j]);
		            }
		        }
		    }
            break;
        case 6:
        	cls();
		    cover();
		    gotoxy(72, 6);
		    cout<<"...SORT BY PRICE...";
            for(int i = 0; i<n; i++)
			{
		        for(int j = i+1; j<n; j++)
				{
		            if(pro[i].GetPrice() < pro[j].GetPrice())
					{
		                swap(pro[i], pro[j]);
		            }
		        }
		    }
            break;
        case 7:
        	cls();
		    cover();
		    gotoxy(69, 6);
		    cout<<"...SORT BY QUANTITY...";
            for(int i = 0; i<n; i++)
			{
		        for(int j = i+1; j<n; j++)
				{
		            if(pro[i].GetQty() > pro[j].GetQty())
					{
		                swap(pro[i], pro[j]);
		            }
		        }
		    }
            break;
        case 8:
        	cls();
		    cover();
		    gotoxy(69, 6);
		    cout<<"...SORT BY QUANTITY...";
            for(int i = 0; i<n; i++)
			{
		        for(int j = i+1; j<n; j++)
				{
		            if(pro[i].GetQty() < pro[j].GetQty())
					{
		                swap(pro[i], pro[j]);
		            }
		        }
		    }
            break;
        case 9:
        	cls();
		    cover();
		    gotoxy(69, 6);
		    cout<<"...SORT BY TOTAL...";
            for(int i = 0; i<n; i++)
			{
		        for(int j = i+1; j<n; j++)
				{
		            if(pro[i].GetTotal() > pro[j].GetTotal())
					{
		                swap(pro[i], pro[j]);
		            }
		        }
		    }
            break;
        case 10:
        	cls();
		    cover();
		    gotoxy(69, 6);
		    cout<<"...SORT BY TOTAL...";
            for(int i = 0; i<n; i++)
			{
		        for(int j = i+1; j<n; j++)
				{
		            if(pro[i].GetTotal() < pro[j].GetTotal())
					{
		                swap(pro[i], pro[j]);
		            }
		        }
		    }
            break;
        case 11:
        	cls();
        	MainMenu();
        default:
        	cls();
        	cover();
        	gotoxy(60, 15);
            cout << "Invalid choice. Please choose a number between 1 and 11." << endl;
            delay(1500);
            return;
    }
    
	tmp.Header();
    for(int i = 0; i < n; i++)
    {
        pro[i].ShowData();
    }
    cout<<"\n\n\n\t\t\t\t\t\t\t    <<< Press any key back to [SORT MENU] >>>";
	getch(); 
}
