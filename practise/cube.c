#include <stdio.h>
#include <stdlib.h>    
 
#define FRONT 0
#define UP 1
#define DOWN 2
#define RIGHT 3
#define LEFT 4
#define BACK 5

void SolveInit(int f[6][3][3]){
    

    
    int i, j, k;
    for(i=0; i<6; i++){
        for  (j=0; j<3; j++){
            for(k=0; k<3; k++){
    
                switch(i){
                    case FRONT:
                        f[i][j][k]='B';
                        break;
                    case UP:
                        f[i][j][k]='Y';
                        break;
                    case DOWN:
                        f[i][j][k]='W';
                        break;
                    case RIGHT:
                        f[i][j][k]='R';
                        break;
                    case LEFT:
                        f[i][j][k]='O';
                        break;
                    case BACK:
                        f[i][j][k]='G';
                        break;
    
                }
            }
        }
    }
}
 
void Display(int faces[6][3][3]){
    
    //Function to display the faces of the cube
    
    int i, j, k;
    for(i=0; i<6; i++){
        
        switch(i){
            case FRONT:
                printf("FRONT FACE:\n");
                break;
            case UP:
                printf("UP FACE:\n");
                break;
            case DOWN:
                printf("DOWN FACE:\n");
                break;
            case RIGHT:
                printf("RIGHT FACE:\n");
                break;
            case LEFT:
                printf("LEFT FACE:\n");
                break;
            case BACK:
                printf("BACK FACE:\n");
                break;
        }
        
        for(j=0;j<3;j++){
            for(k=0;k<3;k++){
                printf("%c ", (char)faces[i][j][k]);
            }
            printf("\n");
        }
        
        printf("\n\n");     
    }
}
 
void BackClock(int faces[6][3][3])
{
    //Back face, clockwise rotation
    int temp[3]; 
    int x; //counter
 
    //move the outer edges affected by the rotation
    for (x=0; x<3; x++)
    {
        temp[x] = faces[UP][0][x];
        faces[UP][0][x] = faces[RIGHT][x][2];
        faces[RIGHT][x][2] = faces[DOWN][2][2-x];
        faces[DOWN][2][2-x] = faces[LEFT][2-x][0];
        faces[LEFT][2-x][0] = temp[x];
        
    }
 
    //now rotate the face surface
    FaceClock(BACK, faces);
}
 
void BackCounter(int faces[6][3][3])
{
    //Back face, counterclockwise rotation
    int temp[3]; 
    int x; //counter
 
    //move the outer edges affected by the rotation
    for (x=0; x<3; x++)
    {
        temp[x] = faces[UP][0][x];
        faces[UP][0][x] = faces[LEFT][2-x][0];
        faces[LEFT][2-x][0] = faces[DOWN][2][2-x];
        faces[DOWN][2][2-x] = faces[RIGHT][x][2];
        faces[RIGHT][x][2] = temp[x];
        
    }
 
    //now rotate the face surface
    FaceCounter(BACK, faces);
}
 
void DownClock(int faces[6][3][3])
{
    //  down face, clockwise rotation
    int temp[3]; 
    int x; //counter
 
    //move the outer edges affected by the rotation
    for (x=0; x<3; x++)
    {
        temp[x] = faces[FRONT][2][x];
        faces[FRONT][2][x] = faces[LEFT][2][x];
        faces[LEFT][2][x] = faces[BACK][2][x];
        faces[BACK][2][x] = faces[RIGHT][2][x];
        faces[RIGHT][2][x] = temp[x];
        
    }
 
    //now rotate the face surface
    FaceClock(DOWN, faces);
}
 
void DownCounter(int faces[6][3][3])
{
    //  down face, counterclockwise rotation
    int temp[3]; 
    int x; //counter
 
    //move the outer edges affected by the rotation
    for (x=0; x<3; x++)
    {
        temp[x] = faces[FRONT][2][x];
        faces[FRONT][2][x] = faces[RIGHT][2][x];
        faces[RIGHT][2][x] = faces[BACK][2][x];
        faces[BACK][2][x] = faces[LEFT][2][x];
        faces[LEFT][2][x] = temp[x];
        
    }
 
    //now rotate the face surface
    FaceCounter(DOWN, faces);
}
 
void FrontClock(int faces[6][3][3])
{
    //  front face, clockwise rotation
    int temp[3]; 
    int x; //counter
 
    //move the outer edges affected by the rotation
    for (x=0; x<3; x++)
    {
        temp[x] = faces[UP][2][x];
        faces[UP][2][x] = faces[LEFT][2-x][2];
        faces[LEFT][2-x][2] = faces[DOWN][0][2-x];
        faces[DOWN][0][2-x] = faces[RIGHT][x][0];
        faces[RIGHT][x][0] = temp[x];
        
    }
 
    //now rotate the face surface
    FaceClock(FRONT, faces);
}
 
void FrontCounter(int faces[6][3][3])
{
    //  front face, counterclockwise rotation
    int temp[3]; 
    int x; //counter
 
    //move the outer edges affected by the rotation
    for (x=0; x<3; x++)
    {
        temp[x] = faces[UP][2][x];
        faces[UP][2][x] = faces[RIGHT][x][0];
        faces[RIGHT][x][0] = faces[DOWN][0][2-x];
        faces[DOWN][0][2-x] = faces[LEFT][2-x][2];
        faces[LEFT][2-x][2] = temp[x];
        
    }
 
    //now rotate the face surface
    FaceCounter(FRONT, faces);
}
 
void LeftClock(int faces[6][3][3])
{
    //  left face, clockwise rotation
    int temp[3]; 
    int x; //counter
 
    //move the outer edges affected by the rotation
    for (x=0; x<3; x++)
    {
        temp[x] = faces[UP][x][0];
        faces[UP][x][0] = faces[BACK][2-x][2];
        faces[BACK][2-x][2] = faces[DOWN][x][0];
        faces[DOWN][x][0] = faces[FRONT][x][0];
        faces[FRONT][x][0] = temp[x];
        
    }
 
    //now rotate the face surface
    FaceClock(LEFT, faces);
}
 
void LeftCounter(int faces[6][3][3])
{
    //  left face, counter clockwise rotation
    int temp[3]; 
    int x; //counter
 
    //move the outer edges affected by the rotation
    for (x=0; x<3; x++)
    {
        temp[x] = faces[UP][x][0];
        faces[UP][x][0] = faces[FRONT][x][0];
        faces[FRONT][x][0] = faces[DOWN][x][0];
        faces[DOWN][x][0] = faces[BACK][2-x][2];
        faces[BACK][2-x][2] = temp[x];
        
    }
 
    //now rotate the face surface
    FaceCounter(LEFT, faces);
}
 
void RightClock(int faces[6][3][3])
{
    //  right face, clockwise rotation
    int temp[3]; 
    int x; //counter
 
    //move the outer edges affected by the rotation
    for (x=0; x<3; x++)
    {
        temp[x] = faces[UP][x][2];
        faces[UP][x][2] = faces[FRONT][x][2];
        faces[FRONT][x][2] = faces[DOWN][x][2];
        faces[DOWN][x][2] = faces[BACK][2-x][0];
        faces[BACK][2-x][0] = temp[x];
        
    }
 
    //now rotate the face surface
    FaceClock(RIGHT, faces);
}
 
void RightCounter(int faces[6][3][3])
{
    //  right face, counterclockwise rotation
    int temp[3]; 
    int x; //counter
 
    //move the outer edges affected by the rotation
    for (x=0; x<3; x++)
    {
        temp[x] = faces[UP][x][2];
        faces[UP][x][2] = faces[BACK][2-x][0];
        faces[BACK][2-x][0] = faces[DOWN][x][2];
        faces[DOWN][x][2] = faces[FRONT][x][2];
        faces[FRONT][x][2] = temp[x];
        
    }
 
    //now rotate the face surface
    FaceCounter(RIGHT, faces);
}
 
void UpClock(int faces[6][3][3])
{
    //  up face, clockwise rotation
    int temp[3]; 
    int x; //counter
 
    //move the outer edges affected by the rotation
    for (x=0; x<3; x++)
    {
        temp[x] = faces[FRONT][0][x];
        faces[FRONT][0][x] = faces[RIGHT][0][x];
        faces[RIGHT][0][x] = faces[BACK][0][x];
        faces[BACK][0][x] = faces[LEFT][0][x];
        faces[LEFT][0][x] = temp[x];
        
    }
 
    //now rotate the face surface
    FaceClock(UP, faces);
}
 
void UpCounter(int faces[6][3][3])
{
    //  up face, counterclockwise rotation
    int temp[3]; 
    
    int x; //counter
 
    //move the outer edges affected by the rotation
    for (x=0; x<3; x++)
    {
        temp[x] = faces[FRONT][0][x];
        faces[FRONT][0][x] = faces[LEFT][0][x];
        faces[LEFT][0][x] = faces[BACK][0][x];
        faces[BACK][0][x] = faces[RIGHT][0][x];
        faces[RIGHT][0][x] = temp[x];
        
    }
 
    //now rotate the surface
    FaceCounter(UP, faces);
}
 
void FaceCounter(int face, int faces[6][3][3])
{
    //subroutine to rotate the contents of a face
    //counter clockwise
    int temp;
 
    //corners first
    temp=faces[face][0][0];
    faces[face][0][0] = faces[face][0][2];
    faces[face][0][2] = faces[face][2][2];
    faces[face][2][2] = faces[face][2][0];
    faces[face][2][0] = temp;
 
    //then middles
    temp=faces[face][0][1];
    faces[face][0][1] = faces[face][1][2];
    faces[face][1][2] = faces[face][2][1];
    faces[face][2][1] = faces[face][1][0];
    faces[face][1][0] = temp;
}
 
void FaceClock(int face, int faces[6][3][3])
{
    //subroutine to rotate the contents of a face
    //clockwise
    int temp;
 
    //corners first
    temp=faces[face][0][0];
    faces[face][0][0] = faces[face][2][0];
    faces[face][2][0] = faces[face][2][2];
    faces[face][2][2] = faces[face][0][2];
    faces[face][0][2] = temp;
 
    //then middles
    temp=faces[face][0][1];
    faces[face][0][1] = faces[face][1][0];
    faces[face][1][0] = faces[face][2][1];
    faces[face][2][1] = faces[face][1][2];
    faces[face][1][2] = temp;
}
 
int check(int faces[6][3][3])
{
    
    int x,y,z; 
    int misplaced = 0; 
 
   
    for (x=0; x<6; x++)
        for (y=0; y<3; y++)
            for (z=0; z<3; z++)
                if (faces[x][y][z] != faces[x][1][1])
                { misplaced++; }
 
    return misplaced;
}
 
int main(){
    int faces[6][3][3];     
    
    SolveInit(faces);
    Display(faces);
    
    return 0;
}