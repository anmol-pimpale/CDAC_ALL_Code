! program do_loop
! implicit none

! integer :: i,n
! do i = 1, 10, 1
!     print * , "i =",i
! end do
! end program do_loop


program do_loop
implicit none

integer :: i,n
n=10
do i = n,1, -1
    print * , "i =",i
end do
end program do_loop