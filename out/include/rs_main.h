#pragma once
#define RS __declspec(dllimport)

enum RS_Init_Flags
{
	RS_INT = 0x01,
	RS_FLOAT = 0x02,
	RS_CHAR = 0x03,
	RS_STRING = 0x04
};


RS int RS_Init(int init);
int RS_Init(RS_Init_Flags r)
{
	return RS_Init((int)r);
}