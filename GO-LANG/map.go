package main
import "fmt"

func main() {
	var a= map[string]string{"brand":"Ford","model":"Mustang","year":"1964","day":""}
	b:=map[string]int{"Oslo":1,"Bergen":2,"Trondhein":3,"Stavangr":4}
	fmt.Println(a)
	fmt.Println(b)

var c = make(map[string]string)
c["brand"]="Renault"
c["model"]="Kwid"
c["year"]="1964"

d := make(map[string]int)
d["Oslo"]=1
d["Bergen"]=2
d["Trondhein"]=3
d["Stavangr"]=4

fmt.Println(c)
fmt.Println(d)

var  e =make(map[string]string)
e["brand"]="Renualt"
e["model"]="Kwid"
e["year"]="1964"

fmt.Println("value of brand in map a:",a["brand"])
a["brand"]="Kia"
fmt.Println("value of brand in map a:",a["brand"])

val1,ok1 :=a["brand"] //checking for existing key and its value
val2,ok2 :=a["color"] //checking for non existing key and its vlue
val3,ok3 :=a["day"]//checking for exiting key and its vlue
_,ok4 :=a["model"]//only checking for existing key and its value

fmt.Println(val1,ok1)
fmt.Println(val2,ok2)
fmt.Println(val3,ok3)
fmt.Println(ok4)
fmt.Println(a)

}
