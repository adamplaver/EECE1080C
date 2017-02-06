#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

void line(int width, char fill_char);
void solidRectangle(int width, int height, char fill_char);
void framedRectangle(int width, int height, char fill_char, int frame_width);  
void rightLowerTriangle(int size, char fill_char);
void rightUpperTriangle(int size, char fill_char);
void square(int size, char fill_char);
void equaliteralTrangle(int height, char fill_char);
void diamond(int height, char fill_char);

int main(){
	int menu;
	cout << "Welcome to Picture Maker!\n";
	cout << "Which shape should I draw (0 to exit menu)? ";
	cin >> menu;
	switch(menu){
		case 0: break; // Exit and Quit
		case 1: { // A horizontal line.  Request the fill character. Request the width of the line.
			char fc; int w,h;
			cout << "Line Drawing\nFill Character? ";
			cin >> fc;
			cout << "Width? ";
			cin >> w;
			line(w,fc);
			return main();
		}
		case 2: { // A solidly filled in rectangle. Request the fill character. Request the width and height, in that order.
			char fc; int w,h;
			cout << "Solid Rectange\nFill Character? ";
			cin >> fc;
			cout << "Width: ";
			cin >> w;
			cout << "Height: ";
			cin >> h;
			solidRectangle(w,h,fc);
			return main();
		}
		case 3: { // A framed rectangle.  Request the fill character. Request the width,  height, and border width in that order.
			char fc; int w,h,ow;
			cout << "Framed Rectange\nFill Character? ";
			cin >> fc;
			cout << "Width: ";
			cin >> w;
			cout << "Height: ";
			cin >> h;
			cout << "Outline Width: ";
			cin >> ow;
			framedRectangle(w,h,fc,ow);
			return main();
		}
		case 4: { // A right-isosceles-triangle with the lower left filled in.  Request the fill character. Request the height.  The width will be the same value.
			char fc; int h;
			cout << "Lower Left - Right Isosceles Triangle\nFill Character? ";
			cin >> fc;
			cout << "Height: ";
			cin >> h;
			rightLowerTriangle(h,fc);
			return main();
		}
		case 5: { // A right-isosceles-triangle with the upper left filled in.  Request the fill character. Request the height.  The width will be the same value.
			char fc; int h;
			cout << "Lower Left - Right Isosceles Triangle\nFill Character? ";
			cin >> fc;
			cout << "Height: ";
			cin >> h;
			rightUpperTriangle(h,fc);
			return main();
		}
		case 6: { // Display a solidly filled-in square with the given size (size x size) and fill_char.
			char fc; int s;
			cout << "Solid Square\nFill Character? ";
			cin >> fc;
			cout << "Size: ";
			cin >> s;
			square(s,fc);
			return main();
		}
		case 7: { // Display equilateral Triangle of a given height and fill character
			char fc; int h;
			cout << "Equilateral Triangle\nFill Character? ";
			cin >> fc;
			cout << "Height: ";
			cin >> h;
			equaliteralTrangle(h,fc);
			return main();
		}
		case 8: { // Display a Diamond of a given height and fill character. Must be an odd numbered height.
			char fc; int h;
			cout << "Diamond\nFill Character? ";
			cin >> fc;
			cout << "Height: ";
			cin >> h;
			while(h%2 == 0){
				cout << "Height: ";
				cin >> h;
			}
			diamond(h,fc);
			return main();
		} 
	}
	return 0;
}

void line(int width, char fill_char){
	for(int x = 1;x<=width;x++){
		cout << fill_char;
	}
	cout << endl;
	return;
}
void solidRectangle(int width, int height, char fill_char){
	for(int y = 1;y<=height;y++){
		for(int x = 1;x<=width;x++){
			cout << fill_char;
		}
		cout << endl;
	}
}
void framedRectangle(int width, int height, char fill_char, int frame_width){
	for(int y = 1;y<=height;y++){
		if(y <= frame_width || y > (height - frame_width)){
			for(int x = 1;x<=width;x++){
				cout << fill_char;
			}
			cout << endl;
		}else{
			for(int x = 1;x<=width;x++){
				if(x <= frame_width || x > (width - frame_width)){
					cout << fill_char;
				}else{
					cout << " ";
				}
			}
			cout << endl;
		}
	}
}
void rightLowerTriangle(int size, char fill_char){
	for(int y = 1;y<=size;y++){
		for(int x = 1;x<=size;x++){
			if(x>y){
				cout << " ";
			}else{
				cout << fill_char;
			}
		}
		cout << endl;
	}
}
void rightUpperTriangle(int size, char fill_char){
	for(int y = size;y>0;y--){
		for(int x = 1;x<=size;x++){
			if(x>y){
				cout << " ";
			}else{
				cout << fill_char;
			}
		}
		cout << endl;
	}
}
void square(int size, char fill_char){
	for(int y = 1;y<=size;y++){
		for(int x = 1;x<=size;x++){
			cout << fill_char;
		}
		cout << endl;
	}
}
void equaliteralTrangle(int height, char fill_char){
	for(int y = height;y>0;y--){
		for(int x = 1;x<=height;x++){
			if(x>=y){
				cout << fill_char;
			}else{
				cout << " ";
			}
		}
		for(int x = y;x<=height-1;x++){
			if(x>=y){
				cout << fill_char;
			}else{
				cout << " ";
			}
		}
		cout << endl;
	}
}
void diamond(int height, char fill_char){
	for(int y = height;y>0;y--){
		for(int x = 1;x<=height;x++){
			if(x>=y){
				cout << fill_char;
			}else{
				cout << " ";
			}
		}
		for(int x = y;x<=height-1;x++){
			if(x>=y){
				cout << fill_char;
			}else{
				cout << " ";
			}
		}
		cout << endl;
	}
	for(int y = 1;y<=height;y++){
		for(int x = 1;x<=height;x++){
			if(x>=y){
				cout << fill_char;
			}else{
				cout << " ";
			}
		}
		for(int x = y;x<=height-1;x++){
			if(x>=y){
				cout << fill_char;
			}else{
				cout << " ";
			}
		}
		cout << endl;
	}
}