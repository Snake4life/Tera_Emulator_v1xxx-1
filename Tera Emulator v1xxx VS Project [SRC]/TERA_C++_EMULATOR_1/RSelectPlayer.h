#pragma once

#include "SendPacket.h"

class Player;
class RSelectPlayer : public SendPacket
{
public:
	RSelectPlayer();

	// Inherited via SendPacket
	virtual void Process(OpCode opCode, Stream * data, Client * caller) override;
};

//   A801CCA9 32014601 20006601 40005D2B
//   00007C62 AC0F0080 0000AC0F 00000150
//   37000000 00000100 00000036 00000078
//   00000065 00020202 01010001 00010000
//   00000000 00000001 00000000 00000000
//   00010000 00000000 00010000 00000000
//   00480300 00000000 00000000 00000000
//   00000000 00000000 00000000 00A30100
//   00000000 00000000 00112700 009C3A00
//   009D3A00 009E3A00 00000000 00000000
//   00000000 008CC557 05000000 00010000
//   00000000 00000000 00000000 00000000
//   00000000 00000000 00000000 00000000
//   00000000 00000000 00000000 00000000
//   00000000 00000000 00000000 00000000
//   00000001 00000000 00000000 00000000
//   00000000 00000000 00000000 00000000
//   00000000 00000000 01000000 00000000
//   00640000 00000080 3F010000 00000000
//   00005400 61007200 74006100 72006900
//   6E006100 00001004 080D0000 0000101B
//   1F001010 00001C09 00130C0A 10000D1F
//   0C091310 00000113 10131310 1313130F
//   0F0F0F0F 0F0F1013 0A000000 00000000
//   00000000 00000000 00000000 00000000
//   00000000 00000000 00000000 00000000
//   00000000 00000000 	


