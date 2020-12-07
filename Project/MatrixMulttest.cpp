#include "pch.h"
#include "CppUnitTest.h"
#include "..\Ishkova-Zapolskaia_lab_1\MatrixMult.h"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace MatrixMultTest
{
	TEST_CLASS(MatrixMultTest)
	{
	public:
		
		TEST_METHOD(TestMethod100)
		{
			int standard[2][3] = { 1, 1, 1, 1, 1, 1 };

			int row1, col1, row2, col2;
			row1 = col2 = 2;
			row2 = col1 = 3;
			int **matrix_1; int **matrix_2; int **resulting_matrix;

			matrix_1 = (int**)calloc(row1, sizeof(int));
			for (int i = 0; i < row1; i++)
				matrix_1[i] = (int*)calloc(col1, sizeof(int));
			
			for (int i = 0; i < row1; i++) {
				for (int j = 0; j < col1; j++) {
					matrix_1[i][j] = 1;
				}
			}

			matrix_2 = (int**)calloc(row2, sizeof(int));
			for (int i = 0; i < row2; i++)
				matrix_2[i] = (int*)calloc(col2, sizeof(int));
			
			for (int i = 0; i < row2; i++) {
				for (int j = 0; j < col2; j++) {
					matrix_2[i][j] = 1;
				}
			}

			resulting_matrix = (int**)calloc(row1, sizeof(int));
			for (int i = 0; i < row1; i++)
				resulting_matrix[i] = (int*)calloc(col2, sizeof(int));

			resulting_matrix = multiplication(matrix_1, row1, col1, matrix_2, row2, col2);


			//сравнение через Assert
			for (int i = 0; i < row2; i++) {
				for (int j = 0; j < col2; j++) {
					Assert::AreEqual(standard[i][j], resulting_matrix[i][j]);
				}
			}
		}


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
			int i = -32769;
			Assert::IsFalse(i > 0);
		}

		TEST_METHOD(TestMethod5)
		{
			int i = -32768;
			Assert::IsFalse(i > 0);
		}

		TEST_METHOD(TestMethod6)
		{
			int i = -32767;
			Assert::IsFalse(i > 0);
		}

		TEST_METHOD(TestMethod7)
		{
			int i = -1;
			Assert::IsFalse(i > 0);
		}

		TEST_METHOD(TestMethod8)
		{
			int i = 0;
			Assert::IsFalse(i > 0);
		}

		TEST_METHOD(TestMethod9)
		{
			int i = 1;
			Assert::IsTrue(i > 0);
		}

		TEST_METHOD(TestMethod10)
		{
			int i = 32766;
			Assert::IsTrue(i > 0);
		}

		TEST_METHOD(TestMethod11)
		{
			int i = 32767;
			Assert::IsTrue(i > 0);
		}

		TEST_METHOD(TestMethod12)
		{
			int i = 32768;
			Assert::IsTrue(i > 0);
		}
	};
}

}
