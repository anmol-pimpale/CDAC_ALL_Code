program calculate_area_and_volume
  implicit none
  real :: pi, r, h, area, volume

  pi = 3.14
  r = 5
  h = 6

  call calculate_surface_area_and_volume(pi, r, h, area, volume)

  print *, "Surface Area: ", area
  print *, "Volume: ", volume

contains

  subroutine calculate_surface_area_and_volume(pi, r, h, area, volume)
    implicit none
    real, intent(in) :: pi, r, h
    real, intent(out) :: area, volume
    area = 2 * pi * r * (r + h)
    volume = pi * r * r * h
  end subroutine calculate_surface_area_and_volume

end program calculate_area_and_volume