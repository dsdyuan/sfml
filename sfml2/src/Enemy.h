/*
 * Enemy.h
 *
 *  Created on: Nov 20, 2019
 *      Author: yuanhong
 */

#ifndef SRC_ENEMY_H_
#define SRC_ENEMY_H_

#pragma once

#include "SFML/Graphics.hpp"

class Enemy
{
public:
	Enemy();
	~Enemy();


	void init(std::string textureName, sf::Vector2f position, float _speed);
	void update(float dt);
	sf::Sprite getSprite();

private:

	sf::Texture m_texture;
	sf::Sprite m_sprite;
	sf::Vector2f m_position;
	float m_speed;

};





#endif /* SRC_ENEMY_H_ */
