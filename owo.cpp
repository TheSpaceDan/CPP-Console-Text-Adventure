#include <iostream>
#include <string>
#include <windows.h> // Included for clearning the console screen.
#include <stdlib.h> // Included for timed delays and exiting in the output.
#include <fstream>

using namespace std;

void menu();
void gameStart();
void info();
void credits();
void game1();
void game2();
void game3();
void cho1();
void cho2();
void cho3();
void major1();
void majorp1();
void major2();
void major3();

// Main calls the menu originally, all other repeated menus are called by Menu function. 
// This is done to get rid of loop complications inside the main.

int main()
{
	int selection;

	cout << "\n\t\t\t\t\t--------- ( MENU ) ---------\n\n";
	cout << "\t\t\t\t\t\t(1) Start\n\t\t\t\t\t\t(2) Information\n\t\t\t\t\t\t(3) Credits\n\n";

	cout << "Selection: ";
	cin >> selection;

	switch (selection) {

	case 1:

		gameStart();
		break;

	case 2:

		info();
		break;

	case 3:

		credits();
		break;

	default:

		cout << "Please choose a right option.";
		menu();
		break;

	}
}

// The menu function
void menu() {
	system("CLS");
	int selection;

	cout << "\n\t\t\t\t\t--------- ( MENU ) ---------\n\n";
	cout << "\t\t\t\t\t\t(1) Start\n\t\t\t\t\t\t(2) Information\n\t\t\t\t\t\t(3) Credits\n\n";

	cout << "Selection: ";
	cin >> selection;

	switch (selection) {

	case 1:

		gameStart();
		break;

	case 2:

		info();
		break;

	case 3:

		credits();
		break;

	default:

		cout << "Please choose a right option.";
		Sleep(2000);
		menu();
		break;
	}
}

// The main game function
void gameStart() {

	system("CLS"); // For clearing the screen before the actual game starts.

	Sleep(1000); // A pre-defined function for timed delays.
	cout << "\n\t\t\t\t\t\tWelcome to the game.\n\n";
	Sleep(3000);

	cout << "\tYou are the player. "; Sleep(2000);
	cout << "The choices you make will shape up your story. "; Sleep(1500);
	cout << "Everything"; Sleep(1000); cout << " depends on you.\n\n"; Sleep(2000);

	cout << "------------------------------------------------------------------------------------------------------------------------\n\n"; 
	Sleep(800);
	cout << "You are the head of a freighter spaceship crew, a scientist, and your family lives on Earth as part of an ";
	cout << "authoritarian scheme to maintain human existence owing to the scarcity of resources. "; Sleep(1400);
	cout << "Your wife is a programmer, and You have two children who, like practically the whole non-authority working populace, "; Sleep(1400);
	cout <<	"live in a coma - induced fake world.\n\n"; Sleep(1400);
	
	game1();
}

// Information Function
void info() {
	Sleep(1000);
	int sel;

	cout << "\n\nThis is a Text-Based Adventure Game.\n\nWhat is a Text-Based Game?\n";
	cout << "A Text-Based game plays and interacts with user using text only. They usually are very story focused, and in some way ";
	cout << "provide interaction for user too.\n\n";
	cout << "What is this game about?\n";
	cout << "In this game, user will be taken through a story rich experience paired with multiple choices. The user's choices in the game ";
	cout << "will shape up the story for them. There are multiple endings, all depending on how the user plays out the game.\n";

	Sleep(2000);

	cout << "\nReturn to menu? Enter 1 to proceed.\n";
	cin >> sel;

	if (sel == 1) {
		system("CLS");
		menu();
	}
	else
		cout << "Program will now close.\n";
		Sleep(2000);
		exit(0);
}

// Credits Function
void credits() {
	Sleep(1000);
	int sel;

	cout << "\n\nThis game is a semester project of two people:\n";
	cout << "- Daniyal Ehtisham Rana (210251)\n- Fatyma Zulfiqar (211919)\n\n";

	Sleep(2000);

	cout << "\nReturn to menu? Enter 1 to proceed.\n";
	cin >> sel;

	if (sel == 1) {
		system("CLS");
		menu();
	}
	else
		cout << "Program will now close.\n";
		Sleep(2000);
		exit(0);
}

void game1() {
	string name, inp1;
	int choice1;

	cout << "Enter the name of your protagonist (Scientist): ";
	cin >> name;

	Sleep(1400);
	cout << "\nLogging you in now " << name; Sleep(1000);
	cout << "."; Sleep(1000); cout << "."; Sleep(1000); cout << "."; Sleep(1500);

	cout << "\nLogin Successful.."; Sleep(800); cout << " Press any key and enter to continue...";
	cin >> inp1;

	system("CLS");

	Sleep(1000);
	cout << "\n\t\t\t\t-------------------- ( A C T   1 ) --------------------\n\n"; Sleep(500);

	cout << "  /\\ \n ";
	cout <<	"/  \\ \n";
	cout << "|    |  << your spaceship\n";
	cout << "|    |\n";
	cout <<	"|    |\n";
	cout <<	"|    |\n";
	cout <<	"|    |\n";
	cout <<	"I    |\n";
	cout <<	"|    |\n";
	cout <<	"|    |\n";
	cout <<	"|____|\n";
	cout <<	".'-`' - `.\n";
	cout <<	". / . '.. .\n";
	cout <<	".''(.'. ' '\n";
	cout <<	"..'.;.;'; '.;'";

	Sleep(1000);
	cout << "\n\nOn your spaceship, you and two of your crew members are buckled up ";
	cout << "for your two year trip, you get the machine goingand the journey is started.";
	cout << "You get a call from the headquarters and pick you it up.\n\n"; Sleep(2000);
	cout << "Call: " << name << "! This is the main office speaking, there has been an issue in the communication lines of the closest station’s proximity. ";
	cout << "Your orders are to put everything on halt and check that issue!\n\n"; Sleep(1000);
		
	cout << "What will you do?\n\n"; Sleep(2000);
	cout << "1. You accept.\n"; Sleep(400);
	cout << "2. You deny.\n"; Sleep(400);
	cout << "3. You ask for more details.\n"; Sleep(400);
	
	cout << "Selection: ";
	cin >> choice1;

	if (choice1 > 3) {
		Sleep(100);
		cout << "Please select the right choice!";
		Sleep(300);
		cho1();
	}
	else if (choice1 == 1) {
		Sleep(200);
		cout << "You chose to accept.\n";
		Sleep(300);
		cout << "\nYou accept the task given to you, the headquarters tell you that high energy cosmic rays that have "; Sleep(100);
		cout << "been releasing from our black hole and other supernova galaxies have been disrupting the binary "; Sleep(100);
		cout << "code of our system and are causing more bits to flip in transistors than ever before."; Sleep(100);
		game2();
	}
	else if (choice1 == 2) {
		Sleep(200);
		cout << "You chose to deny.\n";
		Sleep(300);
		cout << "\nYou deny the task given to you, the headquarters tell you that there’s no other choice, there are high energy cosmic rays that have been releasing from "; Sleep(100);
		cout << "black hole and other supernova galaxies have been disrupting the binary code of our "; Sleep(100);
		cout << "system and are causing more bits to flip in transistors than ever before and you are the closest to it."; Sleep(100);
		game2();
	}
	else if (choice1 == 3) {
		Sleep(200);
		cout << "You ask for more details.\n";
		Sleep(300);
		cout << "\nThe headquarters tell you that high energy cosmic rays that have been releasing from our black hole and other supernova galaxies have been disrupting "; Sleep(100);
		cout << "the binary code of our system and are causing more bits to flip in transistors "; Sleep(100);
		cout << "than ever before. You being in the stations closest vicinity, are the best bet."; Sleep(100);
		game2();
	}

}

void cho1() {

	Sleep(1000);

	int choice1;

	cout << "\n\nWhat will you do?\n\n"; Sleep(800);
	cout << "1. You accept.\n"; Sleep(400);
	cout << "2. You deny.\n"; Sleep(400);
	cout << "3. You ask for more details.\n"; Sleep(400);

	cout << "Selection: ";
	cin >> choice1;

	if (choice1 > 3) {
		Sleep(100);
		cout << "Please select the right choice!";
		Sleep(300);
		cho1();
	}
	else if (choice1 == 1) {
		Sleep(200);
		cout << "You chose to accept.\n";
		Sleep(300);
		cout << "\nYou accept the task given to you, the headquarters tell you that high energy cosmic rays that have "; Sleep(100);
		cout << "been releasing from our black hole and other supernova galaxies have been disrupting the binary "; Sleep(100);
		cout << "code of our system and are causing more bits to flip in transistors than ever before."; Sleep(100);
		game2();
	}
	else if (choice1 == 2) {
		Sleep(200);
		cout << "You chose to deny.\n";
		Sleep(300);
		cout << "\nYou deny the task given to you, the headquarters tell you that there’s no other choice, there are high energy cosmic rays that have been releasing from "; Sleep(100);
		cout << "black hole and other supernova galaxies have been disrupting the binary code of our "; Sleep(100);
		cout << "system and are causing more bits to flip in transistors than ever before and you are the closest to it."; Sleep(100);
		game2();
	}
	else if (choice1 == 3) {
		Sleep(200);
		cout << "You ask for more details.\n";
		Sleep(300);
		cout << "\nThe headquarters tell you that high energy cosmic rays that have been releasing from our black hole and other supernova galaxies have been disrupting "; Sleep(100);
		cout << "the binary code of our system and are causing more bits to flip in transistors "; Sleep(100);
		cout << "than ever before. You being in the stations closest vicinity, are the best bet."; Sleep(100);
		game2();
	}

}

void game2() {

	string cont;

	cout << "\nEnter any key to continue: ";
	cin >> cont;

	system("CLS");

	int choice2;

	Sleep(1500);
	cout << "\n\nThat means you need to reroute and spend more time in this journey, ";
	cout << "a year more. More time in this floating machine and meaningless days, more time away from family and your wife.";
	Sleep(2000);
	cout << "\n\nLife is long, and hard, more than a year is past and youre on your way to fix the cosmic ray problem, theres ";
	cout << "a new message on your main system, it takes messages longer to deliver the further you are from the outpost that it’s been sent from...\n\n";
	Sleep(2000);
	cout << "A "; Sleep(250); cout << "message "; Sleep(250); cout << "from "; Sleep(250); cout << "your "; Sleep(250); cout << "wife...\n\n";
	Sleep(1000);

	cout << "\nEnter any key and press enter to continue: ";
	cin >> cont;

	system("CLS");
	Sleep(1000);

	cout << "The message reads: \n"; Sleep(200);
	cout << "My health is getting worse since youve left, the experts dont know what the issue is; experts speculate that it is due to prolonged exposure to radiation, my lungs are already frail. I dont believe I have much time left.\n\n";
	Sleep(1500);
	cout << "Sent "; Sleep(500); cout << "10 months ago...\n\n"; Sleep(500);

	cout << "You think of what to do... send a message perhaps?\n";
	
	cout << "\nSend a message?\n\n"; Sleep(2000);
	cout << "1. Im going to be home earlier than you can think, I hope to see you soon...\n"; Sleep(400);
	cout << "2. Im doing everything I can to get home as soon as possible, but I’ll be very late, more than two years...\n"; Sleep(400);
	cout << "3. Choose not to send any message.\n"; Sleep(400);

	cout << "Selection: ";
	cin >> choice2;

	if (choice2 > 3) {
		Sleep(100);
		cout << "\nPlease select the right choice!";
		Sleep(300);
		cho2();
	}
	else if (choice2 == 1) {
		Sleep(300);
		cout << "\nYou give her false hope and tell her you’d be home soon."; Sleep(100);
		game3();
	}
	else if (choice2 == 2) {
		Sleep(300);
		cout << "\nYou tell her the truth about the scenario."; Sleep(100);
		game3();
	}
	else if (choice2 == 3) {
		Sleep(300);
		cout << "\nThe message will take way too long to deliver. You decide to not send any message."; Sleep(100);
		game3();
	}
}

void cho2() {

	Sleep(1000);

	int choice2;
	cout << "You think of what to do... send a message perhaps?";

	cout << "Send a message?\n\n"; Sleep(2000);
	cout << "1. Im going to be home earlier than you can think, I hope to see you soon...\n"; Sleep(400);
	cout << "2. Im doing everything I can to get home as soon as possible, but Ill be very late, more than two years...\n"; Sleep(400);
	cout << "3. Choose not to send any message.\n"; Sleep(400);

	cout << "Selection: ";
	cin >> choice2;

	if (choice2 > 3) {
		Sleep(100);
		cout << "Please select the right choice!";
		Sleep(300);
		cho2();
	}
	else if (choice2 == 1) {
		Sleep(300);
		cout << "\nYou give her false hope and tell her you’d be home soon."; Sleep(100);
		game3();
	}
	else if (choice2 == 2) {
		Sleep(300);
		cout << "\nYou tell her the truth about the scenario."; Sleep(100);
		game3();
	}
	else if (choice2 == 3) {
		Sleep(300);
		cout << "The message will take way too long to deliver. You decide to not send any message."; Sleep(100);
		game3();
	}
}

void game3() {
	
	string cont, fuel;

	cout << "\n\nPress any key and enter to proceed to next act: \n";
	cin >> cont;
	Sleep(500);

	system("CLS");

	Sleep(1000);
	cout << "\n\t\t\t\t-------------------- ( A C T   2 ) --------------------\n\n"; Sleep(500);

	Sleep(1500);
	
	cout << "\n\nSince you received that horrible news, the rational and emotional aspects of your brain have been malfunctioning; you know you did a half-assed job of repairing the stations communication links, but you dont care; you begin travelling towards Earth, disregarding all of your responsibilities.";
	Sleep(1700);
	cout << "\n\nBefore going out, you have a bit of an itch, that you are forgetting something.. something important."; Sleep(1000);
	
	cout << "\n\n** YOU ARE FORGETTING ABOUT THE FUEL **\n\nTry writing any word about refueling the spaceship to make yourself remember: ";
	cin >> fuel;
	Sleep(1000);

	cout << "\n* " << fuel << " *\n"; Sleep(2000);
	cout << "\nIts just a faint thought, you cant remember it. You just brush it off, and get on your ship.\n"; Sleep(800);

	cout << "Enter any key and press enter to continue: ";
	cin >> cont;

	system("CLS");
	Sleep(1000);

	cout << "You finally remember that in rushing out of the station, you forgot to recharge your spaceship after youve covered half the distance. Your crew is in responsibility of maintaining oxygen levels and communicating with the command center.\n";
	Sleep(1000);
	cout << "The lack of fuel begins to disrupt the oxygen delivery. Your crewmates become enraged, and the situation becomes chaotic...";
	Sleep(800);

	cout << "\n\n'There would be enough oxygen for two people until the next outpost comes, guess we gotta leave you here' one of them taunts jokingly.\n";
	Sleep(500);

	cout << "That struck a nerve in you, youve alrady had enough.\n\nWhat do you do?\n\n";

	int choice3;

	cout << "1. Open up the vents and kill them.\n"; Sleep(400);
	cout << "2. Try to forget about it.\n"; Sleep(400);
	cout << "3. Say: We can make it, trust me\n"; Sleep(400);

	cout << "Selection: ";
	cin >> choice3;

	if (choice3 > 3) {
		Sleep(100);
		cout << "Please select the right choice!";
		Sleep(300);
		cho3();
	}
	else if (choice3 == 1) {
		Sleep(300);
		major1();
		
	}
	else if (choice3 == 2) {
		Sleep(300);
		major2();
		
	}
	else if (choice3 == 3) {
		Sleep(300);
		major3();
		
	}
}

void cho3() {

	system("CLS");
	Sleep(1000);
	
	int choice3;

	cout << "You finally remember that in rushing out of the station, you forgot to recharge your spaceship after youve covered half the distance. Your crew is in responsibility of maintaining oxygen levels and communicating with the command center.\n";
	Sleep(1000);
	cout << "The lack of fuel begins to disrupt the oxygen delivery. Your crewmates become enraged, and the situation becomes chaotic...";
	Sleep(800);

	cout << "\n\n'There would be enough oxygen for two people until the next outpost comes, guess we gotta leave you here' one of them taunts jokingly.\n";
	Sleep(500);

	cout << "That struck a nerve in you, youve alrady had enough.\n\nWhat do you do?\n\n";

	cout << "1. Open up the vents and kill them.\n"; Sleep(400);
	cout << "2. Try to forget about it.\n"; Sleep(400);
	cout << "3. Say: We can make it, trust me\n"; Sleep(400);

	cout << "Selection: ";
	cin >> choice3;

	if (choice3 > 3) {
		Sleep(100);
		cout << "Please select the right choice!";
		Sleep(300);
		cho3();
	}
	else if (choice3 == 1) {
		Sleep(300);
		major1();

	}
	else if (choice3 == 2) {
		Sleep(300);
		major2();

	}
	else if (choice3 == 3) {
		Sleep(300);
		major3();

	}

}

void major1() {

	system("CLS");

	int mchoice1;

	cout << "\n\nYou slowly grab your portable oxygen and get into the chamber and crank the lever that’d open the vents. You watch them as they struggle and one calls for emergency, there’s no going back.\nThey both die. You killed people just because your rage shadowed you.";
	Sleep(1000);
	cout << "\n\nPrecious human lives. There’s already a scarcity of them.";
	cout << "\nYou stumble across the space ship to process this.";
	Sleep(3000);
	cout << "\n\nYou want to see your kids and wife one last time, as you move around to see the main controls, the crime youve done haunts you. Two bodies right there. Lifeless.";
	Sleep(1000);

	cout << "\n\nDecide what you do next:";
	cout << "\n\n1. Turn yourself in.\n"; Sleep(400);
	cout << "\n2. Throw them in space and move on.\n"; Sleep(400);

	cout << "Selection: ";
	cin >> mchoice1;

	if (mchoice1 > 2) {
		Sleep(100);
		cout << "Please select the right choice!";
		Sleep(300);
		major1();
	}
	else if (mchoice1 == 1) {
		Sleep(300);
		cout << "\nYou race towards the next outpost as your fuel is running out, you send a message to the authorities 'I killed my crewmates'. "; Sleep(1000);
		cout << "Youre close to the outpost, just a few months away, but your fuel situation doesnt look too optimistic, itd only last three weeks at most. Keep going, the authorities would cut off my connection the moment they get my message. Keep going.";
		majorp1();
	}
	else if (mchoice1 == 2) {
		Sleep(300);
		cout << "\nYou want to see your wife and kids, for the last time. You can make it as there are less resources needed for just a single person. "; Sleep(1000);
		cout << "Youre close to the outpost, just a few months away, but your fuel situation doesnt look too optimistic, itd only last three weeks at most.\n\nKeep going.";
		majorp1();
	}
}

void majorp1() {
	string cont;

	cout << "\n\nEnter any key and press ENTER to continue... ";
	cin >> cont;

	Sleep(1500);
	system("CLS");

	cout << "'We found out what youve done, always saw that in you, too bad youre one of our top ranked men but we cant keep a murderer with us'";
	cout << "\n\nSo they got the emergency message..";

	Sleep(1000);

	cout << "You wait for the fuel to run out as the spaceship runs in autopilot. "; Sleep(1400); cout << "The lack of oxygen puts you to sleep.\n\n";
	Sleep(1000);
	cout << "So this is it, this is how it ends?\n";
	cout << "."; Sleep(1000); cout << "."; Sleep(1000); cout << "."; Sleep(2000);

	cout << "Enter any key and press ENTER to continue... ";
	cin >> cont;

	system("CLS");
	Sleep(1500);

	cout << "\nAfter what seems like an eternity, you awaken in what appears to be a hospital, surrounded by a wall of equipment.\n\n";
	Sleep(1500);
	cout << "'Youre finally awake.' You hear a voice. Its a digital nurse.\n";
	Sleep(1500);
	cout << "'We have been studying you for 60 years.'\n\n"; Sleep(500);
	cout << "'Where the hell am I?' you exclaim, feeling paralyzed and weak.\n"; Sleep(1500);

	cout << "'Dont worry about it. We will put you to sleep before you even think about doing anything.\n\n'";

	int choice;

	cout << "1. Struggle out of it.\n"; Sleep(400);
	cout << "2. Ask the nurse whats happening.\n"; Sleep(400);
	cout << "Selection: ";
	cin >> choice;
	
	if (choice > 2) {
		Sleep(100);
		cout << "Please select the right choice!";
		Sleep(300);
		majorp1();
	}
	else if (choice == 1) {
		Sleep(1500);
		cout << "\n\nYou try to struggle out of the machine you’re enclosed in, the food tubes and heavy metal equipment are closely packed with you. You start to feel claustrophobic as the machines get closer to you, and the space becomes tighter.. and tighter… 'just count to three' says the digital nurse with its robotic female voice. One..two..three..";
		Sleep(2000);
		cout << "\n\n------* ( __#- +#@! IIIA..;AAAA P,---- )0x*69420 _000(===+*------"; Sleep(500);
		cout << "\n------* ( __#- +ewe owo IIIA{UwU}AA P,---- )0x*69420 _000(===+*------"; Sleep(500);
		cout << "\n------* ( 546f --- =@! IIIA..;AAAA P,---- )0x*69420 _000(===+*------\n\n"; Sleep(500);

		cout << "…… Its just a regular day on your spaceship, you and two of your crew members are buckled up for your two year trip, you get the machine going and the journey is started. You get a call from the headquarters and pick you it up...";
		Sleep(3000);
		cout << "\n\n'Uh hello *STATIC* hello hello - this is the main office speaking, there has been an issue in the communication lines of the closest stations proximity, your orders are to put everything on halt and check that issue'";
		Sleep(2000);
		cout << "\n."; Sleep(1000); cout << "."; Sleep(1000); cout << "."; Sleep(3000);

		cout << "\n\nEnter any key and press ENTER to continue... ";
		cin >> cont;

		system("CLS");

		cout << "\t\t\t\t----------- ( ENDING 1 ) -----------";

		cout << "Enter any key and ENTER to continue...\n";
		cin >> cont;
		Sleep(2000);
		menu();
	}
	else if (choice == 2) {

		Sleep(1500);
		cout << "\n\nYou ask the nurse whats going on, any details would help.\n'where’s my family?'";
		Sleep(2000);
		cout << "\n\n'Just count to 3. If you made the proper decisions, youll be back with them.' says the Digital Nurse.";

		cout << "Enter any key and press Enter to count to 3... \n";
		cin >> cont;

		system("CLS");

		Sleep(1500);
		cout << "One.. "; Sleep(1000); cout << "Two.. "; Sleep(1000); cout << "Three.. \n"; Sleep(3000);

		cout << "…… Its just a regular day on your spaceship, you and two of your crew members are buckled up for your two year trip, you get the machine going and the journey is started. You get a call from the headquarters and pick you it up...";
		Sleep(1000);
		cout << "\n\n'Uh hello *STATIC* hello hello - this is the main office speaking, there has been an issue in the communication lines of the closest stations proximity, your orders are to put everything on halt and check that issue'";
		Sleep(1500);
		cout << "\n."; Sleep(1000); cout << "."; Sleep(1000); cout << "."; Sleep(3000);

		cout << "\n\nEnter any key and press ENTER to continue... ";
		cin >> cont;

		system("CLS");

		cout << "\t\t\t\t----------- ( ENDING 1 ) -----------";

		cout << "Enter any key and ENTER to continue...\n";
		cin >> cont;
		Sleep(2000);
		menu();
	}

}

void major2() {
	string cont;
	system("CLS");

	cout << "You ignore and continue with the journey, your crewmates are heated up. One of them threatens to leave you stranded in space and marches towards you with a wire cutter.";
	Sleep(1000);

	cout << "\n\nWhat do you do?\n\n";
	int choice;

	cout << "1. Try to keep the situation peaceful\n"; Sleep(400);
	cout << "2. Defend yourself.\n"; Sleep(400);
	cout << "Selection: ";
	cin >> choice;

	if (choice > 2) {
		Sleep(100);
		cout << "\nPlease select the right choice!";
		Sleep(300);
		major2();
	}
	else if (choice == 1) {
		Sleep(1000);
		cout << "\n\nYou try to keep the situation peaceful by waving the white flag, while hes moving towards you, you try to push him back. You use your persuasion techniques, but they aren't working this time. The oxygen levels are already scarce. He lands a solid punch on you and knocks you out and then...";
		Sleep(1500);
		cout << "\n\nYoure paralyzed, you cannot think. You cannot move. You do not have a soul outside the simulation. You have the void. Where all the deleted files go. The void of the simulation. Infinite nothingness.";
		Sleep(2000);
		cout << "\n\n-- ( ** BLACKOUT ** ) --\n\n";
		Sleep(2000);
		cout << "An unknown error has occurred. The connection from the outside world is lost. Simulation is shutting down.\n";
		for (int i = 59; i > 48; --i) {
			cout << "Time before shutdown 00:00:" << i << endl;
			Sleep(1000);
		}
		Sleep(2000);
		system("CLS");
		cout << "\t\t\t\t----------- ( ENDING 2 ) -----------";

		cout << "Enter any key and ENTER to continue...\n";
		cin >> cont;
		Sleep(2000);
		menu();

	}
	else if (choice == 2) {

		Sleep(1000);
		cout << "You try to defend yourself using whatever scrap material you can find.\n";
		Sleep(1000);
		cout << "Things are heating up quick, theres an adrenaline rush in you that ignores the lack of oxygen in the air. You start landing solid punches on him but then there it is.. The thought of your wife, who you dont know is alive or dead, and your precious kids who hadnt been past puberty yet.\n\n";
		Sleep(1000);
		cout << "'Is this what theyd want?' you think.\n\n";
		Sleep(500);
		cout << "1. Stop.\nSelection: ";
		cin >> cont;
		Sleep(500);
		cout << "\n\nThe thought of your wife and kids..\n"; Sleep(400);
		cout << "They would never want this..\n"; Sleep(400);
		cout << "Even if it aids them...\n"; Sleep(400);
		cout << "He lands a solid punch on you.\n"; Sleep(500);

		cout << "Enter any key and press ENTER to continue... ";
		cin >> cont;

		system("CLS");

		cout << "'Good job!' A male raspy voice sighs as you pass out. 'The simulation has ended.'\n";
		Sleep(1000);
		cout << "The holter monitor is the first thing you hear when you wake up. Youre surrounded by college students who are gazing at you with their mouths wide in surprise.\n\n";
		Sleep(3000);
		cout << "'THANK YOU for playing with us, what you just experienced was a simulation that feeds you false memories of a fake reality that your own mind develops and molds. Everything you're terrified of and everything you love has been put to the test. If you hadn't chosen anything different than you would in real life, you would have been locked in a never-ending cycle! I hope you had a good time working on our college assignment!'";
		Sleep(1000);
		cout << "\t\t\t\t\n\n----------- ( ENDING 3 ) -----------";

		cout << "Enter any key and ENTER to continue...\n";
		cin >> cont;
		Sleep(2000);
		menu();
		
	}

}

void major3() {
	system("CLS");

	int choice, cont;

	cout << "You try to convince them to work with you.\n";
	Sleep(3000);
	cout << "After trying to persuade them for a long time. The situation cooled down, as the spaceship raced towards the outpost on autopilot with whatever fuel it has, you get another message on your system from the Earths headquarters.\n\n";
	Sleep(2000);
	cout << "A message: \n";
	cout << "Your wife has passed away; by the time you receive this, it will be too late; her health had rapidly worsened since the last time she sent you a message, and she had only two months to live. We apologize for informing you while you are on duty, but it is your right to know. Our condolences";
	Sleep(5000);

	cout << "\n\n'What?' You exclaim 'This is a joke right? Theres no way' \n\n";

	cout << "What do you do?\n"; Sleep(400);
	cout << "1. End it all.\n";
	cout << "2. Keep it going.\nSelection: ";

	cin >> choice;

	if (choice > 2) {
		Sleep(100);
		cout << "Please select the right choice!";
		Sleep(300);
		major3();
	}
	else if (choice == 1) {
		Sleep(1500);
		cout << "This is done.\n\n"; 
		Sleep(1000);
		cout << "You end it, while your crewmates are sleeping to conserve oxygen you crank open the vents.\n\nThe freezing air slowly disintegrates both of your crewmate’s bodiesand yours.\nThere’s nothing left to survive for.\nThere’s no one.\n";
		Sleep(3000);
		cout << "This is the end.\n\n";
		Sleep(5000);
		cout << "Or is it...";

		cout << "\t\t\t\t\n\n----------- ( ENDING 4 ) -----------";

		cout << "Enter any key and ENTER to continue...\n";
		cin >> cont;
		Sleep(2000);
		menu();
	}
	else if (choice == 2) {

		Sleep(1500);
		cout << "\n\nYou keep going, while your crewmates are sleeping to conserve oxygen, you try to take it for the team and keep going. The oxygen levels aren’t on your side. You slowly start to lose consciousness. You look at a picture of your wife because at least, she will be with you while you take a journey to the end.";
		Sleep(4000);
		cout << "\t\t\t\t\n\n----------- ( ENDING 5 ) -----------";

		cout << "Enter any key and ENTER to continue...\n";
		cin >> cont;
		Sleep(2000);
		menu();
	}
}
