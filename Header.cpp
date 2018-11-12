#include <string>
#include <iostream>
#include "Header.h"

using namespace std;

//Get User's name
string GetTextFromUser(string prompt) {
	string name;
	cout << prompt;
	cin >> name;
	return name;
}

//Get User's age
int GetNumbersFromUser(string prompt) {
	int num;
	cout << prompt;
	cin >> num;
	return num;
}

//Gets User's Job
string getClassFromUser(string prompt) {
	string job;
	cout << prompt;
	cin >> job;
	return job;
}

//First part of the story
void story1(string name, int age) {
	cout << "\nWelcome " << name << ", to the XayZideo.\n";
	cout << "Here is the start of your journey.\n";
	//Different age different pronouciation
	if (age < 21) {
		cout << "Here is where you will make a name for yourself, youngster.\n";
	}
	else {
		cout << "Here is where us warriors will make a name for ourselves, mate.\n";
	}
	cout << "My name is Draguon. It's been a pleasure of meeting you.\n";
	cout << "Now off you go!\n";
	cout << "MAKE THE WORLD KNOWN OF THE NAME!\n";
	cout << name << "!!!" << endl;
}

//Story in between the actions
void inBetweenStory() {
	cout << "\nYou spawn at a random location.";
	cout << "\nYou take a look around explore around.";
	cout << "\nYou were spawned in the middle of a forest.";
	cout << "\nYou decided to head towards a direction";
	cout << "\nin hoping of finding a village or city.";
	cout << "\nAfter sometime, you were able to walk out of the forest";
	cout << "\nonto a dirt road that was paved for travelers and adventurers.";
	cout << "\nAll of a sudden! You hear a scream...";
	cout << "\nAHHHHHHHHHHH! you hear";
	cout << "\nAnd a cry for help...";
	cout << "\nYou look around in search for that voice.";
}

//Gets User decision for saving the princess
char princess(string prompt) {
	cout << "\nYou see a girl getting chased by bandits on horses." << endl;
	cout << prompt << endl;
	char save;
	cin >> save;
	return save;
}

//Second part of the story
void story2(char choice) {
	if (toupper(choice) == 'Y') {
		cout << "\nYou have decided to save the girl.";
		cout << "\nYou ran to the girl's rescue,";
		cout << "\ntook her by the hands,";
		cout << "\nand ran into the forest.";
		cout << "\nYou ran and gets cornered on the side of a cliff.\n";
	}
	else {
		cout << "\nYou decided not to save the girl.";
		cout << "\nThe bandits caught up to her";
		cout << "\nkilled her.";
		cout << "\nYou then catches the bandits' eye.";
		cout << "\nThe bandits needs to have no witnesses";
		cout << "\nSo they decide to kill you as well.";
		cout << "\nThat marks the end of your story";
	}
}

//Gets User decision to jump or fight
char jumpOrFight(string prompt) {
	cout << "\nYou are surrounded.";
	cout << "\nAs you stand in front of the girl,";
	cout << "\nyour mind is racing.";
	cout << "\nYou come to one of two choices.";
	cout << "\nYou either take a leap of faith and jump";
	cout << "\nor you fight to your dying breath.\n";
	cout << prompt;
	char decision;
	cin >> decision;
	return decision;
}

//Third part of the story
void story3(char choice,string job) {
	if (tolower(choice) == 'j') {
		cout << "\nYou decided to jump.";
		cout << "\nYou turn around and grab the girl's hand.";
		cout << "\nShe looks at you with hopeless eyes.";
		cout << "\nYou smile and tell the girl,";
		cout << "\nTrust me.";
		cout << "\nAnd then the girl and you jumps off the cliff";
		cout << "\n................";
		cout << "\nYou open your eyes.";
		cout << "\nYou wake up in on a bed in a unknown village.";
		cout << "\nYou find out that the girl was taken back by her family.";
		cout << "\nShe also left a message for you.";
		cout << "\nIt said thank you for saving her life.";
		cout << "\nIf you ever travel to Excidal,";
		cout << "\nask for Enonia." << endl;
	}
	else if (tolower(choice) == 'f') {
		cout << "\nYou decide to fight.";
		cout << "\nOne of the bandits got cocky";
		cout << "\nand decided to fight you 1 on 1";
		//Output for Knight Job Class
		if (job.compare("knight")==0||job.compare("Knight")==0){
			cout << "\nYou manage to kill the bandit and take his sword.";
			cout << "\nThe other bandits witness this and decided to all charge at you.";
			cout << "\nAs you put the girl behind you, you charge to meet them.";
			cout << "\nEyes red, head clear, you trade one wound for a life.";
			cout << "\nAfter fighting valiantly, you manage to kill every one of the bandits.";
			cout << "\nYou saved the girl.";
			cout << "\nYou fainted due to the countless wounds you received.";
			cout << "\n................";
			cout << "\nYou wake up in on a bed in a unknown village.";
			cout << "\nYou find out that the girl was taken back by her family.";
			cout << "\nShe also left a message for you.";
			cout << "\nIt said thank you for saving her life.";
			cout << "\nIf you ever travel to Excidal,";
			cout << "\nask for Enonia." << endl;
		}
		//Output for Archer Job Class
		else if (job.compare("archer") == 0 || job.compare("Archer") == 0) {
			cout << "\nYou manage to kill the bandit and take his bow and arrow.";
			cout << "\nThe other bandits witness this and decided to all charge at you.";
			cout << "\nAs you put the girl behind you, you blink towards them.";
			cout << "\nAs your eyes turn cold, one bandit after another.";
			cout << "\nThey all fall as you maneuver around the battlefield.";
			cout << "\nYou try to avoid the strikes but you can only dodge so many.";
			cout << "\nAfter fighting valiantly, you manage to kill every one of the bandits.";
			cout << "\nYou saved the girl.";
			cout << "\nYou fainted due to the countless wounds you received.";
			cout << "\n................";
			cout << "\nYou wake up in on a bed in a unknown village.";
			cout << "\nYou find out that the girl was taken back by her family.";
			cout << "\nShe also left a message for you.";
			cout << "\nIt said thank you for saving her life.";
			cout << "\nIf you ever travel to Excidal,";
			cout << "\nask for Enonia." << endl;
			

		}
		//Output for Mage Job Class
		else if (job.compare("mage") == 0 || job.compare("Mage") == 0) {
			cout << "\nYou manage to kill the bandit and a word sparked in your head.";
			cout << "\nYou hold out your hand, pointing to one of the bandits.";
			cout << "\nYou yelled - Aihnfze!";
			cout << "\nThe moment those words came out of your mouth";
			cout << "\nA fireball double the side of your hand shoots out";
			cout << "\nAnd hit the bandit your hand was pointing to.";
			cout << "\nThe bandit gets incinerated";
			cout << "\nThe other bandits witness this and decided to all charge at you.";
			cout << "\nAfter casting one fireball after another, you manage to kill every one of the bandits.";
			cout << "\nYou saved the girl.";
			cout << "\nYou fainted due over mana depletion.";
			cout << "\n................";
			cout << "\nYou wake up in on a bed in a unknown village.";
			cout << "\nYou find out that the girl was taken back by her family.";
			cout << "\nShe also left a message for you.";
			cout << "\nIt said thank you for saving her life.";
			cout << "\nIf you ever travel to Excidal,";
			cout << "\nask for Enonia." << endl;
		}
	}
}

//Fourth part of the story
void story4(string name) {
	cout << "\nAfter resting up,";
	cout << "\nYou take off once again";
	cout << "\non your journey to";
	cout << "\nmake a name for yourself.";
	cout << "\nWith the Sun up high above your head";
	cout << "\nand the village behind you,";
	cout << "\nyou take off on one of the horses";
	cout << "\nthat the villages gave you.";
	cout << "\nThis marks the beginning";
	cout << "\nof your tale, " << name;
	cout << "\nThere is much more to come.";
	cout << "\nMonsters, demons, even other people";
	cout << "\nare waiting for your arrival";
	cout << "\n\n";
}

//Story in between the actions 2
void inBetweenStory2() {
	cout << "3 months later......\n";
	cout << "\n";
	cout << "\nYou have traveled to a few towns and cities.";
	cout << "\nFrom 3 months to now, you have used up all your coins.";
	cout << "\nYou are broke as of right now.";
	cout << "\nYou decide to go to the next nearby city";
	cout << "\nand see if there are some quest you can do";
	cout << "\nto earn some coins for you travel.";
}

//Gets User decision to help or not help the old man
char OldManHelp(string prompt) {
	cout << "\nYou run into an old man in desperate need of a help.";
	cout << "\nHis mansion is being overrunned by monsters.";
	cout << prompt << endl;
	char choice;
	cin >> choice;
	return choice;
}

//Fifth part of the story
void story5(char choice, string job) {
	if (toupper(choice) == 'Y') {
		cout << "You decide to help the poor old man.";
		cout << "\nYou venture to his mansion to see a brutal sight.";
		cout << "\nHordes of Fenrirs running around.";
		cout << "\nWith their flaming furs, these wolf monsters";
		cout << "\nare setting everthing on fire.";
		cout << "\nAs you take one step pass the gates";
		cout << "\nall the Fenrirs stop in their track";
		cout << "\nand turned to face their intruder";
		if (job.compare("knight") == 0 || job.compare("Knight") == 0) {
			cout << "\nAs you unsheathe your sword";
			cout << "\nthe Fenrirs let out a wave of roars.";
			cout << "\nThe Fenrirs and you both charge";
			cout << "\nat each other, ready to kill.";
			cout << "\nAfter 3 months, you are not the";
			cout << "\nnew adventurer anymore,";
			cout << "\nyou are experienced and skillful.";
			cout << "\nOne by one, the Fenrirs are killed.";
			cout << "\nWith little to no damage";
			cout << "\nYou have eliminated all the Fenrirs.";
			cout << "\nYou saved the old man's mansion.";
			cout << "\nHe thanks you and gives you his life's savings.\n";
		}
		else if (job.compare("archer") == 0 || job.compare("Archer") == 0) {
			cout << "\nAs you ready your bow and arrow";
			cout << "\nthe Fenrirs let out a wave of roars.";
			cout << "\nThe Fenrirs charge as you maneuver";
			cout << "\naround the fields.";
			cout << "\nAfter 3 months, you are not the";
			cout << "\nnew adventurer anymore,";
			cout << "\nyou are experienced and skillful.";
			cout << "\nOne by one, the Fenrirs are killed.";
			cout << "\nWith little to no damage";
			cout << "\nYou have eliminated all the Fenrirs.";
			cout << "\nYou saved the old man's mansion.";
			cout << "\nHe thanks you and gives you his life's savings.\n";
		}
		else if (job.compare("mage") == 0 || job.compare("Mage") == 0) {
			cout << "\nAs you ready your words";
			cout << "\nthe Fenrirs let out a wave of roars.";
			cout << "\nThe Fenrirs charge as you threw";
			cout << "\none spell after another.";
			cout << "\nAfter 3 months, you are not the";
			cout << "\nnew adventurer anymore,";
			cout << "\nyou are experienced and skillful.";
			cout << "\nOne by one, the Fenrirs are killed.";
			cout << "\nWith little to no damage";
			cout << "\nYou have eliminated all the Fenrirs.";
			cout << "\nYou saved the old man's mansion.";
			cout << "\nHe thanks you and gives you his life's savings.\n";
		}
	}
	else {
		cout << "\nYou decide not to help the old man";
		cout << "\nAs you walk away, the old man begs";
		cout << "\nAnd looks at you with he eyes";
		cout << "\nFilled with hopelessness";
		cout << "\nHe curses you and runs towards the nearest town/city";
		cout << "\nIn search for help.";
		cout << "\nYou keep traveling as you see somewhere in to the east";
		cout << "\nClouds of smoke has rose into the sky.";
		cout << "\nIt seems somewhere in the east, a fire has started.";
		cout << "\nYou hurry along, making distance";
		cout << "\nbetween you, the fire, and the old man.";
	}
}

//To transfer the money from the old man to the User
void oldManMoneyReward(int& x, int& y) {
	int temp = x;
	x = y;
	y = temp;
}

//Gets User's decision to travel to Excidal or not
char goToEnonia(string prompt) {
	cout << "\nAs you lay down to rest in the woods.";
	cout << "\nYou think about the girl that you saved.";
	cout << "\nYou recall her name being Enonia.";
	cout << "\nYou think about whether or not";
	cout << "\nTo travel to Excidal,";
	cout << "\ntravel to her.";
	cout << prompt;
	char choice;
	cin >> choice;
	return choice;
}

//Sixth part of the story
void story6(char choice) {
	if (toupper(choice) == 'Y') {
		cout << "\nYou decide to travel to Excidal.";
		cout << "\nThe next morning comes.";
		cout << "\nAs you clear your campsite,";
		cout << "\nA gigantic dark shadow flies by.";
		cout << "\nYou duck and look up to see";
		cout << "\na majestic being";
		cout << "\nwith a body as dark as night";
		cout << "\na head with two spikes lashing out";
		cout << "\na tail shaped like an arror's tip";
		cout << "\nIt's a being of ancient times";
		cout << "\nOne that was supposed cease to exist";
		cout << "\nA DRAGON!";
		cout << "\nAs it lets out its powerful roar";
		cout << "\nThe dragon flies away";
		cout << "\nDisappearing into the skies above";
		cout << "\nAfter recovering from that sighting,";
		cout << "\nYou pack up your stuff.";
		cout << "\nWith the maps in your hands,";
		cout << "\nAnd the winds by your side";
		cout << "\nYou start your travel to Excidal.";
		cout << "\nWith no idea of what's awaits for you";
		cout << "\nIn Excidal.";
		cout << "\nYour story has only just begun.";
		cout << "\nYour adventure, your story,";
		cout << "\nyour....Legend has yet";
		cout << "\nto be told....";
		cout << "\nTo be continue.............";
	}
	else {
		cout << "\nYou decide not to go to Excidal.";
		cout << "\nThe next morning comes.";
		cout << "\nAs you clear your campsite,";
		cout << "\nA gigantic dark shadow flies by.";
		cout << "\nYou duck and look up to see";
		cout << "\na majestic being";
		cout << "\nwith a body as dark as night";
		cout << "\na head with two spikes lashing out";
		cout << "\na tail shaped like an arror's tip";
		cout << "\nIt's a being of ancient times";
		cout << "\nOne that was supposed cease to exist";
		cout << "\nA DRAGON!";
		cout << "\nAs it lets out its powerful roar";
		cout << "\nThe dragon flies away";
		cout << "\nDisappearing into the skies above";
		cout << "\nAfter recovering from that sighting,";
		cout << "\nYou pack up your stuff.";
		cout << "\nand continues your adventure,";
		cout << "\nyour story, your...legend...";
		cout << "\nTo be continue.............";
	}
}

//Gets User's decision to start a new game or not
char startOver(string prompt) {
	char answer;
	cout << prompt;
	cin >> answer;
	return answer;
}