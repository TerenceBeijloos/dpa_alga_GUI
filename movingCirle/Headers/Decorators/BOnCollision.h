#pragma once


class BOnCollision
{
public:
	BOnCollision() = default;
	virtual ~BOnCollision() = default;

	virtual bool executeCollision() {};
private:
	//TODO: wrappee: BaseOnCollisionDecorator
};

