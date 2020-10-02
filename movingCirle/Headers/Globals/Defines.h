#pragma once

#include <array>

#define STR_VY			"vy"
#define STR_VX			"vx"
#define STR_X			"x"
#define STR_Y			"y"
#define STR_RADIUS		"radius"
#define STR_COLOR		"color"
#define STR_ASTEROID	"asteroid"
#define STR_PLANET		"planet"
#define STR_TYPE		"type"
#define STR_POSITION	"position"
#define STR_SPEED		"speed"
#define STR_NEIGHBOURS	"neighbours"
#define STR_NAME		"name"

#define STR_COLOR_BLUE		"blue"
#define STR_COLOR_ORANGE	"orange"
#define STR_COLOR_GREY		"grey"
#define STR_COLOR_BROWN		"brown"
#define STR_COLOR_PINK		"pink"
#define STR_COLOR_PURPLE	"purple"
#define STR_COLOR_BLACK		"black"

typedef unsigned int coördinateType;
typedef unsigned int radius;

const struct {
	coördinateType x = 20;
	coördinateType y = 20;
} SCREEN_SIZE;

typedef struct {
	unsigned int width;
	unsigned int height;
} viewSize;

typedef enum class colorEnum
{
	blue,
	orange,
	grey,
	brown,
	pink,
	purple,
	black,


	size //MUST BE LAST!!!!!
} ColorEnum;

#define COLOR_PAIR std::pair<const char*, ColorEnum>	
const std::array<COLOR_PAIR, (size_t)ColorEnum::size> COLOR_BINDINGS = { COLOR_PAIR(STR_COLOR_BLUE,ColorEnum::blue),
																		 COLOR_PAIR(STR_COLOR_ORANGE,ColorEnum::orange),
																		 COLOR_PAIR(STR_COLOR_GREY,ColorEnum::grey),
																		 COLOR_PAIR(STR_COLOR_BROWN,ColorEnum::brown),
																		 COLOR_PAIR(STR_COLOR_PINK,ColorEnum::pink),
																		 COLOR_PAIR(STR_COLOR_PURPLE,ColorEnum::purple),
																		 COLOR_PAIR(STR_COLOR_BLACK,ColorEnum::black),
																	   };

