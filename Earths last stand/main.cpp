#include <SFML/Graphics.hpp>
#include <iostream>
#include "railgun.h"
#include "game.h"

using namespace sf;
using namespace std;

sf::Texture spritesheet;
sf::Sprite enemy;


void Load() {
  if (!spritesheet.loadFromFile("")) {
    cerr << "Failed to load spritesheet!" << std::endl;
   }
   enemy.setTexture(spritesheet);
   invader.setTextureRect(sf::IntRect(0,0,32,32));
}


void Render() {
  window.draw(enemy):
}



