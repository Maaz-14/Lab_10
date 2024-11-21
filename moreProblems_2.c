#include<stdio.h>
struct Point{
    int x_coordinate;
    int y_coordinate;
} point1, point2;
int distance_x;
int distance_y;
void Distance(struct Point point1,struct Point point2){
    distance_x= point1.x_coordinate-point2.x_coordinate;
    distance_y= point1.y_coordinate-point2.y_coordinate;

}

int main(){
    int length, width;
    printf("\nEnter x coordinate of point 1 : ");
    scanf("%d",&point1.x_coordinate); 
    printf("\nEnter y coordinate of point 1 : ");
    scanf("%d",&point1.y_coordinate); 
    printf("\nEnter x coordinate of point 2 : ");
    scanf("%d",&point2.x_coordinate); 
    printf("\nEnter y coordinate of point 1 : ");
    scanf("%d",&point2.y_coordinate); 
    Distance(point1,point2);
    printf("\nEnter length of Rectangle : ");
    scanf("%d",&length);
    printf("\nEnter Width of Rectangle : ");
    scanf("%d",&width);

    if((distance_x<=length) && (distance_y<=width)){
        printf("\nPoint lies inside rectangle");
    }
    else printf("\nPoint lies outside rectangle");
    return 0;
}