PROGRAM vector_add
  IMPLICIT NONE

  INTEGER, PARAMETER :: size = 400
  INTEGER :: a(size), aa(size)
  INTEGER :: i

 ! Initialize the vectors
  DO i = 1, size
    a(i) = i - 1    !becauese in c index start with 0 but in frotran index start from 1 that why we use i-1 to achiev this 
  END DO

 ! Add two vectors
  DO i = 1, size
    aa(i) = a(i) * a(i)
  END DO

 ! Print the output
  DO i = 1, size
    PRINT *, aa(i)
  END DO
END PROGRAM vector_add