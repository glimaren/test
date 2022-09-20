/*
 * swap sketch
 * demonstrates changing two values unsing global variables
 */

int x; //x and y is global values
int y; 

void setup()
{
	Serial.begin(9600); 
}

void loop()
{
 	x = random(10); //pick random value
 	y = random(10);

	Serial.print("the value of x and y before swapping are: ");
	Serial.print(x); Serial.print(","); Serial.println(y);
	swap();

	Serial.print("the value of x and y after swapping are: ");
	Serial.print(x); Serial.print(","); Serial.println(y);Serial.println();

	delay(1000);

}

void swap()
{
	int temp;
	temp = x;
	x = y;
	y = temp;

}

