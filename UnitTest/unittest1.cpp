#include "stdafx.h"
#include "CppUnitTest.h"
#include "LibraryApplication.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{		
	TEST_CLASS(UnitTestAdd)
	{
	public:
		
		TEST_METHOD(TestMethodAdd)
		{
			// TODO: �e�X�g �R�[�h�������ɑ}�����܂�
			Assert::AreEqual(MyCalc::add(1, 2), 3);
		}

	};
}