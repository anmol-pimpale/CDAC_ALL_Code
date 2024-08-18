program temp
  implicit none
  real :: tempC, tempF

  tempF = 9.0 / 5.0 * 10.0 + 32.0

  tempC = 5.0 / 9.0 * (tempF - 32.0)

  print *,"Temperature in celcius : ", tempC
  print *, "Temperature in Fahrenheit  : ", tempF

end program temp

