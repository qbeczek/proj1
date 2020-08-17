#include "shifter.h"

int shifter_left(int _no_shift, int _shifter){
	return _no_shift<<_shifter;
}

int shifter_right(int _no_shift, int _shifter){
	return _no_shift>>_shifter;
} 