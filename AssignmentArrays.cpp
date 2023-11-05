#include<iostream>
#include<array>
using namespace std;

int getcolumnsize(int matrix[4][5]){
	int columns;
	for (int i=0;i<4;i++){
		for (int j=0;j<5;j++){
			if(matrix[i][j]!=0){
				columns++;
			}
		}
	}
	return columns;
}

void generateoutput(int columns, int matrix[4][5]){
	int sparsematrix[3][columns];
	int k=0; 
	int i=0;
	while (i<4){
		int j=0;
		while(j<5){
			if(matrix[i][j]!=0){
				sparsematrix[0][k] = i;  
                sparsematrix[1][k] = j;  
                sparsematrix[2][k] = matrix[i][j];  
                k++;  
			}
		 j++;
		}
		i++;
	}
	for(int i=0 ;i<3; i++)  
    {  
        for(int j=0; j<columns; j++)  
        {  
            cout<< sparsematrix[i][j];  
            cout<<"\t"; 
        }  
        cout<<"\n";  
    }  
}


int main(){
	int columns = 0; 
	int matrix [4][5]= 
	{
		{5,0,2,0,0},
		{0,0,0,7,0},
		{0,0,3,0,0},
		{0,0,6,0,2}
	};
	columns= getcolumnsize(matrix);
	generateoutput(columns,matrix);
}