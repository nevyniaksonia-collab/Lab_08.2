#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_08.2/Lab_08.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest82
{
	TEST_CLASS(UnitTest82)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(static_cast<size_t>(0), MaxLength(""));
			Assert::AreEqual(static_cast<size_t>(0), MaxLength("abc"));
			Assert::AreEqual(static_cast<size_t>(5), MaxLength("abc12345def"));
			Assert::AreEqual(static_cast<size_t>(4), MaxLength("a1b22c333d4444"));
			Assert::AreEqual(static_cast<size_t>(9), MaxLength("987654321"));
			Assert::AreEqual(static_cast<size_t>(2), MaxLength("x12y34z"));
			Assert::AreEqual(static_cast<size_t>(1), MaxLength("a1b2c3"));
			Assert::AreEqual(static_cast<size_t>(6), MaxLength("abc123456def789"));
		}
	};
}
