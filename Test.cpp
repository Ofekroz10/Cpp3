#include "doctest.h"
#include <iostream>
#include <complex>
#include "solver.hpp"

using namespace std;
using solver::solve, solver::RealVariable, solver::ComplexVariable;

/*
This test written by python script that makes all the test by checking 
all scenarios. I wrote the script. 
This test file test this scenarios:
* replacement of lower letters and another lower letters
    (All scenarios, checks all options)
* replacement of high letters and another high letters
    (All scenarios, checks all options)
* Mix test- replacement of high/lower letter by another high/lower letter.
    (All scenarios, checks all options)
* words that cannot be changed. (Like 'be')
* same words. check this scenarios: find(text,originalWord) == originalWord
* Empty words
* Words that appear twice
*/

TEST_CASE("Test real numbers") {
RealVariable x; 
CHECK_THROWS_AS(solve(12*(x^2) + 48*x + 58 == 0), std::exception);
CHECK_THROWS_AS(solve(33*(x^2) + 44*x + 55 == 0), std::exception);
CHECK_THROWS_AS(solve(19*(x^2) + 35*x + 25 == 0), std::exception);
CHECK_THROWS_AS(solve(55*(x^2) + 11*x + 37 == 0), std::exception);
CHECK_THROWS_AS(solve(33*(x^2) + 6*x + 36 == 0), std::exception);
CHECK_THROWS_AS(solve(41*(x^2) + 3*x + 12 == 0), std::exception);
CHECK_THROWS_AS(solve(18*(x^2) + 31*x + 41 == 0), std::exception);
CHECK_THROWS_AS(solve(60*(x^2) + 44*x + 33 == 0), std::exception);
CHECK(((solve(11*(x^2) + 38*x + 15 == 0) >= -0.4546) && (solve(11*(x^2) + 38*x + 15 == 0) <= -0.4544)));
CHECK_THROWS_AS(solve(13*(x^2) + 30*x + 32 == 0), std::exception);
CHECK_THROWS_AS(solve(49*(x^2) + 10*x + 21 == 0), std::exception);
CHECK(((solve(2*(x^2) + 19*x + 24 == 0) >= -1.5001) && (solve(2*(x^2) + 19*x + 24 == 0) <= -1.4999)));
CHECK_THROWS_AS(solve(9*(x^2) + 8*x + 55 == 0), std::exception);
CHECK(((solve(22*(x^2) + 48*x + 26 == 0) >= -1.0001) && (solve(22*(x^2) + 48*x + 26 == 0) <= -0.9999)));
CHECK_THROWS_AS(solve(17*(x^2) + 34*x + 21 == 0), std::exception);
CHECK(((solve(2*(x^2) + 19*x + 31 == 0) >= -2.0926) && (solve(2*(x^2) + 19*x + 31 == 0) <= -2.0924)));
CHECK_THROWS_AS(solve(48*(x^2) + 13*x + 11 == 0), std::exception);
CHECK_THROWS_AS(solve(33*(x^2) + 32*x + 18 == 0), std::exception);
CHECK_THROWS_AS(solve(14*(x^2) + 8*x + 52 == 0), std::exception);
CHECK_THROWS_AS(solve(18*(x^2) + 45*x + 30 == 0), std::exception);
CHECK_THROWS_AS(solve(28*(x^2) + 24*x + 48 == 0), std::exception);
CHECK_THROWS_AS(solve(37*(x^2) + 23*x + 13 == 0), std::exception);
CHECK(((solve(21*(x^2) + 37*x + 15 == 0) >= -0.6325) && (solve(21*(x^2) + 37*x + 15 == 0) <= -0.6323)));
CHECK_THROWS_AS(solve(60*(x^2) + 49*x + 50 == 0), std::exception);
CHECK_THROWS_AS(solve(21*(x^2) + 37*x + 26 == 0), std::exception);
CHECK(((solve(21*(x^2) + 55*x + 16 == 0) >= -0.3334) && (solve(21*(x^2) + 55*x + 16 == 0) <= -0.3332)));
CHECK(((solve(57*(x^2) + 41*x + 3 == 0) >= -0.0828) && (solve(57*(x^2) + 41*x + 3 == 0) <= -0.0826)));
CHECK_THROWS_AS(solve(59*(x^2) + 6*x + 1 == 0), std::exception);
CHECK_THROWS_AS(solve(28*(x^2) + 60*x + 35 == 0), std::exception);
CHECK_THROWS_AS(solve(16*(x^2) + 27*x + 32 == 0), std::exception);
CHECK_THROWS_AS(solve(51*(x^2) + 26*x + 17 == 0), std::exception);
CHECK_THROWS_AS(solve(36*(x^2) + 5*x + 14 == 0), std::exception);
CHECK(((solve(52*(x^2) + 59*x + 13 == 0) >= -0.2994) && (solve(52*(x^2) + 59*x + 13 == 0) <= -0.2992)));
CHECK_THROWS_AS(solve(14*(x^2) + 32*x + 32 == 0), std::exception);
CHECK_THROWS_AS(solve(37*(x^2) + 35*x + 26 == 0), std::exception);
CHECK_THROWS_AS(solve(35*(x^2) + 8*x + 16 == 0), std::exception);
CHECK(((solve(4*(x^2) + 48*x + 60 == 0) >= -1.4175) && (solve(4*(x^2) + 48*x + 60 == 0) <= -1.4173)));
CHECK_THROWS_AS(solve(43*(x^2) + 17*x + 46 == 0), std::exception);
CHECK_THROWS_AS(solve(13*(x^2) + 41*x + 60 == 0), std::exception);
CHECK_THROWS_AS(solve(45*(x^2) + 56*x + 19 == 0), std::exception);
CHECK_THROWS_AS(solve(58*(x^2) + 43*x + 55 == 0), std::exception);
CHECK_THROWS_AS(solve(53*(x^2) + 33*x + 33 == 0), std::exception);
CHECK_THROWS_AS(solve(53*(x^2) + 55*x + 58 == 0), std::exception);
CHECK(((solve(37*(x^2) + 54*x + 7 == 0) >= -0.1439) && (solve(37*(x^2) + 54*x + 7 == 0) <= -0.1437)));
CHECK_THROWS_AS(solve(45*(x^2) + 49*x + 50 == 0), std::exception);
CHECK_THROWS_AS(solve(27*(x^2) + 24*x + 48 == 0), std::exception);
CHECK_THROWS_AS(solve(7*(x^2) + 5*x + 38 == 0), std::exception);
CHECK(((solve(3*(x^2) + 37*x + 38 == 0) >= -1.1308) && (solve(3*(x^2) + 37*x + 38 == 0) <= -1.1306)));
CHECK_THROWS_AS(solve(34*(x^2) + 4*x + 10 == 0), std::exception);
CHECK_THROWS_AS(solve(54*(x^2) + 60*x + 39 == 0), std::exception);
CHECK_THROWS_AS(solve(27*(x^2) + 33*x + 53 == 0), std::exception);
CHECK(((solve(3*(x^2) + 20*x + 20 == 0) >= -1.2252) && (solve(3*(x^2) + 20*x + 20 == 0) <= -1.225)));
CHECK_THROWS_AS(solve(20*(x^2) + 40*x + 56 == 0), std::exception);
CHECK_THROWS_AS(solve(24*(x^2) + 21*x + 18 == 0), std::exception);
CHECK_THROWS_AS(solve(25*(x^2) + 42*x + 48 == 0), std::exception);
CHECK_THROWS_AS(solve(40*(x^2) + 22*x + 28 == 0), std::exception);
CHECK(((solve(5*(x^2) + 42*x + 27 == 0) >= -0.7015) && (solve(5*(x^2) + 42*x + 27 == 0) <= -0.7013)));
CHECK_THROWS_AS(solve(15*(x^2) + 39*x + 26 == 0), std::exception);
CHECK_THROWS_AS(solve(2*(x^2) + 11*x + 36 == 0), std::exception);
CHECK_THROWS_AS(solve(41*(x^2) + 38*x + 29 == 0), std::exception);




    
}

TEST_CASE("Check complex")
{
    ComplexVariable y; 
 std::complex<double> mycomplex(0, 0); 
mycomplex= std::complex<double>(0, 8); 
CHECK(solve(18*y + 31i == 17*y+39i) == mycomplex); 
mycomplex= std::complex<double>(0, -11); 
CHECK(solve(1*y + 29i == 0*y+18i) == mycomplex); 
mycomplex= std::complex<double>(0, 4); 
CHECK(solve(18*y + 5i == 17*y+9i) == mycomplex); 
mycomplex= std::complex<double>(0, -1); 
CHECK(solve(6*y + 13i == 5*y+12i) == mycomplex); 
mycomplex= std::complex<double>(0, 33); 
CHECK(solve(8*y + 5i == 7*y+38i) == mycomplex); 
mycomplex= std::complex<double>(0, -9); 
CHECK(solve(8*y + 24i == 7*y+15i) == mycomplex); 
mycomplex= std::complex<double>(0, 7); 
CHECK(solve(31*y + 8i == 30*y+15i) == mycomplex); 
mycomplex= std::complex<double>(0, -3); 
CHECK(solve(35*y + 4i == 34*y+1i) == mycomplex); 
mycomplex= std::complex<double>(0, 28); 
CHECK(solve(2*y + 8i == 1*y+36i) == mycomplex); 
mycomplex= std::complex<double>(0, 20); 
CHECK(solve(32*y + 17i == 31*y+37i) == mycomplex); 
mycomplex= std::complex<double>(0, -13); 
CHECK(solve(12*y + 20i == 11*y+7i) == mycomplex); 
mycomplex= std::complex<double>(0, 5); 
CHECK(solve(8*y + 14i == 7*y+19i) == mycomplex); 
mycomplex= std::complex<double>(0, 20); 
CHECK(solve(31*y + 11i == 30*y+31i) == mycomplex); 
mycomplex= std::complex<double>(0, -1); 
CHECK(solve(16*y + 33i == 15*y+32i) == mycomplex); 
mycomplex= std::complex<double>(0, -29); 
CHECK(solve(30*y + 32i == 29*y+3i) == mycomplex); 
mycomplex= std::complex<double>(0, -3); 
CHECK(solve(3*y + 14i == 2*y+11i) == mycomplex); 
mycomplex= std::complex<double>(0, -2); 
CHECK(solve(32*y + 38i == 31*y+36i) == mycomplex); 
mycomplex= std::complex<double>(0, 5); 
CHECK(solve(8*y + 12i == 7*y+17i) == mycomplex); 
mycomplex= std::complex<double>(0, 1); 
CHECK(solve(32*y + 32i == 31*y+33i) == mycomplex); 
mycomplex= std::complex<double>(0, -3); 
CHECK(solve(23*y + 13i == 22*y+10i) == mycomplex); 
mycomplex= std::complex<double>(0, 3); 
CHECK(solve(40*y + 15i == 39*y+18i) == mycomplex); 
mycomplex= std::complex<double>(0, 5); 
CHECK(solve(11*y + 23i == 10*y+28i) == mycomplex); 
mycomplex= std::complex<double>(0, -15); 
CHECK(solve(34*y + 16i == 33*y+1i) == mycomplex); 
mycomplex= std::complex<double>(0, -26); 
CHECK(solve(18*y + 30i == 17*y+4i) == mycomplex); 
mycomplex= std::complex<double>(0, 13); 
CHECK(solve(3*y + 2i == 2*y+15i) == mycomplex); 
mycomplex= std::complex<double>(0, 18); 
CHECK(solve(21*y + 19i == 20*y+37i) == mycomplex); 
mycomplex= std::complex<double>(0, 11); 
CHECK(solve(25*y + 15i == 24*y+26i) == mycomplex); 
mycomplex= std::complex<double>(0, 19); 
CHECK(solve(3*y + 5i == 2*y+24i) == mycomplex); 
mycomplex= std::complex<double>(0, 7); 
CHECK(solve(38*y + 26i == 37*y+33i) == mycomplex); 
mycomplex= std::complex<double>(0, 3); 
CHECK(solve(38*y + 7i == 37*y+10i) == mycomplex); 
mycomplex= std::complex<double>(0, -5); 
CHECK(solve(14*y + 35i == 13*y+30i) == mycomplex); 
mycomplex= std::complex<double>(0, -4); 
CHECK(solve(16*y + 22i == 15*y+18i) == mycomplex); 
mycomplex= std::complex<double>(0, 22); 
CHECK(solve(2*y + 14i == 1*y+36i) == mycomplex); 
mycomplex= std::complex<double>(0, -10); 
CHECK(solve(9*y + 22i == 8*y+12i) == mycomplex); 
mycomplex= std::complex<double>(0, 32); 
CHECK(solve(30*y + 6i == 29*y+38i) == mycomplex); 
mycomplex= std::complex<double>(0, -3); 
CHECK(solve(1*y + 24i == 0*y+21i) == mycomplex); 
mycomplex= std::complex<double>(0, -8); 
CHECK(solve(21*y + 12i == 20*y+4i) == mycomplex); 
mycomplex= std::complex<double>(0, -27); 
CHECK(solve(37*y + 35i == 36*y+8i) == mycomplex); 
mycomplex= std::complex<double>(0, 28); 
CHECK(solve(28*y + 9i == 27*y+37i) == mycomplex); 
mycomplex= std::complex<double>(0, 5); 
CHECK(solve(23*y + 33i == 22*y+38i) == mycomplex); 
}

