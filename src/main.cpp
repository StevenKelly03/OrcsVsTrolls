#include <iostream>

#include <./include/Orc.h>
#include <./include/Troll.h>

using namespace std;

int main() {
	cout << "Let go virtual" << endl;

	// Uncompile and understand the errors produced
	//Character character;
	//character.flip();
	//character.walk();

	cout << "Let go create an Orc" << endl;
	Orc orc;
	orc.walk();
	orc.fly();
	orc.flip();

	cout << "Let go create an Troll" << endl;
	Troll troll;
	troll.walk();
	troll.fly();
	troll.flip();

	Character* npc = &orc;
	npc->flip(); // Bound at compile time -> action based on type
	npc->fly();  // Bound at runtime -> action based on pointer
	npc->walk();

	npc = &troll;
	npc->flip(); // Bound at compile time -> action based on type
	npc->fly();  // Bound at runtime -> action based on pointer
	npc->walk();

	cin.get();

}