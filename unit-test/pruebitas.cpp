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
	

	TEST(primerostest3, menor1)
	{
		ASSERT_THAT(menor(54, 4), 4); //funciona correctamente
	}

	
}