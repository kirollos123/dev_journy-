class Student:
    def __init__(self, name, id):
        self.name = name
        self.id = id
        self.gpa = 0
        self.grades_sum = 0
        self.total_subjects = 0
 
    def get_avg(self):
        if self.total_subjects == 0:
            return 0
        return self.grades_sum / self.total_subjects
 
    def add_course_grade(self, grade):
        self.grades_sum += grade
        self.total_subjects += 1
 
 
    def print(self):
        avg = self.get_avg()
        print(self.name, 'grades average is', avg)
 
 
mostafa = Student('Mostafa', 10010123)
mostafa.add_course_grade(10)
mostafa.add_course_grade(20)
mostafa.add_course_grade(60)
mostafa.print()