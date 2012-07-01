////////////////////////////////////////////////////////////////////////
// Collisionable.cpp
// Super Mario Project
// Copyright (C) 2011  
// Lionel Joseph lionel.r.joseph@gmail.com
// Olivier Guittonneau openmengine@gmail.com
////////////////////////////////////////////////////////////////////////

#include "Collisionable.hpp"

namespace Collisions
{
	Collisionable::~Collisionable()
	{

	}

	Vector2f& Collisionable::getHitboxPosition()
	{
		return _hitboxPosition;
	}

	Vector2i& Collisionable::getHitboxSize()
	{
		return _hitboxSize;
	}

	void Collisionable::setActivity(RenderWindow& app)
	{
		const sf::View& view = app.getView();
		const sf::Vector2f& center = view.getCenter();
		const sf::Vector2f& halfSize = view.getSize();

		_isActive = _hitboxPosition.x >= (center.x - halfSize.x / 2);
		_isActive &= (_hitboxPosition.x + _hitboxSize.x) <= (center.x + halfSize.x / 2);
		_isActive &= _hitboxPosition.y >= (center.y - halfSize.y / 2);
		_isActive &= (_hitboxPosition.y + _hitboxSize.y) <= (center.y + halfSize.y / 2);
	}
} // namespace
