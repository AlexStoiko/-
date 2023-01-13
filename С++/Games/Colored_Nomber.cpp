#include "Colored_Nomber.h"

Colored_Nomber::Colored_Nomber()
{
	Nomber = 0;
	Min_Nomber = 0;
	Max_Nomber = 9;
	Location = 200;
}

Colored_Nomber::~Colored_Nomber() {}

System::String^ Colored_Nomber::Get_Color()
{
	int rand_color;
	System::String^ color;
	rand_color = rand() % 9 + 1;
	switch (rand_color)
	{
	case 1:
		color = "Red";
		break;
	case 2:
		color = "DarkOrange";
		break;
	case 3:
		color = "Green";
		break;
	case 4:
		color = "Lime";
		break;
	case 5:
		color = "Blue";
		break;
	case 6:
		color = "Aqua";
		break;
	case 7:
		color = "Purple";
		break;
	case 8:
		color = "Navy";
		break;
	case 9:
		color = "Black";
		break;
	default:
		break;
	}
	return color;
}