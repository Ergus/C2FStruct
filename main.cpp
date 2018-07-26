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

int main()
{
	mystruct var = { 1.0, 2.0, 3.0, 4, 5 };

	cout << "Printing one" << endl;
	print(&var);

	const int n = 5;
	mystruct *varlst = (mystruct *) malloc(n * sizeof(mystruct));

	for (size_t i = 0; i < n; ++i) {
		varlst[i] = { .x = 5.0 * i,
		              .y = 5.0 * i + 1,
		              .z = 5.0 * i + 2,
		              .a = 5 * (int)i + 3,
		              .b = 5 * (int)i + 4 };
	}

	cout << "Printing list" << endl;
	print(n, varlst);

	cout << "===================" << endl;
	cout << "Printing one" << endl;
	print_(&var);
	cout << "Printing list" << endl;
	printlist_(&n, varlst);

	return 0;
}
