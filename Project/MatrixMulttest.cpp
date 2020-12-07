#include "pch.h"
#include "CppUnitTest.h"
#include "..\Ishkova-Zapolskaia_lab_1\MatrixMult.h"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace MatrixMultTest
{
	TEST_CLASS(MatrixMultTest)
	{
	public:
		
	//	TEST_METHOD(TestMethod1)
	//	{
	//	int row1, row2, col1, col2;
	//	row1 = col2 = 2;
	//	row2 = col1 = 2;
	//	double** a; double** b; double** c;

	//	int etalon[2][2] = { 1,1,1,1 };

	//	//1 matrica
	//	a = new double* [row1];
	//	for (int i = 0; i < row1; i++)
	//	{
	//		a[i] = new double[col1];
	//		for (int j = 0; j < col1; j++)
	//		{
	//			a[i][j] = 1;
	//		}
	//	}
	//	//2 matrica
	//	b = new double* [row2];
	//	for (int i = 0; i < row2; i++)
	//	{
	//		b[i] = new double[col2];
	//		for (int j = 0; j < col2; j++)
	//		{
	//			b[i][j] = 1;
	//		}
	//	}
	//	//перемножение

	//	//вызвать модуль отвечающий за перемножение матриц func();
	//	c = new double* [row1];
	//	for (int i = 0; i < row1; i++)
	//	{
	//		c[i] = new double[col2];
	//		for (int j = 0; j < col2; j++)
	//		{
	//			c[i][j] = 0;
	//			for (int k = 0; k < col1; k++)
	//				c[i][j] = a[i][k] * b[k][j];
	//		}
	//	}


	//	//сравнение через Assert
	//	for (int i = 0; i < row2; i++)
	//	{
	//		for (int j = 0; j < col2; j++)
	//		{
	//			Assert::IsTrue(etalon[i][j] == c[i][j]);
	//		}
	//	}
	//}


		TEST_METHOD(TestMethod1) //тест-метод 2
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
			row2 = 3;
			col2 = -2;
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
