struct Student
{
	int ID;
	char Name[20];
	int grade[3];

};
struct Student student[5];
void BubbleSortPrint(struct Student studentd[],int size)
{
	int i, x=0;
	struct Student temp;

	for (i = 0;i < size;i++)
	{
		for (x = 0;x < size;x++)
		{
			if (((int)studentd[x + 1].Name[0]) <= ((int)studentd[x].Name[0]))
			{
				if (x +1 < size)
				{
					temp = studentd[x + 1];
					studentd[x + 1] = studentd[x];
					studentd[x] = temp;
				}



			}
		}
	}
	
	for ( i = 0; i < size; i++)
	{
		PrintStudent(student[i]);
	
	}
	
}
//BubbleSortPrint(student,5); In main function 
//The First Parameter array itself 
// the 2nd parameter take the size