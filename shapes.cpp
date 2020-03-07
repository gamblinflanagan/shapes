/*
 learn:
 
 //trees (2 exewrcises at end of chapter on trees)
 
*/
#include <iostream>
using namespace std;

int main()
{
    int treeheight = 0;
    int row = 0;
    int row2 = 1;
    
    cout<<"enter the height of the diamond :";
    cin>>treeheight;


    for(int i = 0; i < treeheight; i++)
    {
        //cout<<"row : "<<row<<"\t";
 
        int counter = 0;
      
        while(counter < treeheight - row)
        {
            cout<<"#";
            counter ++;
        
            
        }
        counter = 0;
        
        while(counter < row*2+1)
        {
            cout<<"*";
            counter++;
        }
        
            cout<<endl;
            row++;
    }
 
    for(int j = 0; j < treeheight; j++)
    {
        //cout<<"row : "<<row2<<"\t";
        
        int counter2 = treeheight + 1;
        
        if(row2 != treeheight)
        {
                while(counter2 > treeheight - row2)
                {
                    cout<<"#";
                    counter2 --;
            
            
                }
        }
            counter2 = treeheight+1;
        
        
            if(treeheight == 1)
            {
                while(counter2 > row2 * 2 + 1)
                {
                    cout<<"*";
                    counter2--;
                }

            }
            else
            {
                while(counter2 > row2 * 2 - (treeheight-2))
                {
                    cout<<"*";
                    counter2--;
                }
            }
        
        
        cout<<endl;
        row2++;
        row++;
    }
//-------------------------------------------------------------------------------------------------
 
   
    int treeheight2 = 0;
    int row3 = 0;

    cout<<"enter the height of the side tree :\t";
    cin>>treeheight2;
    
    for(int k = 0; k < treeheight2; k++)
    {
        int count = 0;

        while(count < row3)
        {
            cout<<"*";
            count++;
        }

        cout<<endl;
        row3++;
    }
    row3 = 0;
    
    for(int l = 0; l < treeheight2; l++)
    {
        int count2 = 0;

        while(count2 < treeheight2 - row3)
        {
            cout<<"*";
            count2++;
        }
        
        cout<<endl;
        row3++;

    }
//-------------------------------------------------------------------------------------------------

    int squareheight = 0;
    int row4 = 0;
    
    cout<<"enter the height of the square :\t";
    cin>>squareheight;
    
    for(int x = 0; x < squareheight; x++)
    {
    
        int count3 = 0;
        
        while(count3 < squareheight)
        {
            cout<<"* ";
            count3++;
        }
        
        
        cout<<endl;
        row4++;
    }
//-------------------------------------------------------------------------------------------------

    //for(;;) = infinite loop
    
    int number = 0;
    
    cout<<"enter a number between 0 and 5 :\t";
    cin>>number;
    
    switch (number)
    {
        case 0:
            cout<<"zero";
            break;
            
        case 1:
            cout<<"one";
            break;
            
        case 2:
            cout<<"two";
            break;
            
        case 3:
            cout<<"three";
            break;
            
        case 4:
            cout<<"four";
            break;
            
        case 5:
            cout<<"five";
            break;
            
        default:
            cout<<"zero"; //if statement for logic optional 
            break;
    }
    
    
    return 0;
}
