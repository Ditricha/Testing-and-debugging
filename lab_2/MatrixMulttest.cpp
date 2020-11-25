#include "pch.h"
#include "CppUnitTest.h"
#include "..\Ishkova-Zapolskaia_lab_1\MatrixMult.h"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace MatrixMultTest
{
	TEST_CLASS(MatrixMultTest)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			row1 = 2;
			col1 = 3;
			row2 = 3;
			col2 = 2;
			Assert::IsTrue(row1 == col2 && row2 == col1);
		}

		TEST_METHOD(TestMethod2)
		{
			row1 = -2;
			col1 = 3;
			row2 = -3;
			col2 = 2;
			Assert::IsFalse(row1 > 0 && col1 > 0 && row2 > 0 && col2 > 0);
		}

		TEST_METHOD(TestMethod3)
		{
			row1 = 0;
			col1 = 0;
			row2 = 0;
			col2 = 0;
			Assert::IsFalse(row1 > 0 && col1 > 0 && row2 > 0 && col2 > 0);
		}

		TEST_METHOD(TestMethod4)
		{
			i = -32769;
			Assert::IsFalse(i > 0);
		}

		TEST_METHOD(TestMethod5)
		{
			i = -32768;
			Assert::IsFalse(i > 0);
		}

		TEST_METHOD(TestMethod6)
		{
			i = -32767;
			Assert::IsFalse(i > 0);
		}

		TEST_METHOD(TestMethod7)
		{
			i = -1;
			Assert::IsFalse(i > 0);
		}

		TEST_METHOD(TestMethod8)
		{
			i = 0;
			Assert::IsFalse(i > 0);
		}

		TEST_METHOD(TestMethod9)
		{
			i = 1;
			Assert::IsTrue(i > 0);
		}

		TEST_METHOD(TestMethod10)
		{
			i = 32766;
			Assert::IsTrue(i > 0);
		}

		TEST_METHOD(TestMethod11)
		{
			i = 32767;
			Assert::IsTrue(i > 0);
		}

		TEST_METHOD(TestMethod12)
		{
			i = 32768;
			Assert::IsTrue(i > 0);
		}
	};
}
