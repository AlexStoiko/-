#pragma once
#include "Moved_Nomber.h"
#include <iostream>
using namespace std;

class Colored_Nomber : public Moved_Nomber
{
private:
	
public:
	System::String^ Get_Color();
	Colored_Nomber();
	~Colored_Nomber();
};

