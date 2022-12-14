#pragma once

//#include "typenames.h"
#include <bitset>

// Render utilities
static const float render_scale = 0.01f;

inline const float& clamp(const float& minimum, const float& value, const float& maximum) {
	if (value < minimum) return minimum;
	else if (value > maximum) return maximum;
	else return value;
}

//static std::bitset<32> mask{ 1 };
static unsigned long long int mask{ 2147483648 }; //1<<31 == 2147483648

//// Time utilities
//static const float speed{ 50.0 }; // 50 units per second
//static const float acceleration{ 2000.0 }; // 2 units per second^2
//static float v_acceleration{ acceleration };
