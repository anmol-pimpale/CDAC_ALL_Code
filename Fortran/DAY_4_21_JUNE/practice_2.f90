PROGRAM practice_2
    IMPLICIT NONE
    INTEGER, PARAMETER :: size = 400
    REAL(KIND=8) :: a(size), b(size), c(size), alpha
    INTEGER :: i

    alpha = 0.001d0

    DO i = 1, size
        a(i) = i
        b(i) = i
        c(i) = 0.0d0
    END DO

    DO i = 1, size
        c(i) = a(i) + alpha*b(i)
    END DO

    DO i = 1, size
        WRITE (*,*) c(i)
    END DO
END PROGRAM practice_2