package main
import "fmt"
//Author structure
type Author struct {
	Name string
	branch string
	particles int
	salary int
}
//menstion with reciver

func (a *Author)show(){
	fmt.Println("Author name",a.Name)
	fmt.Println("Author branch",a.branch)
	fmt.Println("Author particles",a.particles)
	fmt.Println("Author salary",a.salary)
	}
type mutable struct{
	a int 
	b int
}
func (m *mutable)StayTheSame(){
	m.a=5
	m.b=7

}
func(m *mutable)Mutate(){
	m.a=10
	m.b=20

}
func main(){
	res :=Author{
		Name:"Rahul",
		branch:"CSE",
		particles:10,
		salary:10000,
		}
	
	res.show()
	m:=&mutable{9,0}
	fmt.Println(m)
	m.StayTheSame()
	fmt.Println(m)
	m.Mutate()
	fmt.Println(m)

	}