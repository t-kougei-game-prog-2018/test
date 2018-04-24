// SampleTest.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include <iostream>
#include <stdlib.h>
#include "LibraryApplication.h"

int main()
{
	std::cout << "1+1=" << MyCalc::add(1, 1) << std::endl;

	system("pause");// キーを押してから終了
    return 0;
}

