#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Project1\String.h""

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestString
{
	TEST_CLASS(UnitTestString)
	{
	public:

		TEST_METHOD(emptyConstructor)
		{
			String s;

			Assert::IsTrue(s.str[0] == '\0');

		}

		TEST_METHOD(constructorchar)
		{
			String s("hola");

			Assert::IsTrue(s.size == 5);

		}

		TEST_METHOD(constructorCopy)
		{
			String s("hola");
			String s1(s);

			Assert::IsTrue(s1 == "hola");
		}

		TEST_METHOD(operatorIgualIgual)
		{
			String s1 = "hola";
			String s2 = "hola";
			Assert::IsTrue(s1.operator==(s2));
		}

		TEST_METHOD(operatorIgualIgualc)
		{
			String s1 = "hola";
			char* s2 = "hola";
			Assert::IsTrue(s1.operator==(s2));
		}

		TEST_METHOD(operatorDiferent)
		{
			String s1 = "hola";
			String s2 = "mundo";
			Assert::IsTrue(s1.operator!=(s2) != 0);
		}

		TEST_METHOD(operatorDiferentc)
		{
			String s1 = "hola";
			char* s2 = "mundo";
			Assert::IsTrue(s1.operator!=(s2) != 0);
		}

		TEST_METHOD(operatorIgual)
		{
			String s1 = "hola";
			String s2 = "mundo";

			s1 = s2;

			Assert::IsTrue( s1 == "mundo" );
		}

		TEST_METHOD(operatorIgualc)
		{
			String s1 = "hola";
			char* s2 = "mundo";

			s1 = s2;

			Assert::IsTrue ( s1 == "mundo" );
		}

		TEST_METHOD(operatorMesIgual)
		{
			String s1 = "hola";
			String s2 = "mundo";

			s1 += s2;

			Assert::IsTrue(s1 == "holamundo");
		}

		TEST_METHOD(operatorMesIgual2c)
		{
			String s1 = "hola";
			char* s2 = "mundo";

			s1 += s2;
			Assert::IsTrue(s1 == "holamundo");
		}

		TEST_METHOD(lenght)
		{
			String a = "hola";
			Assert::IsTrue(a.len() == 10);
		}

		TEST_METHOD(alloc)
		{
			String a = "hola";
			String b = "mundo";

		}

		TEST_METHOD(clear)
		{
			String a = "hola";
			a.clear();

			Assert::IsTrue(a.str[0] = '\0');
		}

		TEST_METHOD(capacity)
		{
			String a = "hola";
			int cap;

			cap = a.capacity();

			Assert::IsTrue(cap = 5);
		}

		TEST_METHOD(getString)
		{
			String a = "hola";
			Assert::IsTrue(a.getString() == "hola");
		}
	};
}