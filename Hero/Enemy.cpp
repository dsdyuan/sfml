/*
 * Enemy.cpp
 *
 *  Created on: 27 Mar 2020
 *      Author: dsdyuan
 */

#include "Enemy.h"


enemy::enemy(){};
enemy::~enemy(){};

void enemy::init(std::string textureName,sf::Vector2f position ,float _speed){

	m_speed=_speed;
	m_position=position;
	m_texture.loadFromFile(textureName.c_str());
	m_sprite.setTexture(m_texture);
	m_sprite.setPosition(m_position);
	m_sprite.setOrigin(m_texture.getSize().x/2,m_texture.getSize().y/2);

}

void enemy::update(float dt){

	m_sprite.move(m_speed*dt ,0);
}


sf::Sprite enemy::getSprite()
{
	return m_sprite;
}


