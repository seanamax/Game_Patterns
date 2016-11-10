//
// Created by Chris on 16/10/18.
//

#include "Command_Pattern.h"
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

Jack::Jack() {}
Jack::~Jack() {}
Marry::Marry() {}
Marry::~Marry() {}
Dean::~Dean() {}
Dean::Dean() {}
Chris::~Chris() {}
Chris::Chris() {}

JumpCommand::JumpCommand() {}
JumpCommand::~JumpCommand() {}
FireGunCommand::FireGunCommand() {}
FireGunCommand::~FireGunCommand() {}
SwapWeaponCommand::~SwapWeaponCommand() {}
SwapWeaponCommand::SwapWeaponCommand() {}
LurchIneffectivelyCommand::LurchIneffectivelyCommand() {}
LurchIneffectivelyCommand::~LurchIneffectivelyCommand() {}
InputHandler::InputHandler() {}
InputHandler::~InputHandler() {}

bool isPressed(BUTTON_KEY button)
{
    int randNum = rand()%5;
    BUTTON_KEY button_Tmp;
    if(randNum == 0) {
        button_Tmp = BUTTON_KEY::BUTTON_X;
    }
    else if(randNum == 1) {
        button_Tmp = BUTTON_KEY::BUTTON_Y;
    }
    else if(randNum == 2) {
        button_Tmp = BUTTON_KEY::BUTTON_A;
    }
    else if(randNum == 3) {
        button_Tmp = BUTTON_KEY::BUTTON_B;
    }
    else {
        button_Tmp = BUTTON_KEY::BUTTON_Null;
    }

    return button == button_Tmp;
}

Command * InputHandler::handleInput() {

    if(isPressed(BUTTON_KEY::BUTTON_X)) return buttonX_;
    if(isPressed(BUTTON_KEY::BUTTON_Y)) return buttonY_;
    if(isPressed(BUTTON_KEY::BUTTON_A)) return buttonA_;
    if(isPressed(BUTTON_KEY::BUTTON_B)) return buttonB_;
    return buttonNull_;
}

void Jack::jump() {
    cout << "Jack::jump()" << endl;
}

void Jack::fireGun() {
    cout << "Jack::fireGun()" << endl;
}

void Jack::swapWeapon() {
    cout << "Jack::swapWeapon()" << endl;
}

void Jack::lurchIneffectively() {
    cout << "Jack::lurchIneffectively()" << endl;
}

void Marry::jump() {
    cout << "Marry::jump()" << endl;
}

void Marry::fireGun() {
    cout << "Marry::fireGun()" << endl;
}

void Marry::swapWeapon() {
    cout << "Marry::swapWeapon()" << endl;
}

void Marry::lurchIneffectively() {
    cout << "Marry::lurchIneffectively()" << endl;
}

void Dean::jump() {
    cout << "Marry::lurchIneffectively()" << endl;
}

void Dean::fireGun() {
    cout << "Dean::fireGun()" << endl;
}

void Dean::swapWeapon() {
    cout << "Dean::swapWeapon()" << endl;
}

void Dean::lurchIneffectively() {
    cout << "Dean::lurchIneffectively()" << endl;
}

void Chris::jump()
{
    cout << "Chris::jump()" << endl;
}

void Chris::fireGun()
{
    cout << "Chris::fireGun()" << endl;
}

void Chris::swapWeapon()
{
    cout << "Chris::wapWeapon()" << endl;
}

void Chris::lurchIneffectively()
{
    cout << "Chris::lurchIneffectively()" << endl;
}

void JumpCommand::execute(GameActor &actor) {
    actor.jump();
}

void FireGunCommand::execute(GameActor &actor) {
    actor.fireGun();
}

void SwapWeaponCommand::execute(GameActor &actor) {
    actor.swapWeapon();
}

void LurchIneffectivelyCommand::execute(GameActor &actor) {
    actor.lurchIneffectively();
}

void NullCommand::execute(GameActor &actor) {
    // TODO
}