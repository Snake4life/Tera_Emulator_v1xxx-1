#pragma once
#include "SendPacket.h"
class RNpcGuildList :
	public SendPacket
{
public:
	RNpcGuildList();

	// Inherited via SendPacket
	virtual void Process(OpCode opCode, Stream * data, Client * caller) override;
};

