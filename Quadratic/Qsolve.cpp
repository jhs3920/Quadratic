/* Date: 10/04/2017 </br>
Class: CS 4910</br>
Author: Cade Gillem & Bishop	</br></br>

input double: 		a, b, c for equation</br>
Input/output double: 	x1, x2 for roots if avali</br>
return value:</br>
0 good vaules of x1 and x2</br>
1 single root
2 imaginary root
3  a = 0;
4  invalid input, including NAN, INF, -INF
How to turn logging off:
something
*/

#include "stdafx.h"
#include "Qsolve.h"
#include <math.h>

int qsolve(double a, double b, double c, double* x1, double* x2) {
	//mylog(ÅgCalled: qsolve, variables passed a = %lf, b = %fl, c = %flÅh, a, b, c);
	double disc = b * b - 4.0 * a * c; //=B^2 -4ac

									   //validate arguments function log and return 4
	if(a == INFINITY || b == INFINITY || c == INFINITY ||
		a == -INFINITY || b == -INFINITY || c == -INFINITY ||
		a == NAN || b == NAN || c == NAN) {
		//mylog(error); //proper error message invalid input
		return 4;
	}

	// quadratic checker
	if(a == 0.0) {
		//mylog(error); //Input a proper error message
		return 3;
	}

	//checks discriminant
	if(disc < 0.0) {
		//mylog(error); //error about imaginary
		return 2;
	}
	else if (disc == 0.0){
	 //mylog(error); //error about single root
	 return 1;
	}

double rooted = sqrt(disc);
*x1 = (-b + rooted);
*x2 = (-b - rooted);
return 0;
}
