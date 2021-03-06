#pragma once

#include "GameBehaviour.h"


class TestBehaviour : public GameBehaviour
{
public:
	TestBehaviour();
	~TestBehaviour();

	virtual void		Start() override;
	virtual void		Update() override;
	virtual void		Release() override;

private:

	float		_test		= 0.0f;
	float		_test2		= 0.0f;
};

