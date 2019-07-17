#include "Player.h"

void Player::setHealthPlayer(unsigned long pHealth) {
	playerHealth = pHealth;
}
unsigned long Player::getHealthPlayer() {
	return playerHealth;
}
void Player::setAttackPlayer(unsigned long pAttack) {
	playerAttack = pAttack;
}
unsigned long Player::getAttackPlayer() {
	return playerAttack;
}
void Player::setDefensePlayer(unsigned long pDefense) {
	playerDefense = pDefense;
}
unsigned long Player:: getDefensePlayer() {
	return playerDefense;
}
void Player::setMagicPlayer(unsigned long pMagic) {
	playerMagic = pMagic;
}
unsigned long Player::getMagicPlayer() {
	return playerMagic;
}
void Player::setMagicDefPlayer(unsigned long pMagicDef) {
	playerMagicDef = pMagicDef;
}
unsigned long Player:: getMagicDefPlayer() {
	return playerMagicDef;
}
void Player::setLevelPlayer(unsigned long pLevel) {
	playerLevel = pLevel;
}
unsigned long Player::getLevelPlayer() {
	return playerLevel;
}
Player::Player() {
	playerHealth = 10;
	playerLevel = 1;
	playerAttack = 1;
	playerDefense = 1;
	playerMagic = 1;
	playerMagicDef = 1;
}
