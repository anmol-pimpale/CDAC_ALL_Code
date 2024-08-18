program addNumbers
  implicit none
  integer :: a, b, sum

  a = 12
  b = 5
  sum = add(a, b)
  print *, 'addition of two numbers:', sum

contains

  integer function add(x, y)
    integer, intent(in) :: x, y
    add = x + y
    print * , add
  end function add

end program addNumbers