program rectangle
implicit none
integer,allocatable , dimension(:) :: width,height,area,perimiter
integer :: i,ok,done,arr_size

interface
subroutine cal_values(width,height,area,perimiter)
implicit none
integer,intent(in) :: width(:),height(:)
integer,intent(out) :: area(:),perimiter(:)
end subroutine cal_values
end interface

print *, "input array_size"
read *,arr_size

allocate(width(arr_size),height(arr_size),area(arr_size),perimiter(arr_size),STAT=ok)
if (ok /= 0) then
PRINT * , "colud not allocatearrays"
stop 
endif

