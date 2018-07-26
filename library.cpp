//
// This file is part of the C2FStruct distribution Copyright (c) 2015 Jimmy
// Aguilar Mena.
//
// This program is free software: you can redistribute it and/or modify it under
// the terms of the GNU General Public License as published by the Free Software
// Foundation, version 3.
//
// This program is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
// FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
// details.
//
// You should have received a copy of the GNU General Public License along with
// this program. If not, see <http://www.gnu.org/licenses/>.
//

#include <iostream>

#include "library.hpp"

using namespace std;

void print(const mystruct *in)
{
	cout << " x: " << in->x
	     << " y: " << in->y
	     << " z: " << in->z << endl;

	cout << " a: " << in->a
	     << " b: " << in->b << endl;
}

void print(const size_t n, const mystruct *in)
{
	for (size_t i = 0; i < n; ++i)
		print(&in[i]);
}


void print_(const mystruct *in)
{
	print(in);
}

void printlist_(const int *n, const mystruct *in)
{
	print(*n, in);
}
