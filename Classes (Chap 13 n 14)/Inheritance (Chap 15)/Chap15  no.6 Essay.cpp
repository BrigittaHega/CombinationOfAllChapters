class GradedActivity
{
	private:
		double score; // To hold the numeric score
	public:
// Default constructor
		GradedActivity(double);

// Constructor
GradedActivity(double s)
{ score = s; }

// Mutator function
void setScore(double s)
{ score = s; }

 // Accessor functions
 double getScore() const
 { return score; }

 char getLetterGrade() const;
};

/*Essay class
Design anEssay class that is derived from theGradedActivity class presented in this
chapter. TheEssay class should determine the grade a student receives on an essay.
The student�s essay score can be up to 100, and is determined in the following manner:
�Grammar: 30 points
�Spelling: 20 points
�Correct length: 20 points
�Content: 30 points
Demonstrate the class in a simple program.*/
