#ifndef Header_H
#define Header_H

#include <iostream>
#include <string>

#endif 

using namespace std;

//Parts for Part 1 of the story
string GetTextFromUser(string prompt);
int GetNumbersFromUser(string prompt);
string getClassFromUser(string prompt);
void story1(string name, int age);
//In Between the story, the build up
void inBetweenStory();
//Parts for Part 2 of the story
char princess(string prompt);
void story2(char choice);
//Parts for Part 3 of the story
char jumpOrFight(string prompt);
void story3(char choice,string job);
//Parts for Part 4 of the story
void story4(string name);
//In Between the story, the second build up
void inBetweenStory2();
//Parts for Part 5 of the story
char OldManHelp(string prompt);
void story5(char choice, string job);
void oldManMoneyReward(int& x, int& y);
//Parts for the Part 6 of the story
char goToEnonia(string prompt);
void story6(char choice);
//To a new game or not
char startOver(string prompt);