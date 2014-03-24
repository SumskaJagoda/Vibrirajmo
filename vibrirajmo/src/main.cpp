//============================================================================
// Name        : main.cpp
// Author      : sumska jagoda
// Version     : 0
// Copyright   : nase i samo nase
// Description : main
//============================================================================
//#include <dos.h>
#include "I2CDevice.h"
#include <iostream>
#include "macros.h"
using namespace std;


//#define ALL_ADR 0xfa

int main() {


I2CDevice *i2cptr = new I2CDevice(1,DEVICE1_ADDR);
	//init
	i2cptr->writeByte(MOD1_REG,0x01); //sleep off
	i2cptr->writeByte(0xfd,0x00);



	i2cptr->writeByte(0xfa,0x01);
	cout << "RADII! :D:D" << endl; // znak da radi :D
	delete i2cptr;
	return 0;
	// konju!
}
