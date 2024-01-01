class Employe:
    def __init__(self,Id,Name,Gender,city,salary):
        self.id=Id
        self.name=Name
        self.gender=Gender
        self.city=city
        self.salary=salary
        print()
        print()
        print("ID:-",self.id)
        print("Name:-",self.name)
        print("Gender:-",self.gender)
        print("City:-",self.city)
        print("Salary:-",self.salary)

id=input("Enter Id:-")
nme=input("Enter Name:-")
gen=input("Enter gender:-")
cit=input("Enter city:-")
sal=input("Enter salary:-")

obj=Employe
obj(id,nme,gen,cit,sal)