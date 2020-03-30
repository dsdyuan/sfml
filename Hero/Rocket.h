/*
 * Rocket.h
 *
 *  Created on: 27 Mar 2020
 *      Author: dsdyuan
 */

#pragma once

#ifndef ROCKET_H_
#define ROCKET_H_

#include "Graphics.hpp"


class Rocket{

public:
	Rocket();
	~Rocket();
	void init(std::string textureName,sf::Vector2f position,float _speed);
	void update(float dt);
	sf::Sprite getSprite();
private:
	sf::Texture m_texture;
	sf::Sprite m_sprite;
	sf::Vector2f m_position;
	float m_speed;

};




#endif /* ROCKET_H_ */
