#pragma once
#include<vector>
#include<memory>
#include"DynamicObject.h"
#include"DestroyableGroundObject.h"

//class DestroyableGroundObject;

class Bomb : public DynamicObject
{
public:
	static const uint16_t BombCost = 10; // стоимость бомбы в очках
	std::vector<std::unique_ptr<DestroyableGroundObject>> vecDestObj;

	void Draw() const override;
	void Accept(Visitor& obj)override;
	void AddObserver(std::unique_ptr<DestroyableGroundObject> addPtr);
};

