#include "gmock/gmock.h"
#include "example.h"
#include "funciones.h"

using namespace testing;

namespace foobar::tests 
{
	TEST(primerostest1, mayor1)
	{
		ASSERT_THAT(mayor(54, 4), 54);  //funciona correctamente
	}
	

	TEST(primerostest2, menor1)
	{
		ASSERT_THAT(menor(54, 4), 4); //funciona correctamente
	}
	TEST(primerostest3, factorial1)
	{
		ASSERT_THAT(factorial(5), 120);
	}
	
}