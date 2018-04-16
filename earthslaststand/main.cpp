#include <SFML/Graphics.hpp>
#include <iostream>
#include "railgun.h"
#include "game.h"

using namespace sf;
using namespace std;

sf::Texture spritesheet;
sf::Sprite enemy;


void Load() {
  if (!spritesheet.loadFromFile("res/earthlaststand_sheet.png")) {
    cerr << "Failed to load spritesheet!" << std::endl;
   }
   enemy.setTexture(spritesheet);
   invader.setTextureRect(sf::IntRect(0,0,32,32));
}

void Update(RenderWindow &window) {
  // Reset clock, recalculate deltatime
  static Clock clock;
  float dt = clock.restart().asSeconds();
  // check and consume events
  Event event;
  while (window.pollEvent(event)) {
    if (event.type == Event::Closed) {
      window.close();
      return
     }
  }

  // Quit Via ESC Key
  if (keyboard::isKeyPressed(keyboard::Escape)) {
    window.close();
  }


void Render() {
  window.draw(enemy):
}



