program calculate_area_and_volume
  implicit none
  real :: pi, r, h, area, volume

  pi = 3.14
  r = 5
  h = 6

  area = surface_area_cylinder(pi, r, h)
  volume = volume_cylinder(pi, r, h)

  print *, "Surface Area: ", area
  print *, "Volume: ", volume

contains

  function surface_area_cylinder(pi, r, h) 
    implicit none
    real, intent(in) :: pi, r, h
    real :: surface_area_cylinder
    surface_area_cylinder = 2 * pi * r * (r + h)
  end function surface_area_cylinder

  function volume_cylinder(pi, r, h) 
    implicit none
    real, intent(in) :: pi, r, h
    real :: volume_cylinder
    volume_cylinder = pi * r * r * h
  end function volume_cylinder

end program calculate_area_and_volume