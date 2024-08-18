package Arithmetic


func Addition(a, b float64) float64 {
	return a + b
}

func Subtraction(a, b float64) float64 {
	return a - b
}

func Multiplication(a, b float64) float64 {
	return a * b
}

func Division(a, b float64) float64 {
	if b == 0 {
		return 0
	}
	return a / b
}