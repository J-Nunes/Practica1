#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Project1\Point2D.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestPoint2D
{		
	TEST_CLASS(UnitTestPoint2D)
	{
	public:
		
		TEST_METHOD(isZero)
		{
			Point2d p1;

			p1.x = 15;
			p1.y = 15;

			Assert::IsFalse(p1.isZero());

		}

		TEST_METHOD(setZero)
		{
			Point2d p1;

			p1.x = 16;
			p1.y = 16;

			p1.setZero();

			Assert::IsTrue(p1.x == 0 && p1.y == 0);
		}

		TEST_METHOD(distanceTo)
		{
			Point2d p1, p2;
			float d;

			p1.x = 0;
			p1.y = 0;
			p2.x = 4;
			p2.y = 3;

			d = p1.distanceTo(p2);

			Assert::IsTrue(d == 5);
		}

		TEST_METHOD(suma)
		{
			Point2d p1, p2, p3;

			p1.x = 1;
			p1.y = 1;
			p2.x = 2;
			p2.y = 2;

			p3 = p1 + p2;

			Assert::IsTrue(p3.x == 3 && p3.y == 3);
		}

		TEST_METHOD(resta)
		{
			Point2d p1, p2, p3;

			p1.x = 2;
			p1.y = 2;
			p2.x = 1;
			p2.y = 1;

			p3 = p1 - p2;

			Assert::IsTrue(p3.x == 1 && p3.y == 1);
		}

		TEST_METHOD(sumaIgual)
		{
			Point2d p1, p2;

			p1.x = 7;
			p1.y = 7;
			p2.x = 8;
			p2.y = 8;

			p1 += p2;

			Assert::IsTrue(p1.x == 15 && p1.y == 15);

		}

		TEST_METHOD(restaIgual)
		{
			Point2d p1, p2;

			p1.x = 9;
			p1.y = 9;
			p2.x = 10;
			p2.y = 10;

			p1 -= p2;

			Assert::IsTrue(p1.x == -1 && p1.y == -1);

		}

		TEST_METHOD(igualIgual)
		{
			Point2d p1, p2;

			p1.x = 1.f;
			p1.y = 1.f;
			p2.x = 1.f;
			p2.y = 1.f;

			Assert::IsTrue(p1 == p2);

		}

		TEST_METHOD(diferent)
		{
			Point2d p1, p2;

			p1.x = 13;
			p1.y = 13;
			p2.x = 14;
			p2.y = 14;

			Assert::IsTrue(p1 != p2);
		}
	};
}
