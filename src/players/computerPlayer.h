// src/algorithms/computerPlayer.h
#pragma once

#include "player.h"

class ComputerPlayer {
private:
	std::string seed;

public:
	ComputerPlayer()
	virtual void calculateMove();
};
