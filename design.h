#ifndef _FILE_DESIGN_H
#define _FILE_DESIGN_H

#include<iostream>
#include<conio.h>
#include"antheaderInput.h"
#include<fstream>
#include"antheaderPlusPlus.h"
using namespace std;

void DeleteSuccess()
{
foreColor(1); gotoxy(20,12);cout<<" /$$$$$$$            /$$             /$$                      /$$$$$$                                  ";                          
foreColor(2); gotoxy(20,13);cout<<"| $$__  $$          | $$            | $$                     /$$__  $$                                                            "; 
foreColor(3); gotoxy(20,14);cout<<"| $$  \\ $$  /$$$$$$ | $$  /$$$$$$  /$$$$$$    /$$$$$$       | $$  \\__/ /$$   /$$  /$$$$$$$  /$$$$$$$  /$$$$$$   /$$$$$$$ /$$$$$$$  ";
foreColor(4); gotoxy(20,15);cout<<"| $$  | $$ /$$__  $$| $$ /$$__  $$|_  $$_/   /$$__  $$      |  $$$$$$ | $$  | $$ /$$_____/ /$$_____/ /$$__  $$ /$$_____//$$_____/  ";
foreColor(5); gotoxy(20,16);cout<<"| $$  | $$| $$$$$$$$| $$| $$$$$$$$  | $$    | $$$$$$$$       \\____  $$| $$  | $$| $$      | $$      | $$$$$$$$|  $$$$$$|  $$$$$$   ";
foreColor(6); gotoxy(20,17);cout<<"| $$  | $$| $$_____/| $$| $$_____/  | $$ /$$| $$_____/       /$$  \\ $$| $$  | $$| $$      | $$      | $$_____/ \\____  $$\\____  $$  ";
foreColor(7); gotoxy(20,18);cout<<"| $$$$$$$/|  $$$$$$$| $$|  $$$$$$$  |  $$$$/|  $$$$$$$      |  $$$$$$/|  $$$$$$/|  $$$$$$$|  $$$$$$$|  $$$$$$$ /$$$$$$$//$$$$$$$/  ";
foreColor(8); gotoxy(20,19);cout<<"|_______/  \\_______/|__/ \\_______/   \\___/   \\_______/       \\______/  \\______/  \\_______/ \\_______/ \\_______/|_______/|_______/   ";
}

void UpDateSuccess()
{
foreColor(2); gotoxy(18,12);cout<<" /$$   /$$                 /$$             /$$                      /$$$$$$                  ";                                          
foreColor(2); gotoxy(18,13);cout<<"| $$  | $$                | $$            | $$                     /$$__  $$                         ";                                   
foreColor(3); gotoxy(18,14);cout<<"| $$  | $$  /$$$$$$   /$$$$$$$  /$$$$$$  /$$$$$$    /$$$$$$       | $$  \\__/ /$$   /$$  /$$$$$$$  /$$$$$$$  /$$$$$$   /$$$$$$$ /$$$$$$$"; 
foreColor(3); gotoxy(18,15);cout<<"| $$  | $$ /$$__  $$ /$$__  $$ |____  $$|_  $$_/   /$$__  $$      |  $$$$$$ | $$  | $$ /$$_____/ /$$_____/ /$$__  $$ /$$_____//$$_____/"; 
foreColor(4); gotoxy(18,16);cout<<"| $$  | $$| $$  \\ $$| $$  | $$  /$$$$$$$  | $$    | $$$$$$$$       \\____  $$| $$  | $$| $$      | $$      | $$$$$$$$|  $$$$$$|  $$$$$$ "; 
foreColor(4); gotoxy(18,17);cout<<"| $$  | $$| $$  | $$| $$  | $$ /$$__  $$  | $$ /$$| $$_____/       /$$  \\ $$| $$  | $$| $$      | $$      | $$_____/ \\____  $$\\____  $$"; 
foreColor(5); gotoxy(18,18);cout<<"|  $$$$$$/| $$$$$$$/|  $$$$$$$|  $$$$$$$  |  $$$$/|  $$$$$$$      |  $$$$$$/|  $$$$$$/|  $$$$$$$|  $$$$$$$|  $$$$$$$ /$$$$$$$//$$$$$$$/"; 
foreColor(5); gotoxy(18,19);cout<<" \\______/ | $$____/  \\_______/ \\_______/   \\___/   \\_______/       \\______/  \\______/  \\_______/ \\_______/ \\_______/|_______/|_______/ "; 
foreColor(6); gotoxy(18,20);cout<<"          | $$                                                                                                                         "; 
foreColor(6); gotoxy(18,21);cout<<"          | $$                                                                                                                         "; 
foreColor(8); gotoxy(18,22);cout<<"          |__/                                                                                                                         "; 
	
}

void NotFind()
{
	
foreColor(14); gotoxy(30,12);cout<<"   ______  _______         __    __              __             ______                                     __ ";
foreColor(13); gotoxy(30,13);cout<<"  /      |/       \\       /  \\  /  |            /  |           /      \\                                   /  |";
foreColor(12); gotoxy(30,14);cout<<"  $$$$$$/ $$$$$$$  |      $$  \\ $$ |  ______   _$$ |_         /$$$$$$  |______   __    __  _______    ____$$ |";
foreColor(11); gotoxy(30,15);cout<<"    $$ |  $$ |  $$ |      $$$  \\$$ | /      \\ / $$   |        $$ |_ $$//      \\ /  |  /  |/       \\  /    $$ |";
foreColor(10); gotoxy(30,16);cout<<"    $$ |  $$ |  $$ |      $$$$  $$ |/$$$$$$  |$$$$$$/         $$   |  /$$$$$$  |$$ |  $$ |$$$$$$$  |/$$$$$$$ |";
foreColor(9); gotoxy(30,17);cout<<"    $$ |  $$ |  $$ |      $$ $$ $$ |$$ |  $$ |  $$ | __       $$$$/   $$ |  $$ |$$ |  $$ |$$ |  $$ |$$ |  $$ |";
foreColor(8); gotoxy(30,18);cout<<"   _$$ |_ $$ |__$$ |      $$ |$$$$ |$$ \\__$$ |  $$ |/  |      $$ |    $$ \\__$$ |$$ \\__$$ |$$ |  $$ |$$ \\__$$ |";
foreColor(6); gotoxy(30,19);cout<<"  / $$   |$$    $$/       $$ | $$$ |$$    $$/   $$  $$/       $$ |    $$    $$/ $$    $$/ $$ |  $$ |$$    $$ |";
foreColor(3); gotoxy(30,20);cout<<"  $$$$$$/ $$$$$$$/        $$/   $$/  $$$$$$/     $$$$/        $$/      $$$$$$/   $$$$$$/  $$/   $$/  $$$$$$$/ ";

}

void inputappointment()
{
	drawBoxSingleLine(60, 8, 50, 1, 2);
	drawBoxSingleLine(60, 11, 50, 1, 2);
	drawBoxSingleLine(60, 14, 50, 1, 2);
	drawBoxSingleLine(60, 17, 50, 1, 2);
	drawBoxSingleLine(60, 20, 50, 1, 2);
	drawBoxSingleLine(60, 23, 50, 1, 2);
	drawBoxSingleLine(60, 26, 50, 1, 2);
	drawBoxSingleLine(60, 29, 50, 1, 2);
//	drawBoxSingleLine(60, 32, 50, 1, 2);
}

void inputpatient()
{
	drawBoxSingleLine(60, 8, 50, 1, 2);
	drawBoxSingleLine(60, 11, 50, 1, 2);
	drawBoxSingleLine(60, 14, 50, 1, 2);
	drawBoxSingleLine(60, 17, 50, 1, 2);
	drawBoxSingleLine(60, 20, 50, 1, 2);
	drawBoxSingleLine(60, 23, 50, 1, 2);
	drawBoxSingleLine(60, 26, 50, 1, 2);
	drawBoxSingleLine(60, 29, 50, 1, 2);
	drawBoxSingleLine(60, 32, 50, 1, 2);
}

void inputMedicine()
{
	drawBoxSingleLine(60, 9, 50, 1, 2);
	drawBoxSingleLine(60, 12, 50, 1, 2);
	drawBoxSingleLine(60, 15, 50, 1, 2);
	drawBoxSingleLine(60, 18, 50, 1, 2);
	drawBoxSingleLine(60, 21, 50, 1, 2);
	drawBoxSingleLine(60, 24, 50, 1, 2);
//	drawBoxSingleLine(60, 27, 50, 1, 2);
//	drawBoxSingleLine(60, 30, 50, 1, 2);
}

void ANT()
{
// Ant Left
//foreColor(2);
gotoxy(15,7); cout<<"  ______  "<<endl;
gotoxy(15,8); cout<<" /      \\ "<<endl;
gotoxy(15,9); cout<<"|  $$$$$$\\"<<endl;
gotoxy(15,10); cout<<"| $$__| $$"<<endl;
gotoxy(15,11); cout<<"| $$    $$"<<endl;
gotoxy(15,12); cout<<"| $$$$$$$$"<<endl;
gotoxy(15,13); cout<<"| $$  | $$"<<endl;
gotoxy(15,14); cout<<"| $$  | $$"<<endl;
gotoxy(15,15); cout<<" \\$$   \\$$"<<endl;
//delay(500);
                            
gotoxy(15,16);cout<<" __    __ "<<endl;
gotoxy(15,17);cout<<"|  \\  |  \\"<<endl;
gotoxy(15,18);cout<<"| $$\\ | $$"<<endl;
gotoxy(15,19);cout<<"| $$$\\| $$"<<endl;
gotoxy(15,20);cout<<"| $$$$\\ $$"<<endl;
gotoxy(15,21);cout<<"| $$\\$$ $$"<<endl;
gotoxy(15,22);cout<<"| $$ \\$$$$"<<endl;
gotoxy(15,23);cout<<"| $$  \\$$$"<<endl;
gotoxy(15,24);cout<<" \\$$   \\$$"<<endl;
//delay(500);
                    
gotoxy(15,25);cout<<" ________ "<<endl;
gotoxy(15,26);cout<<"|        \\"<<endl;
gotoxy(15,27);cout<<" \\$$$$$$$$"<<endl;
gotoxy(15,28);cout<<"   | $$   "<<endl;
gotoxy(15,29);cout<<"   | $$   "<<endl;
gotoxy(15,30);cout<<"   | $$   "<<endl;
gotoxy(15,31);cout<<"   | $$   "<<endl;
gotoxy(15,32);cout<<"   | $$   "<<endl;
gotoxy(15,33);cout<<"    \\$$   "<<endl;
//delay(500);

 //Ant Right
gotoxy(142,7); cout<<"  ______  "<<endl;
gotoxy(142,8); cout<<" /      \\ "<<endl;
gotoxy(142,9); cout<<"|  $$$$$$\\"<<endl;
gotoxy(142,10); cout<<"| $$__| $$"<<endl;
gotoxy(142,11); cout<<"| $$    $$"<<endl;
gotoxy(142,12); cout<<"| $$$$$$$$"<<endl;
gotoxy(142,13); cout<<"| $$  | $$"<<endl;
gotoxy(142,14); cout<<"| $$  | $$"<<endl;
gotoxy(142,15); cout<<" \\$$   \\$$"<<endl;
//delay(500);
//                            
gotoxy(142,16);cout<<" __    __ "<<endl;
gotoxy(142,17);cout<<"|  \\  |  \\"<<endl;
gotoxy(142,18);cout<<"| $$\\ | $$"<<endl;
gotoxy(142,19);cout<<"| $$$\\| $$"<<endl;
gotoxy(142,20);cout<<"| $$$$\\ $$"<<endl;
gotoxy(142,21);cout<<"| $$\\$$ $$"<<endl;
gotoxy(142,22);cout<<"| $$ \\$$$$"<<endl;
gotoxy(142,23);cout<<"| $$  \\$$$"<<endl;
gotoxy(142,24);cout<<" \\$$   \\$$"<<endl;
//delay(500)
                    
gotoxy(142,25);cout<<" ________ "<<endl;
gotoxy(142,26);cout<<"|        \\"<<endl;
gotoxy(142,27);cout<<" \\$$$$$$$$"<<endl;
gotoxy(142,28);cout<<"   | $$   "<<endl;
gotoxy(142,29);cout<<"   | $$   "<<endl;
gotoxy(142,30);cout<<"   | $$   "<<endl;
gotoxy(142,31);cout<<"   | $$   "<<endl;
gotoxy(142,32);cout<<"   | $$   "<<endl;
gotoxy(142,33);cout<<"    \\$$   "<<endl;
}

void MenuPermission()
{
	foreColor(5); gotoxy(27,6); cout<<" __  __  _____  _____  _____  _____  _____    _____  _____  _____  __  __  ___  _____  _____  ___  _____  _____ ";
	foreColor(4); gotoxy(27,7); cout<<"/  \\/  \\/  _  \\/  _  \\/  _  \\/   __\\/   __\\  /  _  \\/   __\\/  _  \\/  \\/  \\/___\\/  ___>/  ___>/___\\/  _  \\/  _  \\";
	foreColor(3); gotoxy(27,8); cout<<"|  \\/  ||  _  ||  |  ||  _  ||  |_ ||   __|  |   __/|   __||  _  <|  \\/  ||   ||___  ||___  ||   ||  |  ||  |  |";
	foreColor(2); gotoxy(27,9); cout<<"\\__ \\__/\\__|__/\\__|__/\\__|__/\\_____/\\_____/  \\__/   \\_____/\\__|\\_/\\__ \\__/\\___/<_____/<_____/\\___/\\_____/\\__|__/";
	
	drawBoxDoubleLineWithBG(65, 14, 40, 1, 9);
	drawBoxDoubleLineWithBG(65, 17, 40, 1, 3);
	drawBoxDoubleLineWithBG(65, 20, 40, 1, 4);
	drawBoxDoubleLineWithBG(65, 23, 40, 1, 5);
	drawBoxDoubleLineWithBG(65, 26, 40, 1, 6);
	drawBoxDoubleLineWithBG(65, 29, 40, 1, 2);
	
}

void DoctorPermission()
{
	foreColor(1); gotoxy(32,6); cout<<"  _____  _____  _____  ____  _____  _____    _____  _____  _____  __  __  ___  _____  _____  ___  _____  _____ ";
	foreColor(2); gotoxy(32,7); cout<<" |  _  \\/  _  \\/     \\/    \\/  _  \\/  _  \\  /  _  \\/   __\\/  _  \\/  \\/  \\/___\\/  ___>/  ___>/___\\/  _  \\/  _  \\";
	foreColor(3); gotoxy(32,8); cout<<" |  |  ||  |  ||  |--|\\-  -/|  |  ||  _  <  |   __/|   __||  _  <|  \\/  ||   ||___  ||___  ||   ||  |  ||  |  |";
	foreColor(4); gotoxy(32,9); cout<<" |_____/\\_____/\\_____/ |__| \\_____/\\__|\\_/  \\__/   \\_____/\\__|\\_/\\__ \\__/\\___/<_____/<_____/\\___/\\_____/\\__|__/";

	drawBoxDoubleLineWithBG(62, 13, 45, 1, 5);
	drawBoxDoubleLineWithBG(62, 15, 45, 13, 5);
	drawBoxDoubleLineWithBG(62, 29, 45, 1, 5);
}

void NursePermission()
{
	
	foreColor(1); gotoxy(32,6); cout<<" _____  __ __  _____  _____  _____    _____  _____  _____  __  __  ___  _____  _____  ___  _____  _____ ";
	foreColor(2); gotoxy(32,7); cout<<"/  _  \\/  |  \\/  _  \\/  ___>/   __\\  /  _  \\/   __\\/  _  \\/  \\/  \\/___\\/  ___>/  ___>/___\\/  _  \\/  _  \\";
	foreColor(3); gotoxy(32,8); cout<<"|  |  ||  |  ||  _  <|___  ||   __|  |   __/|   __||  _  <|  \\/  ||   ||___  ||___  ||   ||  |  ||  |  |";
	foreColor(4); gotoxy(32,9); cout<<"\\__|__/\\_____/\\__|\\_/<_____/\\_____/  \\__/   \\_____/\\__|\\_/\\__ \\__/\\___/<_____/<_____/\\___/\\_____/\\__|__/";
	
	drawBoxDoubleLineWithBG(62, 13, 45, 1, 5);
	drawBoxDoubleLineWithBG(62, 15, 45, 13, 5);
	drawBoxDoubleLineWithBG(62, 29, 45, 1, 5);
}

void StaffPermission()
{
	foreColor(5); gotoxy(32,6); cout<<" _____  ____  _____  _____  _____    _____  _____  _____  __  __  ___  _____  _____  ___  _____  _____ ";
	foreColor(3); gotoxy(32,7); cout<<"/  ___>/    \\/  _  \\/   __\\/   __\\  /  _  \\/   __\\/  _  \\/  \\/  \\/___\\/  ___>/  ___>/___\\/  _  \\/  _  \\";
	foreColor(4); gotoxy(32,8); cout<<"|___  |\\-  -/|  _  ||   __||   __|  |   __/|   __||  _  <|  \\/  ||   ||___  ||___  ||   ||  |  ||  |  |";
	foreColor(2); gotoxy(32,9); cout<<"<_____/ |__| \\__|__/\\__/   \\__/     \\__/   \\_____/\\__|\\_/\\__ \\__/\\___/<_____/<_____/\\___/\\_____/\\__|__/";

	drawBoxDoubleLineWithBG(62, 13, 45, 1, 5);
	drawBoxDoubleLineWithBG(62, 15, 45, 13, 5);
	drawBoxDoubleLineWithBG(62, 29, 45, 1, 5);
}

void RoomDoctorMenu()
{
	foreColor(1); gotoxy(47,6); cout<<" _____  _____  _____  ____  _____  _____      _____  _____  _____  __  __ ";
	foreColor(2); gotoxy(47,7); cout<<"|  _  \\/  _  \\/     \\/    \\/  _  \\/  _  \\    /  _  \\/  _  \\/  _  \\/  \\/  \\";
	foreColor(3); gotoxy(47,8); cout<<"|  |  ||  |  ||  |--|\\-  -/|  |  ||  _  <    |  _  <|  |  ||  |  ||  \\/  |";
	foreColor(4); gotoxy(47,9); cout<<"|_____/\\_____/\\_____/ |__| \\_____/\\__|\\_/    \\__|\\_/\\_____/\\_____/\\__ \\__/";
	
	drawBoxDoubleLineWithBG(62, 13, 45, 1, 5);
	drawBoxDoubleLineWithBG(62, 15, 45, 13, 5);
	drawBoxDoubleLineWithBG(62, 29, 45, 1, 5);
}

void RoomNurseMenu()
{
	foreColor(1); gotoxy(50,6); cout<<" _____  __ __  _____  _____  _____      _____  _____  _____  __  __ ";
	foreColor(2); gotoxy(50,7); cout<<"/  _  \\/  |  \\/  _  \\/  ___>/   __\\    /  _  \\/  _  \\/  _  \\/  \\/  \\";
	foreColor(3); gotoxy(50,8); cout<<"|  |  ||  |  ||  _  <|___  ||   __|    |  _  <|  |  ||  |  ||  \\/  |";
	foreColor(4); gotoxy(50,9); cout<<"\\__|__/\\_____/\\__|\\_/<_____/\\_____/    \\__|\\_/\\_____/\\_____/\\__ \\__/";
	drawBoxDoubleLineWithBG(62, 13, 45, 1, 5);
	drawBoxDoubleLineWithBG(62, 15, 45, 13, 5);
	drawBoxDoubleLineWithBG(62, 29, 45, 1, 5);
}

void RoomPatientMenu()
{
	foreColor(1); gotoxy(45,06); cout<<" _____  _____  ____  ___  _____  _____  ____      _____  _____  _____  __  __ ";
	foreColor(2); gotoxy(45,7); cout<<"/  _  \\/  _  \\/    \\/___\\/   __\\/  _  \\/    \\    /  _  \\/  _  \\/  _  \\/  \\/  \\";
	foreColor(3); gotoxy(45,8); cout<<"|   __/|  _  |\\-  -/|   ||   __||  |  |\\-  -/    |  _  <|  |  ||  |  ||  \\/  |";
	foreColor(4); gotoxy(45,9); cout<<"\\__/   \\__|__/ |__| \\___/\\_____/\\__|__/ |__|     \\__|\\_/\\_____/\\_____/\\__ \\__/";
	drawBoxDoubleLineWithBG(62, 13, 45, 1, 5);
	drawBoxDoubleLineWithBG(62, 15, 45, 13, 5);
	drawBoxDoubleLineWithBG(62, 29, 45, 1, 5);
}

void RoomMenu()
{
	foreColor(13); gotoxy(55,6); cout<<"   __  ______   _  _____  _________   ___  ____  ____  __  ___";
	foreColor(12); gotoxy(55,7); cout<<"  /  |/  / _ | / |/ / _ |/ ___/ __/  / _ \\/ __ \\/ __ \\/  |/  /";
	foreColor(11); gotoxy(55,8); cout<<" / /|_/ / __ |/    / __ / (_ / _/   / , _/ /_/ / /_/ / /|_/ / ";
	foreColor(10); gotoxy(55,9); cout<<"/_/  /_/_/ |_/_/|_/_/ |_\\___/___/  /_/|_|\\____/\\____/_/  /_/  ";
	
	drawBoxDoubleLineWithBG(65, 14, 40, 1, 9);
	drawBoxDoubleLineWithBG(65, 17, 40, 1, 3);
	drawBoxDoubleLineWithBG(65, 20, 40, 1, 4);
	drawBoxDoubleLineWithBG(65, 23, 40, 1, 5);
	drawBoxDoubleLineWithBG(65, 26, 40, 1, 6);
	drawBoxDoubleLineWithBG(65, 29, 40, 1, 2);
}

void medicineMenu()
{
	foreColor(13); gotoxy(45,6); cout<<"   __  ______   _  _____  _________   __  __________  ______________  ______";
	foreColor(12); gotoxy(45,7); cout<<"  /  |/  / _ | / |/ / _ |/ ___/ __/  /  |/  / __/ _ \\/  _/ ___/  _/ |/ / __/";
	foreColor(11); gotoxy(45,8); cout<<" / /|_/ / __ |/    / __ / (_ / _/   / /|_/ / _// // // // /___/ //    / _/  ";
	foreColor(10); gotoxy(45,9); cout<<"/_/  /_/_/ |_/_/|_/_/ |_\\___/___/  /_/  /_/___/____/___/\\___/___/_/|_/___/";
	drawBoxDoubleLineWithBG(62, 13, 45, 1, 5);
	drawBoxDoubleLineWithBG(62, 15, 45, 13, 5);
	drawBoxDoubleLineWithBG(62, 29, 45, 1, 5);
}

void patientMenu()
{
	foreColor(13); gotoxy(48,6); cout<<"   __  ______   _  _____  _________   ___  ___ _______________  ________";
	foreColor(12); gotoxy(48,7); cout<<"  /  |/  / _ | / |/ / _ |/ ___/ __/  / _ \\/ _ /_  __/  _/ __/ |/ /_  __/";
	foreColor(11); gotoxy(48,8); cout<<" / /|_/ / __ |/    / __ / (_ / _/   / ___/ __ |/ / _/ // _//    / / /   ";
	foreColor(10); gotoxy(48,9); cout<<"/_/  /_/_/ |_/_/|_/_/ |_\\___/___/  /_/  /_/ |_/_/ /___/___/_/|_/ /_/   ";
	drawBoxDoubleLineWithBG(65, 14, 40, 1, 9);
	drawBoxDoubleLineWithBG(65, 17, 40, 1, 3);
	drawBoxDoubleLineWithBG(65, 20, 40, 1, 4);
	drawBoxDoubleLineWithBG(65, 23, 40, 1, 5);
	drawBoxDoubleLineWithBG(65, 26, 40, 1, 6);
}

void MenuAppointment()
{
	foreColor(1); gotoxy(22,4); cout<<" __  __  _____  _____  _____  _____  _____    _____  _____  _____  _____  ___  _____  ____  __  __  _____  _____  ____  _____ ";
	foreColor(2); gotoxy(22,5); cout<<"/  \\/  \\/  _  \\/  _  \\/  _  \\/   __\\/   __\\  /  _  \\/  _  \\/  _  \\/  _  \\/___\\/  _  \\/    \\/  \\/  \\/   __\\/  _  \\/    \\/  ___>";
	foreColor(3); gotoxy(22,6); cout<<"|  \\/  ||  _  ||  |  ||  _  ||  |_ ||   __|  |  _  ||   __/|   __/|  |  ||   ||  |  |\\-  -/|  \\/  ||   __||  |  |\\-  -/|___  |";
	foreColor(4); gotoxy(22,7); cout<<"\\__ \\__/\\__|__/\\__|__/\\__|__/\\_____/\\_____/  \\__|__/\\__/   \\__/   \\_____/\\___/\\__|__/ |__| \\__ \\__/\\_____/\\__|__/ |__| <_____/";

	drawBoxDoubleLineWithBG(62, 13, 45, 1, 5);
	drawBoxDoubleLineWithBG(62, 15, 45, 13, 5);
	drawBoxDoubleLineWithBG(62, 29, 45, 1, 5);
}

void MenuPatient()
{
	foreColor(1); gotoxy(40,6); cout<<" __  __  _____  _____  _____  _____  _____    _____  _____  ____  ___  _____  _____  ____ ";
	foreColor(2); gotoxy(40,7); cout<<"/  \\/  \\/  _  \\/  _  \\/  _  \\/   __\\/   __\\  /  _  \\/  _  \\/    \\/___\\/   __\\/  _  \\/    \\";
	foreColor(3); gotoxy(40,8); cout<<"|  \\/  ||  _  ||  |  ||  _  ||  |_ ||   __|  |   __/|  _  |\\-  -/|   ||   __||  |  |\\-  -/";
	foreColor(4); gotoxy(40,9); cout<<"\\__ \\__/\\__|__/\\__|__/\\__|__/\\_____/\\_____/  \\__/   \\__|__/ |__| \\___/\\_____/\\__|__/ |__|";

	drawBoxDoubleLineWithBG(62, 13, 45, 1, 5);
	drawBoxDoubleLineWithBG(62, 15, 45, 13, 5);
	drawBoxDoubleLineWithBG(62, 29, 45, 1, 5);
}

void doctorMenu()
{
	foreColor(1); gotoxy(50,6); cout<<"   __  ______   _  _____  _________   ___  ____  _______________  ___ ";
	foreColor(2); gotoxy(50,7); cout<<"  /  |/  / _ | / |/ / _ |/ ___/ __/  / _ \\/ __ \\/ ___/_  __/ __ \\/ _ \\";
	foreColor(3); gotoxy(50,8); cout<<" / /|_/ / __ |/    / __ / (_ / _/   / // / /_/ / /__  / / / /_/ / , _/";
	foreColor(4); gotoxy(50,9); cout<<"/_/  /_/_/ |_/_/|_/_/ |_\\___/___/  /____/\\____/\\___/ /_/  \\____/_/|_| ";
	drawBoxDoubleLineWithBG(62, 13, 45, 1, 5);
	drawBoxDoubleLineWithBG(62, 15, 45, 13, 5);
	drawBoxDoubleLineWithBG(62, 29, 45, 1, 5);
}

void nurseMenu()
{
	foreColor(1); gotoxy(53,6); cout<<"   __  ______   _  _____  _________   _  ____  _____  ________";
	foreColor(2); gotoxy(53,7); cout<<"  /  |/  / _ | / |/ / _ |/ ___/ __/  / |/ / / / / _ \\/ __/ __/";
	foreColor(3); gotoxy(53,8); cout<<" / /|_/ / __ |/    / __ / (_ / _/   /    / /_/ / , _/\\ \\/ _/  ";
	foreColor(4); gotoxy(53,9); cout<<"/_/  /_/_/ |_/_/|_/_/ |_\\___/___/  /_/|_/\\____/_/|_/___/___/ ";
	drawBoxDoubleLineWithBG(62, 13, 45, 1, 5);
	drawBoxDoubleLineWithBG(62, 15, 45, 13, 5);
	drawBoxDoubleLineWithBG(62, 29, 45, 1, 5);
}

void staffMenu()
{
	foreColor(1); gotoxy(53,6); cout<<"   __  ______   _  _____  _________   _____________   ________";
	foreColor(2); gotoxy(53,7); cout<<"  /  |/  / _ | / |/ / _ |/ ___/ __/  / __/_  __/ _ | / __/ __/";
	foreColor(3); gotoxy(53,8); cout<<" / /|_/ / __ |/    / __ / (_ / _/   _\\ \\  / / / __ |/ _// _/  ";
	foreColor(4); gotoxy(53,9); cout<<"/_/  /_/_/ |_/_/|_/_/ |_\\___/___/  /___/ /_/ /_/ |_/_/ /_/  ";
	drawBoxDoubleLineWithBG(62, 13, 45, 1, 5);
	drawBoxDoubleLineWithBG(62, 15, 45, 13, 5);
	drawBoxDoubleLineWithBG(62, 29, 45, 1, 5);
}

void byebye()
{
	foreColor(6); gotoxy(50,14); cout<<".-. .-')                 ('-.        .-. .-')                 ('-.   ";
	delay(300);
	foreColor(6); gotoxy(50,15); cout<<"\\  ( OO )              _(  OO)       \\  ( OO )              _(  OO)  ";
	delay(300);
	foreColor(6); gotoxy(50,16); cout<<" ;-----.\\  ,--.   ,--.(,------.       ;-----.\\  ,--.   ,--.(,------. ";
	delay(300);
	foreColor(6); gotoxy(50,17); cout<<" | .-.  |   \\  `.'  /  |  .---'       | .-.  |   \\  `.'  /  |  .---' ";
	delay(300);
	foreColor(6); gotoxy(50,18); cout<<" | '-' /_).-')     /   |  |           | '-' /_).-')     /   |  |     ";
	delay(300);
	foreColor(6); gotoxy(50,19); cout<<" | .-. `.(OO  \\   /   (|  '--.        | .-. `.(OO  \\   /   (|  '--.  ";
	delay(300);
	foreColor(6); gotoxy(50,20); cout<<" | |  \\  ||   /  /\\_   |  .--'        | |  \\  ||   /  /\\_   |  .--'  ";
	delay(300);
	foreColor(6); gotoxy(50,21); cout<<" | '--'  /`-./  /.__)  |  `---.       | '--'  /`-./  /.__)  |  `---. ";
	delay(300);
	foreColor(6); gotoxy(50,22); cout<<" `------'   `--'       `------'       `------'   `--'       `------' ";
}

void thank()
{
	foreColor(5); gotoxy(36,14); cout<<"  .-') _    ('-. .-.   ('-.         .-') _ .-. .-')                                             ";
	delay(300);
	foreColor(5); gotoxy(36,15); cout<<"(  OO) )  ( OO )  /  ( OO ).-.    ( OO ) )\\  ( OO )                                             "; 
	delay(300);
	foreColor(5); gotoxy(36,16); cout<<"/     '._ ,--. ,--.  / . --. /,--./ ,--,' ,--. ,--.         ,--.   ,--..-'),-----.  ,--. ,--.   "; 
	delay(300);
	foreColor(5); gotoxy(36,17); cout<<"|'--...__)|  | |  |  | \\-.  \\ |   \\ |  |\\ |  .'   /          \\  `.'  /( OO'  .-.  ' |  | |  |   "; 
	delay(300);
	foreColor(5); gotoxy(36,18); cout<<"'--.  .--'|   .|  |.-'-'  |  ||    \\|  | )|      /,        .-')     / /   |  | |  | |  | | .-') "; 
	delay(300);
	foreColor(5); gotoxy(36,19); cout<<"   |  |   |       | \\| |_.'  ||  .     |/ |     ' _)      (OO  \\   /  \\_) |  |\\|  | |  |_|( OO )"; 
	delay(300);
	foreColor(5); gotoxy(36,20); cout<<"   |  |   |  .-.  |  |  .-.  ||  |\\    |  |  .   \\         |   /  /\\_   \\ |  | |  | |  | | `-' /"; 
	delay(300);
	foreColor(5); gotoxy(36,21); cout<<"   |  |   |  | |  |  |  | |  ||  | \\   |  |  |\\   \\        `-./  /.__)   `'  '-'  '('  '-'(_.-' "; 
	delay(300);
	foreColor(5); gotoxy(36,22); cout<<"   `--'   `--' `--'  `--' `--'`--'  `--'  `--' '--'          `--'          `-----'   `-----'  "; 
	delay(2500);
}

void styleEmployee()
{
	foreColor(5); gotoxy(36,6); cout<<" ___ __  __ ___ _    _____   _____ ___   __  __   _   _  _   _   ___ ___ __  __ ___ _  _ _____  ";
	foreColor(4); gotoxy(36,7); cout<<"| __|  \\/  | _ \\ |  / _ \\ \\ / / __| __| |  \\/  | /_\\ | \\| | /_\\ / __| __|  \\/  | __| \\| |_   _| ";
	foreColor(3); gotoxy(36,8); cout<<"| _|| |\\/| |  _/ |_| (_) \\ V /| _|| _|  | |\\/| |/ _ \\| .` |/ _ \\ (_ | _|| |\\/| | _|| .` | | |   ";
	foreColor(2); gotoxy(36,9); cout<<"|___|_|  |_|_| |____\\___/ |_| |___|___| |_|  |_/_/ \\_\\_|\\_/_/ \\_\\___|___|_|  |_|___|_|\\_| |_|";
	
	drawBoxDoubleLineWithBG(40, 18, 40, 1, 1);
	drawBoxDoubleLineWithBG(40, 21, 40, 1, 2);
	drawBoxDoubleLineWithBG(40, 24, 40, 1, 3);
	drawBoxDoubleLineWithBG(88, 18, 40, 1, 4);
	drawBoxDoubleLineWithBG(88, 21, 40, 1, 5);
	drawBoxDoubleLineWithBG(88, 24, 40, 1, 6);
}

void styleHospital()
{
//	foreColor(1); gotoxy(36,6); cout<<" _  _  ___  ___ ___ ___ _____ _   _      __  __   _   _  _   _   ___ ___ __  __ ___ _  _ _____ ";
//	foreColor(2); gotoxy(36,7); cout<<"| || |/ _ \\/ __| _ \\_ _|_   _/_\\ | |    |  \\/  | /_\\ | \\| | /_\\ / __| __|  \\/  | __| \\| |_   _|";
//	foreColor(3); gotoxy(36,8); cout<<"| __ | (_) \\__ \\  _/| |  | |/ _ \\| |__  | |\\/| |/ _ \\| .` |/ _ \\ (_ | _|| |\\/| | _|| .` | | |  ";
//	foreColor(4); gotoxy(36,9); cout<<"|_||_|\\___/|___/_| |___| |_/_/ \\_\\____| |_|  |_/_/ \\_\\_|\\_/_/ \\_\\___|___|_|  |_|___|_|\\_| |_| ";
//
//	drawBoxDoubleLineWithBG(40, 15, 40, 1, 2);
////	delay(50);
//	drawBoxDoubleLineWithBG(40, 18, 40, 1, 3);
////	delay(50);
//	drawBoxDoubleLineWithBG(40, 21, 40, 1, 9);
////	delay(50);
//	drawBoxDoubleLineWithBG(40, 24, 40, 1, 5);
////	delay(50);
//	drawBoxDoubleLineWithBG(88, 15, 40, 1, 2);
////	delay(50);
//	drawBoxDoubleLineWithBG(88, 18, 40, 1, 3);
////	delay(50);
//	drawBoxDoubleLineWithBG(88, 21, 40, 1, 9);
////	delay(50);
//	drawBoxDoubleLineWithBG(88, 24, 40, 1, 5);

	drawBoxDoubleLineWithBG(35, 9, 97, 20, 6);
	drawBoxDoubleLineWithBG(35, 9, 97, 5, 6);
	drawBoxDoubleLineWithBG(84, 15, 48, 14, 6);
	foreColor(1); gotoxy(36,10); cout<<" _  _  ___  ___ ___ ___ _____ _   _      __  __   _   _  _   _   ___ ___ __  __ ___ _  _ _____ ";
	foreColor(2); gotoxy(36,11); cout<<"| || |/ _ \\/ __| _ \\_ _|_   _/_\\ | |    |  \\/  | /_\\ | \\| | /_\\ / __| __|  \\/  | __| \\| |_   _|";
	foreColor(3); gotoxy(36,12); cout<<"| __ | (_) \\__ \\  _/| |  | |/ _ \\| |__  | |\\/| |/ _ \\| .` |/ _ \\ (_ | _|| |\\/| | _|| .` | | |  ";
	foreColor(4); gotoxy(36,13); cout<<"|_||_|\\___/|___/_| |___| |_/_/ \\_\\____| |_|  |_/_/ \\_\\_|\\_/_/ \\_\\___|___|_|  |_|___|_|\\_| |_| ";

	drawBoxDoubleLineWithBG(39, 17, 40, 1, 2);
//	delay(50);
	drawBoxDoubleLineWithBG(39, 20, 40, 1, 3);
//	delay(50);
	drawBoxDoubleLineWithBG(39, 23, 40, 1, 9);
//	delay(50);
	drawBoxDoubleLineWithBG(39, 26, 40, 1, 5);
//	delay(50);
	drawBoxDoubleLineWithBG(88, 17, 40, 1, 2);
//	delay(50);
	drawBoxDoubleLineWithBG(88, 20, 40, 1, 3);
//	delay(50);
	drawBoxDoubleLineWithBG(88, 23, 40, 1, 9);
//	delay(50);
	drawBoxDoubleLineWithBG(88, 26, 40, 1, 5);
	
}

void chooseDelete()
{
	foreColor(1);gotoxy(58,6); 
	cout<<"  _______ ______  ____  ________  ____  _  ______";
	foreColor(2);gotoxy(58,7);
	cout<<" / ___/ // / __ \\/ __ \\/ __/ __/ / __ \\/ |/ / __/";
	foreColor(3);gotoxy(58,8);
	cout<<"/ /__/ _  / /_/ / /_/ /\\ \\/ _/  / /_/ /    / _/  ";
	foreColor(4);gotoxy(58,9);
	cout<<"\\___/_//_/\\____/\\____/___/___/  \\____/_/|_/___/  ";
		
	foreColor(4);
	drawBoxSingleLineWithBG(49, 20, 9, 1, 4);
	gotoxy(52,21);
	foreColor(6);
	cout<<"ESC";
	foreColor(2);
	gotoxy(48,24);
	cout<<"Back to MENU";
	drawBoxSingleLineWithBG(109, 20, 9, 1, 4);
	foreColor(6);
	gotoxy(110,21);
	cout<<"ANY KEY";
	foreColor(2);
	gotoxy(108,24);
	cout<<"Delete Again";
	foreColor(6);
	gotoxy(75,30);
	cout<<"<<<<       >>>>";
	foreColor(2);
	gotoxy(80,30);
	cout<<"Press";
}
void chooseUpdate()
{
	foreColor(1);gotoxy(58,6); 
	cout<<"  _______ ______  ____  ________  ____  _  ______";
	foreColor(2);gotoxy(58,7);
	cout<<" / ___/ // / __ \\/ __ \\/ __/ __/ / __ \\/ |/ / __/";
	foreColor(3);gotoxy(58,8);
	cout<<"/ /__/ _  / /_/ / /_/ /\\ \\/ _/  / /_/ /    / _/  ";
	foreColor(4);gotoxy(58,9);
	cout<<"\\___/_//_/\\____/\\____/___/___/  \\____/_/|_/___/  ";
		
	foreColor(4);
	drawBoxSingleLineWithBG(49, 20, 9, 1, 4);
	gotoxy(52,21);
	foreColor(6);
	cout<<"ESC";
	foreColor(2);
	gotoxy(48,24);
	cout<<"Back to MENU";
	drawBoxSingleLineWithBG(109, 20, 9, 1, 4);
	foreColor(6);
	gotoxy(110,21);
	cout<<"ANY KEY";
	foreColor(2);
	gotoxy(108,24);
	cout<<"Update Again";
	foreColor(6);
	gotoxy(75,30);
	cout<<"<<<<       >>>>";
	foreColor(2);
	gotoxy(80,30);
	cout<<"Press";
}

void chooseInsert()
{
	foreColor(1);gotoxy(58,6); 
	cout<<"  _______ ______  ____  ________  ____  _  ______";
	foreColor(2);gotoxy(58,7);
	cout<<" / ___/ // / __ \\/ __ \\/ __/ __/ / __ \\/ |/ / __/";
	foreColor(3);gotoxy(58,8);
	cout<<"/ /__/ _  / /_/ / /_/ /\\ \\/ _/  / /_/ /    / _/  ";
	foreColor(4);gotoxy(58,9);
	cout<<"\\___/_//_/\\____/\\____/___/___/  \\____/_/|_/___/  ";
		
	foreColor(4);
	drawBoxSingleLineWithBG(49, 20, 9, 1, 4);
	gotoxy(52,21);
	foreColor(6);
	cout<<"ESC";
	foreColor(2);
	gotoxy(48,24);
	cout<<"Back to MENU";
	drawBoxSingleLineWithBG(109, 20, 9, 1, 4);
	foreColor(6);
	gotoxy(110,21);
	cout<<"ANY KEY";
	foreColor(2);
	gotoxy(108,24);
	cout<<"Insert Again";
	foreColor(6);
	gotoxy(75,30);
	cout<<"<<<<       >>>>";
	foreColor(2);
	gotoxy(80,30);
	cout<<"Press";
}

void chooseSearch()
{
	foreColor(1);gotoxy(58,6); 
	cout<<"  _______ ______  ____  ________  ____  _  ______";
	foreColor(2);gotoxy(58,7);
	cout<<" / ___/ // / __ \\/ __ \\/ __/ __/ / __ \\/ |/ / __/";
	foreColor(3);gotoxy(58,8);
	cout<<"/ /__/ _  / /_/ / /_/ /\\ \\/ _/  / /_/ /    / _/  ";
	foreColor(4);gotoxy(58,9);
	cout<<"\\___/_//_/\\____/\\____/___/___/  \\____/_/|_/___/  ";
		
	foreColor(4);
	drawBoxSingleLineWithBG(49, 20, 9, 1, 4);
	gotoxy(52,21);
	foreColor(6);
	cout<<"ESC";
	foreColor(2);
	gotoxy(48,24);
	cout<<"Back to MENU";
	drawBoxSingleLineWithBG(109, 20, 9, 1, 4);
	foreColor(6);
	gotoxy(110,21);
	cout<<"ANY KEY";
	foreColor(2);
	gotoxy(108,24);
	cout<<"Search Again";
	foreColor(6);
	gotoxy(75,30);
	cout<<"<<<<       >>>>";
	foreColor(2);
	gotoxy(80,30);
	cout<<"Press";
}
//void Style()
//{
//	drawBoxSingleLineWithBG(46, 12, 79, 9, 5);
//	foreColor(6);
//	gotoxy(75, 23);cout<<"    M     __"<<endl;
//	gotoxy(75, 24);cout<<"     \\  c(..)o   ("<<endl;
//	gotoxy(75, 25);cout<<"      \\__(-)    __)"<<endl;
//	gotoxy(75, 26);cout<<"          /\\   ("<<endl;
//	gotoxy(75, 27);cout<<"         /(_)___)"<<endl;
//	gotoxy(75, 28);cout<<"         w /|"<<endl;
//	gotoxy(75, 29);cout<<"          | \\"<<endl;
//}

void boxInputStaff()
{
//	drawBoxSingleLine(60, 8, 50, 1, 5);
//	drawBoxSingleLine(60, 10, 50, 1, 5);
//	drawBoxSingleLine(60, 12, 50, 1, 5);
//	drawBoxSingleLine(60, 14, 50, 1, 5);
//	drawBoxSingleLine(60, 16, 50, 1, 5);
//	drawBoxSingleLine(60, 18, 50, 1, 5);
//	drawBoxSingleLine(60, 20, 50, 1, 5);
//	drawBoxSingleLine(60, 22, 50, 1, 5);
	drawBoxSingleLine(60, 9, 50, 1, 2);
	drawBoxSingleLine(60, 12, 50, 1, 2);
	drawBoxSingleLine(60, 15, 50, 1, 2);
	drawBoxSingleLine(60, 18, 50, 1, 2);
	drawBoxSingleLine(60, 21, 50, 1, 2);
	drawBoxSingleLine(60, 24, 50, 1, 2);
	drawBoxSingleLine(60, 27, 50, 1, 2);
	drawBoxSingleLine(60, 30, 50, 1, 2);
}

void welcomeFtLoading()
{
	
	gotoxy(28,5);foreColor(1);cout<<"  _      __    __                     __         ___        __    ______        __             __              ";
	gotoxy(28,6);foreColor(2);cout<<" | | /| / /__ / /______  __ _  ___   / /____    / _ | ___  / /_  /_  __/__ ____/ /  ___  ___  / /__  ___ ___ __";
	gotoxy(28,7);foreColor(3);cout<<" | |/ |/ / -_) / __/ _ \\/  ' \\/ -_) / __/ _ \\  / __ |/ _ \\/ __/   / / / -_) __/ _ \\/ _ \\/ _ \\/ / _ \\/ _ `/ // /";
	gotoxy(28,8);foreColor(4);cout<<" |__/|__/\\__/_/\\__/\\___/_/_/_/\\__/  \\__/\\___/ /_/ |_/_//_/\\__/   /_/  \\__/\\__/_//_/_//_/\\___/_/\\___/\\_, /\\_, / ";
	gotoxy(28,9);foreColor(5);cout<<"                                                                                                   /___//___/";
	                                                                                                   
	gotoxy(55,11);foreColor(1);cout<<" ______         _      _             _____         __         ";
	gotoxy(55,12);foreColor(2);cout<<"/_  __/______ _(_)__  (_)__  ___ _  / ___/__ ___  / /____ ____";
	gotoxy(55,13);foreColor(3);cout<<" / / / __/ _ `/ / _ \\/ / _ \\/ _ `/ / /__/ -_) _ \\/ __/ -_) __/";
	gotoxy(55,14);foreColor(4);cout<<"/_/ /_/  \\_,_/_/_//_/_/_//_/\\_, /  \\___/\\__/_//_/\\__/\\__/_/   ";
	gotoxy(55,15);foreColor(5);cout<<"                           /___/                               ";                                                                                                                                                                                                               

	int i;
  		
	gotoxy(68,23); foreColor(9); cout<<" L O A D I N G  N O W . . .";	
	DrawRectangle(33, 25, 102, 1, 5);	
	foreColor(2);
	for(i=0; i<10; i++)
	{
		gotoxy(34+i,26); cout<<(char)219;
		gotoxy(97,23); cout<<i+1<<"%";
		delay(100);
	}
	for(i=0; i<10; i++)
	{
		gotoxy(44+i,26); cout<<(char)219;
		gotoxy(97,23); cout<<i+11<<"%";
		delay(100);
	}
	for(i=0; i<10; i++)
	{
		gotoxy(54+i,26); cout<<(char)219;
		gotoxy(97,23); cout<<i+21<<"%";
		delay(100);
	}
	for(i=0; i<10; i++)
	{
		gotoxy(64+i,26); cout<<(char)219;
		gotoxy(97,23); cout<<i+31<<"%";
		delay(100);
	}
	for(i=0; i<10; i++)
	{
		gotoxy(74+i,26); cout<<(char)219;
		gotoxy(97,23); cout<<i+41<<"%";
		delay(100);
	}
	for(i=0; i<10; i++)
	{
		gotoxy(84+i,26); cout<<(char)219;
		gotoxy(97,23); cout<<i+51<<"%";
		delay(30);
	}
	for(i=0; i<10; i++)
	{
		gotoxy(94+i,26); cout<<(char)219;
		gotoxy(97,23); cout<<i+61<<"%";
		delay(100);
	}
	for(i=0; i<10; i++)
	{
		gotoxy(104+i,26); cout<<(char)219;
		gotoxy(97,23); cout<<i+71<<"%";
		delay(100);
	}
	for(i=0; i<10; i++)
	{
		gotoxy(114+i,26); cout<<(char)219;
		gotoxy(97,23); cout<<i+81<<"%";
		delay(30);
	}
	for(i=0; i<10; i++)
	{
		gotoxy(124+i,26); cout<<(char)219;
		gotoxy(97,23); cout<<i+91<<"%";
		delay(30);
	}
	gotoxy(78,29); foreColor(5); cout<<"C O M P L E T E";
	delay(1500);
	system("cls");	
}
void loginAcc()
{

foreColor(1); gotoxy(68,5); cout<<" _____  _____  __  __  ___  _____ ";
foreColor(2); gotoxy(68,6); cout<<"/  _  \\|  _  \\/  \\/  \\/___\\/  _  \\";
foreColor(3); gotoxy(68,7); cout<<"|  _  ||  |  ||  \\/  ||   ||  |  |";
foreColor(4); gotoxy(68,8); cout<<"\\__|__/|_____/\\__ \\__/\\___/\\__|__/";			
//	gotoxy(15,3);foreColor(1);cout<<"    _______ ____   __  __                                             ___              __   ____                                          __";
//	gotoxy(15,4);foreColor(2);cout<<"   / ____(_) / /  / / / /_______  _________  ____ _____ ___  ___     /   |  ____  ____/ /  / __ \\____ ____________      ______  _________/ /";
//	gotoxy(15,5);foreColor(3);cout<<"  / /_  / / / /  / / / / ___/ _ \\/ ___/ __ \\/ __ `/ __ `__ \\/ _ \\   / /| | / __ \\/ __  /  / /_/ / __ `/ ___/ ___/ | /| / / __ \\/ ___/ __  / ";
//	gotoxy(15,6);foreColor(4);cout<<" / __/ / / / /  / /_/ (__  )  __/ /  / / / / /_/ / / / / / /  __/  / ___ |/ / / / /_/ /  / ____/ /_/ (__  |__  )| |/ |/ / /_/ / /  / /_/ /  ";
//	gotoxy(15,7);foreColor(5);cout<<"/_/   /_/_/_/   \\____/____/\\___/_/  /_/ /_/\\__,_/_/ /_/ /_/\\___/  /_/  |_/_/ /_/\\__,_/  /_/    \\__,_/____/____/ |__/|__/\\____/_/   \\__,_/   ";
	
	DrawRectangle(40, 11, 90, 5, 6);
		
	gotoxy(73,12);foreColor(1);cout<<"   __             _    ";
	gotoxy(73,13);foreColor(2);cout<<"  / /  ___  ___ _(_)__ ";
	gotoxy(73,14);foreColor(3);cout<<" / /__/ _ \\/ _ `/ / _ \\";
	gotoxy(73,15);foreColor(4);cout<<"/____/\\___/\\_, /_/_//_/";
	gotoxy(73,16);foreColor(5);cout<<"          /___/        ";	
}

void cover()
{
	// Top
	gotoxy(4,1); foreColor(4);
//	cout<<"Course : C/C++";	
	SYSTEMTIME currentTime;
    GetLocalTime(&currentTime);

    // Display the current time
    foreColor(4);
    gotoxy(4,1);
    cout << currentTime.wYear << "-" << currentTime.wMonth << "-" << currentTime.wDay;
	cout<<" / " << currentTime.wHour << ":" << currentTime.wMinute << ":" << currentTime.wSecond
    << endl;
    
	gotoxy(137,1); foreColor(4);
	cout<<"I am a student at Ant Training";	
	HLine(4, 2, 163, 9, 196);
	// Bottom	
	gotoxy(4,39); foreColor(4);
	cout<<"Roeun Chanthou";	
	gotoxy(150,39); foreColor(4);
	cout<<"Norton University";
	HLine(4, 38, 163, 9, 196);
	// left
	VLine(4, 2, 35, 9, 179);
	VLine(4, 1, 1, 9, 218);
	VLine(4, 37, 1, 9, 192);
	// Right
	VLine(168, 2, 35, 9, 179);
	VLine(168, 1, 1, 9, 191);
	VLine(168, 37, 1, 9, 217);	
}

#endif