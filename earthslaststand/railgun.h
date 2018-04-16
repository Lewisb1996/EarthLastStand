#pragma once
#include <SFML/Graphics.hpp>

class RailGun : public sf::Sprite {
protected:
  sf::IntRect _sprite;
  
  RailGun();
public:
  explicit RailGun(sf::IntRect ir);
  virtual ~RailGun() = 0;
  virtual void Update(const float &dt);
};