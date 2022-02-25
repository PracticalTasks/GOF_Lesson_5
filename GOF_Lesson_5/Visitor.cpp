#include "Visitor.h"

void LogVisitor::visit(Bomb* obj)
{
	FileLoggerSingleton::getInstance().WriteToLog("Bomb's X-coordinat: ",obj->GetX());
	FileLoggerSingleton::getInstance().WriteToLog("Bomb's Y-coordinat: ", obj->GetY());
	FileLoggerSingleton::getInstance().WriteToLog("Bomb speed: ", obj->GetSpeed());
	FileLoggerSingleton::getInstance().WriteToLog("Bomb X direction: ", obj->GetDirectionX());
	FileLoggerSingleton::getInstance().WriteToLog("Bomb Y direction: ", obj->GetDirectionY());
}

void LogVisitor::visit(Plane* obj)
{
	FileLoggerSingleton::getInstance().WriteToLog("Plane's X-coordinat: ", obj->GetX());
	FileLoggerSingleton::getInstance().WriteToLog("Plane's Y-coordinat: ", obj->GetY());
	FileLoggerSingleton::getInstance().WriteToLog("Plane speed: ", obj->GetSpeed());
	FileLoggerSingleton::getInstance().WriteToLog("Plane X direction: ", obj->GetDirectionX());
	FileLoggerSingleton::getInstance().WriteToLog("Plane Y direction: ", obj->GetDirectionY());
}