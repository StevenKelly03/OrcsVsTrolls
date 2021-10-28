#include <iostream>

#include <./include/Orc.h>
#include <./include/Troll.h>

using namespace std;

int main() {
	cout << "Let go virtual" << endl;
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
	npc->flip();
	npc->fly();
	npc->walk();

	npc = &troll;
	npc->flip();
	npc->fly();
	npc->walk();

	cin.get();

}