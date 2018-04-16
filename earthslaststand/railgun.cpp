#include "railgun.h"
using namespace sf;
using namespace std;

RailGUn::RailGun() {};

RailGun::RailGun(IntRect ir) : Sprite() {
   _sprite = ir;
   setTexture(spritesheet);
   setTextureRect(_sprite);
};

void RailGun::Update(const float &dt) {}

RailGun::#RailGun() = default;

