/*
 * Hero.h
 *
 *  Created on: Nov 19, 2019
 *      Author: yuanhong
 */

#ifndef HERO_H_
#define HERO_H_

#include <SFML/Graphics.hpp>

class Hero {

public:
	Hero();
	~Hero();
	void init(std::string textureName, sf::Vector2f position, float mass);
	void update(float dt);
	void jump(float velocity);
	sf::Sprite getSprite();

private:
	sf::Texture m_texture;

	sf::Sprite m_sprite;
	sf::Vector2f m_position;
	int jumpCount = 0;
	float m_mass;
	float m_velocity;
	float m_force;
	const float m_gravity = 9.80f;
	bool m_grounded;

};




#endif /* HERO_H_ */
