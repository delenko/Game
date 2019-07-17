#include "Mobs.h"



	void Mobs::setHealth(unsigned long sHealth) {
		health = sHealth;
	}
	unsigned long Mobs::getHealth() {
		return health;
	}
	void Mobs::setAttack(unsigned long sAttack) {
		attack = sAttack;
	}
	unsigned long Mobs::getAttack() {
		return health;
	}
	void Mobs::setDefense(unsigned long sDefense) {
		defense = sDefense;
	}
	unsigned long Mobs::getDefense() {
		return defense;
	}
	void Mobs::setMagic(unsigned long sMagic) {
		magic = sMagic;
	}
	unsigned long Mobs::getMagic() {
		return magic;
	}
	void Mobs::setMagicDef(unsigned long sMagicDef) {
		magic_def = sMagicDef;
	}
	unsigned long Mobs::getMagicDef() {
		return magic_def;
	}
	void Mobs::setLevel(unsigned long sLevel) {
		level = sLevel;
	}
	unsigned long Mobs::getLevel() {
		return level;
	}
	Mobs::Mobs() {
		health = 1;
		attack = 1;
		defense = 1;
		magic = 1;
		magic_def = 1;
		level = 1;
	}

