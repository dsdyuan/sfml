/*
 * Enemy.h
 *
 *  Created on: 27 Mar 2020
 *      Author: dsdyuan
 */

#pragma once

#ifndef ENEMY_H_
#define ENEMY_H_

#include "Graphics.hpp"

class enemy{

public:
	enemy();
	~enemy();

	void init(std::string textureName,sf::Vector2f position,float _speed);
	void update(float dt);
	sf::Sprite getSprite();
private:
	sf::Texture m_texture;
	sf::Sprite m_sprite;
	sf::Vector2f m_position;
	float m_speed;

};




#endif /* ENEMY_H_ */
