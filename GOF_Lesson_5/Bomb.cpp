
#include <iostream>

#include "Bomb.h"
#include "MyTools.h"
#include"Visitor.h"

using namespace std;
using namespace MyTools;

void Bomb::Draw() const
{
    MyTools::ScreenSingleton::getInstance().SetColor(CC_LightMagenta);
	ScreenSingleton::getInstance().GotoXY(x, y);
    cout << "*";
}

void Bomb::Accept(Visitor& obj)
{
	obj.visit(this);
}