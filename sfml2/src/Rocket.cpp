/*
 * Rocket.cpp
 *
 *  Created on: Nov 20, 2019
 *      Author: yuanhong
 */

#include "Rocket.h"

Rocket::Rocket(){

}


Rocket::~Rocket(){

}


void Rocket::init(std::string textureName,sf::Vector2f position,float _speed){
	m_speed = _speed;
	m_position = position;

	m_textture.loadFromFile(textureName.c_str());

	m_sprite.setTexture(m_textture);
	m_sprite.setPosition(m_position);
	m_sprite.setOrigin(m_textture.getSize().x/2,m_textture.getSize().y/2);

}

void Rocket::update(float dt){
	m_sprite.move(m_speed*dt,0);

}

sf::Sprite Rocket::getSprite(){
	return m_sprite;
}
