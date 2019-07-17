#pragma once
class Mobs
{
private:
	unsigned long health, attack, defense, magic, magic_def, level;

public:

	void setHealth(unsigned long sHealth);
	unsigned long getHealth();
	void setAttack(unsigned long sAttack);
	unsigned long getAttack();
	void setDefense(unsigned long sDefense);
	unsigned long getDefense();
	void setMagic(unsigned long sMagic);
	unsigned long getMagic();
	void setMagicDef(unsigned long sMagicDef);
	unsigned long getMagicDef();
	void setLevel(unsigned long sLevel);
	unsigned long getLevel();
	Mobs();
		
};
