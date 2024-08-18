! program rectangle_area
  implicit none
!   real :: length, width, area

!   length = 5.0
!   width = 3.0

!   call calculate_area(length, width, area)

!   print *, 'Area of rectangle:', area

! contains
pprogram rectangle_area
  implicit none
  real :: length, width, area

  print *, "Enter the length of the rectangle: "
  read *, length
  print *, "Enter the width of the rectangle: "
  read *, width

  call calculate_area(length, width, area)
  print *, "The area of the rectangle is: ", area

contains

  subroutine calculate_area(l, w, a)
    real, intent(in) :: l, w
    real, intent(out) :: a
    a = l * w
  end subroutine calculate_area

end program rectangle_area