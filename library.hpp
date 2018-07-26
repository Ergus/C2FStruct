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


#ifndef LIBRARY_H
#define LIBRARY_H

#include <cstdio>
#include <cstdlib>
#include <cstring>

struct mystruct {
	double x, y, z;
	int a, b;
};

void print(const mystruct *in);
void print(const size_t n, const mystruct *in);

extern "C" {
	void print_(const mystruct *in);

	void printlist_(const int *n, const mystruct *in);
}

#endif // LIBRARY_H
