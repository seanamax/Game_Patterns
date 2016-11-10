//
// Created by Chris on 16/10/18.
//

#ifndef PROJECT_COMMAND_PATTERN_H
#define PROJECT_COMMAND_PATTERN_H

#include <memory>

enum class BUTTON_KEY
{
    BUTTON_X,
    BUTTON_Y,
    BUTTON_A,
    BUTTON_B,
    BUTTON_Null
};

bool isPressed(BUTTON_KEY button);

class GameActor
{
public:
    virtual ~GameActor() {}
    virtual void jump() = 0;
    virtual void fireGun() = 0;
    virtual void swapWeapon() = 0;
    virtual void lurchIneffectively() = 0;

};

class Command
{
public:
    virtual ~Command() {}
    virtual void execute(GameActor& actor) = 0;
};


class InputHandler
{
public:
    Command *handleInput();

    // Methods to bind commands...
    InputHandler();
    ~InputHandler();
    InputHandler(Command *button_X, Command *button_Y, Command *button_A, Command *button_B) :
            buttonX_(button_X), buttonY_(button_Y), buttonA_(button_A), buttonB_(button_B) {}

private:
    Command *buttonX_;
    Command *buttonY_;
    Command *buttonA_;
    Command *buttonB_;
    Command *buttonNull_;
 };


class Jack : public GameActor
{
public:

    ~Jack();
    Jack();

    void jump();
    void fireGun();
    void swapWeapon();
    void lurchIneffectively();
};

class Marry : public GameActor
{
public:

    ~Marry();
    Marry();

    void jump();
    void fireGun();
    void swapWeapon();
    void lurchIneffectively();
};

class Chris : public GameActor
{
public:

    ~Chris();
    Chris();

    void jump();
    void fireGun();
    void swapWeapon();
    void lurchIneffectively();
};

class Dean : public GameActor
{
public:

    ~Dean();
    Dean();

    void jump();
    void fireGun();
    void swapWeapon();
    void lurchIneffectively();
};

class JumpCommand : public Command
{
public:

    ~JumpCommand();
    JumpCommand();

    void execute(GameActor& actor);
};

class FireGunCommand : public Command
{
public:

    ~FireGunCommand();
    FireGunCommand();

    void execute(GameActor& actor);
};

class SwapWeaponCommand : public Command
{
public:

    ~SwapWeaponCommand();
    SwapWeaponCommand();

    void execute(GameActor& actor);
};

class LurchIneffectivelyCommand : public Command
{
public:

    ~LurchIneffectivelyCommand();
    LurchIneffectivelyCommand();

    void execute(GameActor& actor);
};

class NullCommand : public Command
{
public:

    ~NullCommand();
    NullCommand();

    void execute(GameActor& actor);
};

#endif //PROJECT_COMMAND_PATTERN_H
