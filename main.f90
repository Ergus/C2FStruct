!
! This file is part of the C2FStruct distribution Copyright (c) 2015 Jimmy
! Aguilar Mena.
!
! This program is free software: you can redistribute it and/or modify it under
! the terms of the GNU General Public License as published by the Free Software
! Foundation, version 3.
!
! This program is distributed in the hope that it will be useful, but WITHOUT
! ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
! FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details.
!
! You should have received a copy of the GNU General Public License along with
! this program. If not, see <http://www.gnu.org/licenses/>.
!

program mymain

  ! access computing environment
  use ISO_FORTRAN_ENV, only : ERROR_UNIT
  implicit none

  type :: mystruct
     real(8) :: x, y, z
     integer(4) :: a, b
  end type mystruct


  integer(4), parameter :: n = 5
  integer :: i
  type(mystruct) :: var
  type(mystruct), dimension(n) :: varlst

  var = mystruct(1.0, 2.0, 3.0, 4, 5)
  write( *, *) "Printing one"
  call print(var);

  do i = 0, n - 1
     varlst(i + 1) = mystruct( &
          5.0 * i, &
          5.0 * i + 1.0, &
          5.0 * i + 2.0, &
          5 * i + 3, &
          5 * i + 4)
  end do

  write( *, *) "Printing list"
  call printlist(n, varlst)

end program mymain
