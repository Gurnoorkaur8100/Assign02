#include "pch.h"
#include "CppUnitTest.h"
extern "C" int getPerimeter(int* lngth, int* brdth);
extern "C" int getArea(int* lngth, int* brdth);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Assign02unittesttests
{
	TEST_CLASS(Assign02unittesttests)
	{
	public:
		
		TEST_METHOD(findingPerimeter)

		{	//this test is to find and test the perimeter of a rectangle using two values: 2(L+B)
			int lngth = 5;// length of rectangle 
			int brdth = 10;// breadth of rectangle

			const int EXP = 30;
			int result;

			result = getPerimeter(&lngth, &brdth);

			Assert::AreEqual(EXP, result);
		}

		TEST_METHOD(findingArea)
		{
			//this test is to find and test the area of a rectangle using two values: L*B
			int lngth = 5;// length of rectangle 
			int brdth = 10;// breadth of rectangle

			const int EXP = 50;
			int result;

			result = getArea(&lngth, &brdth);

			Assert::AreEqual(EXP, result);
		}
	};
}
