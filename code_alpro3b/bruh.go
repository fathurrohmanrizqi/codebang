package main

import "fmt"

type person struct{
	name string
	age int
}
type student struct {
	person
	grade int
}


func main(){
	var s1 = student{}
	s1.name = "wick"
	s1.grade = 2
	s1.person.age = 22
	//var s4 = student{name: "wayne", grade: }

	fmt.Println(s1.name)
	fmt.Println(s1.grade)
	fmt.Println(s1.age)
}