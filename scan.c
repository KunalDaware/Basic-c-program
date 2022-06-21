//Program to display 5 times Hello on screen useing  for loop



# include<stdio.h>

//demonstration of iteration using scanf
//taking veriable from user

void Display(int iNo)  
{
	int iCnt = 0;

//         1             2          3
for(iCnt=0;iCnt<=5; iCnt++)
 {
	printf("hello world\n");  //4	

  }


}

int main()
{
	int iValue = 0;

	printf("ENTER YOUR NUMBER\n");
	scanf(" %d,&ivalue");
	 Display(iValue);	    //function call

     return 0;

}