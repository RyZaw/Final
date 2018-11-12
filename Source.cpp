//Final Project
//This program is an interactive story in which the user
//gets to pick how the story goes
//and allows the user to choose choices
//and classes.

#include "Header.h"

using namespace std;

//These classes are for the adventure class types in what kind of job the User wants to be
//base class
class Adventure {
protected:
	string name;
	int age;
public:
	Adventure() {

	}
	Adventure(string N, int A) {
		name = N;
		age = A;
	}
	void setName(string N) {
		name = N;
	}
	void setAge(int A) {
		age = A;
	}
	string getName() {
		return name;
	}
	int getAge() {
		return age;
	}
	void display() {
		cout << "Adventure name: " << name << endl;
		cout << "Age: " << age << endl;
	}
}; //End of class Adventure

//derived classes
class classType : public Adventure {
private:
	string job;
	int money;
public:
	classType() {

	}
	classType(string N, int A, string J) : Adventure(N, A) {
		Adventure(N, A);
		job = J;
	}
	void setJob(string J) {
		job = J;
	}
	string getJob() {
		return job;
	}
	void setMoney(int M) {
		money = M;
	}
	int getMoney() {
		return money;
	}
	void display() {
		Adventure::display();
		cout << "Class Type: " << job << endl;
		cout << "Currency: " << money << endl;
	}
};

int main(void) {
	gamestart:
	//Story Part 1
	cout << "Answer the following questions to start your adventure!\n";
	//Gets User name preference
	string name = GetTextFromUser("\nWelcome traveler. What is your name? ");
	//Gets User age preference
	int age = GetNumbersFromUser("I see I see...How old are you, mate? ");
	//Allows the User to choose from three different classes.
	string job = getClassFromUser("Knight, Archer, and Mage. Which class do you choose? ");
	cout << "\n";
	//This creates the User's character profile
	classType character1;
	character1.setName(name);
	character1.setAge(age);
	character1.setJob(job);
	character1.setMoney(1000);
	//This prints out the character profile information
	cout << "This is your information: \n";
	character1.display();
	cout << "\n";
	//This is the beginning of the story
	story1(name, age);
	//In between actions
	cout << "\n";
	inBetweenStory();
	//Story Part 2
	cout << "\n";
	char princessSaving = princess("Do you save the girl? Y/N");
	//Clears console for better reading
	system("CLS");
	story2(princessSaving);
	//Decides on the adventure's decision.
	if (toupper(princessSaving) == 'N') {
		cout << "\nYou have died....\n";
		char sOver = startOver("Would you like to a new game? Y/N");
		while (toupper(sOver) != 'Y' || toupper(sOver) != 'N') {
			if (tolower(sOver) == 'y') {
				cout << "\n";
				system("CLS");
				goto gamestart;
			}
			else if (tolower(sOver) == 'n') {
				cout << "\nYour adventures has ended.";
				cout << "\nYou have went down known as the adventure";
				cout << "\nwho was unlucky.";
				cout << "\nThe adventure who came in contact with bandits";
				cout << "\nand was killed.\n";

				system("pause");
				return 0;
			}
			else {
				cout << "Please enter Y or N." << endl;
				cin >> sOver;
			}
		}
	}
	//Story Part 3
	char JF = jumpOrFight("Do you jump or fight? J/F ");
	//Clear console for better reading
	system("CLS");
	story3(JF,job);

	//Pauses and clears the console for better reading
	system("pause");
	system("CLS");

	//Story Part 4
	story4(name);

	//Pauses and clears the console for better reading
	system("pause");
	system("CLS");

	cout << "\n";
	//In between actions 2
	inBetweenStory2();

	cout << "\n";
	
	//Story 5: This is where the User can decide to help the old man or not
	//Although helping the old man gives a huge reward.
	char oldMan = OldManHelp("Do you decide to help this man? Y/N ");
	//Clear console for better reading
	system("CLS");
	story5(oldMan,job);
	if (tolower(oldMan) == 'y') {
		int yourMoney = 25;
		int oldManMoney = 1000000;
		oldManMoneyReward(yourMoney, oldManMoney);
		character1.setMoney(yourMoney);
	}

	//Pauses and clears the console for better reading
	system("pause");
	system("CLS");

	//This outputs your current character profile information
	cout << "\n.............................\n";
	cout << "\nThis is your current status\n";
	character1.display();
	cout << "\n.............................\n";

	cout << "\n";

	//Story 6: This is where you meet the first dragon
	//And decide if you want to travel to meet the girl that you saved
	char goToExcidal = goToEnonia("Do you travel to Excidal in search for Enonia? Y/N ");
	//Clear console for better reading
	system("CLS");
	story6(goToExcidal);

	cout << "\n";

	//Asking User if you want to start a new game
	char newGame = startOver("\nWould you like to a new game? Y/N ");
	//If the User wants to start a new game, This line of code
	//clears the console for a fresh clean start.
	if (toupper(newGame) == 'Y') {
		system("CLS");
		goto gamestart;
	}
	else {
		system("pause");
		return 0;
	}

	//Pauses the console for it to not automatically exit the program
	system("pause");
	return 0;
}