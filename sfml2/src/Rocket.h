/*
 * Rocket.h
 *
 *  Created on: Nov 20, 2019
 *      Author: yuanhong
 */

#ifndef SRC_ROCKET_H_
#define SRC_ROCKET_H_

#pragma once
#include "SFML/Graphics.hpp"

class  Rocket{
public:
	Rocket();
	~Rocket();

	void init(std::string textureName,sf::Vector2f position,float _speed);
	void update(float dt);
	sf::Sprite getSprite();

private:
	sf::Texture m_textture;
	sf::Sprite m_sprite;
	sf::Vector2f m_position;
	float m_speed;

};



#endif /* SRC_ROCKET_H_ */
