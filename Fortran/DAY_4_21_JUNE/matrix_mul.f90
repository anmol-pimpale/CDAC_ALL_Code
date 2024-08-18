PROGRAM matrix_multiplication
  IMPLICIT NONE

  INTEGER, PARAMETER :: n = 3
  REAL, DIMENSION(n, n) :: A, B, C

  ! Initialize matrices A and B
  A = RESHAPE((/1, 2, 3, 4, 5, 6, 7, 8, 9/), (/n, n/))
  B = RESHAPE((/9, 8, 7, 6, 5, 4, 3, 2, 1/), (/n, n/))

  ! Matrix multiplication
  C = MATMUL(A, B)

  ! Print the result
  WRITE (*,*) 'Matrix C:'
  integer :: i
  DO i = 1, n
    WRITE (*,*) C(i, :)
  END DO

END PROGRAM matrix_multiplication