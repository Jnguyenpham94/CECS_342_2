# Generic programming with python

# 645.41, 37.59, 76.41, 5.31, -34.23, 1.11, 1.10, 23.46, 635.47, -876.32, 467.83, 62.2

# Hal, 20; Susann, 31; Dwight, 19; Kassandra, 21; Lawrence, 25; Cindy, 22; Cory, 27; 
# Mac, 19; Romana, 27; Doretha, 32; Danna, 20; Zara, 23; Rosalyn, 26; Risa, 24; Benny, 
# 28; Juan, 33; Natalie, 25


numbers = [645.41, 37.59, 76.41, 5.31, -34.23, 1.11, 1.10, 23.46, 635.47, -876.32, 467.83, 62.2]

class Person:
    def __init__(self, name, age) -> None:
        self.name = name
        self.age = age
        
    def __str__(self) -> str:
        return self.name + " " + str(self.age)
    
    def __repr__(self) -> str:
        return self.name + " " + str(self.age)

if __name__ == "__main__":
    # print (f"Unsorted {numbers}")
    numbers.sort()
    print (f"Sorted numbers: \n {numbers}")
    people = [Person("Hal", 20),
    Person("Susann", 31),
    Person("Natalie", 25),
    Person("Dwight", 19),
    Person("Kassandra", 21),
    Person("Lawrence", 25),
    Person("Cindy", 22),
    Person("Cory", 27),
    Person("Mac", 19),
    Person("Romana", 27),
    Person("Doretha", 32),
    Person("Danna", 20),
    Person("Zara", 23),
    Person("Rosalyn", 26),
    Person("Risa", 24),
    Person("Benny", 28),
    Person("Juan", 33)]

    people.sort(key=lambda x : x.name)
    print("SORT by name:")
    # for i in range(len(people)):
    #     print(str(people[i]))
    print(people)
        
    print("\nSORT by age: ")
    people.sort(key=lambda x : x.age)
    # for i in range(len(people)):
    #     print(str(people[i]))
    print(people)