#pragma once
class Player
{
private: 
	unsigned long playerHealth, playerAttack, playerDefense, playerMagic, playerMagicDef, playerLevel;
		 
public:
	void setHealthPlayer(unsigned long pHealth);
	unsigned long getHealthPlayer();
	void setAttackPlayer(unsigned long pAttack);
	unsigned long getAttackPlayer();
	void setDefensePlayer(unsigned long pDefense);
	unsigned long getDefensePlayer();
	void setMagicPlayer(unsigned long pMagic);
	unsigned long getMagicPlayer();
	void setMagicDefPlayer(unsigned long pMagicDef);
	unsigned long getMagicDefPlayer();
	void setLevelPlayer(unsigned long pLevel);
	unsigned long getLevelPlayer();
	Player();

	
};
