! program calculateArea
! implicit none
! real radius,area 
! real,parameter :: pi =3.14
! area = pi * 4**2
! print *,'print the area',area
! end program calculateArea    

PROGRAM circle_area
  IMPLICIT NONE

  REAL :: radius, area, pi

  WRITE (*,*) "Enter the radius of the circle: "
  READ (*,*) radius

  pi = 3.14159
  area = pi * radius ** 2

  WRITE (*,*) "The area of the circle is: ", area

END PROGRAM circle_area