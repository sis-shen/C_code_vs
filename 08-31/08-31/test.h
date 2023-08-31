#pragma once

//写法1
#ifndef __TEST_H__   //防止重复引用头文件导致多次包含 == #pragma once
#define __TEST_H__

int ADD(int x, int y)
{
	return x + y;
}


#endif