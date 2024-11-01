#pragma once
#include <string>
#include <vector>
using namespace std;

class Skill {
	string skillName;
	unsigned int skillLevel;
};

class Hero {
	string heroName;
	unsigned int heroHealth;
	unsigned int heroMana;
	unsigned int heroLevel;
	vector<Skill*> skillList;
};
