program area_rect
    implicit none
    integer :: h,w, area, area1, perimeter
    h = 10
    w = 20

    area1 = area(w,h)
    call calc_perimeter(w,h,perimeter)
    print*,"area=",area1,"perimeter",perimeter
end program area_rect


function area(w1,h1)
    implicit none
    integer ,intent(in):: w1,h1
    integer :: area
    area = w1 *h1
end function area

subroutine calc_perimeter(w,h,perimeter)
    implicit none
    integer :: w,h,perimeter
    perimeter = 2*(w+h)  
end subroutine calc_perimeter