class GradedActivity
7 {
8 private:
9 double score; // To hold the numeric score
10 public:
11  // Default constructor
12 GradedActivity()
13 { score = 0.0; }
14
15 // Constructor
16 GradedActivity(double s)
17 { score = s; }
18
19 // Mutator function
20 void setScore(double s)
21  { score = s; }
22
23 // Accessor functions
24 double getScore() const
25 { return score; }
26
27 char getLetterGrade() const;
28 };

/*Essay class
Design anEssay class that is derived from theGradedActivity class presented in this
chapter. TheEssay class should determine the grade a student receives on an essay.
The student’s essay score can be up to 100, and is determined in the following manner:
•Grammar: 30 points
•Spelling: 20 points
•Correct length: 20 points
•Content: 30 points
Demonstrate the class in a simple program.*/
