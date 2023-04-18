#pragma once
#include "ECS.h"

constexpr auto EVAPORATE_SPEED = 0.01f;

class EvaporateComponent : public Component {
private:
	float strenght = 0;
public:
	EvaporateComponent() {
		strenght = 1;
	}
	float GetStrenght() { return strenght; }
	
	void Update() override {
		strenght -= EVAPORATE_SPEED;
		if (strenght <= 0) {
			entity->Destroy();
		}
	}


};
