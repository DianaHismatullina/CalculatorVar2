#include <calculator.hpp>
#include <catch.hpp>

SCENARIO("calculator summa", "[summa]") 
{
    double x = 5.0;
    double y = 6.0;
    
    double rv = summa(x,y);
    
	REQUIRE( rv == 11.0);
}

SCENARIO("calculator sub", "[sub]") 
{
    double x = 12.0;
    double y = 6.0;
    
    double rv = sub(x,y);
    
	REQUIRE( rv == 6.0);
}

SCENARIO("calculator mult", "[mult]") 
{
    double x = 3.0;
    double y = 4.0;
    
    double rv = mult(x,y);
    
	REQUIRE( rv == 12.0);
}

SCENARIO("calculator dev", "[dev]") 
{
    double x = 15.0;
    double y = 5.0;
    
    double rv = dev(x,y);
    
	REQUIRE( rv == 3.0);
}

SCENARIO("calculator pow", "[pow]") 
{
    double x = 4.0;
    double y = 2.0;
    
    double rv = pow(x,y);
    
	REQUIRE( rv == 16.0);
}

SCENARIO("calculator sqrt", "[sqrt]") 
{
    double x = 25.0;
    
    double rv = sqrt(x);
    
	REQUIRE( rv == 5.0);
}
