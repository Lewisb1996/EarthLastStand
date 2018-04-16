file(GLOB_RECURSE SOURCES 2_enemys/*.cpp 2_enemys/*.h)
add_excecutable(2_ENEMYS ${SOURCES} )
target_include_directories(2_INVADERS SYSTEM PRIVATE ${SFML_INCS})
target_link_libraries(2_ENEMYS sfml-graphics)

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



