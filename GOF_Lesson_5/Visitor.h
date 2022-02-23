#pragma once
#include"Bomb.h"
#include"Plane.h"
#include"MyTools.h"

using namespace MyTools;


class Visitor
{
public:
	virtual void visit(Bomb* obj) = 0;
	virtual void visit(Plane* obj) = 0;
};

class LogVisitor : public Visitor
{
public:
	void visit(Bomb* obj) override;
	void visit(Plane* obj) override;

};