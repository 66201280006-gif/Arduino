/*โปรแกรมคำนวณ V.1 */
  float x,y ;

void setup() {
  Serial.begin(9600);
  x=10 ;
  y=20 ;
  int a=add (x,y);
  int b=Sub (x,y);
  int c=Mult (x,y);
  float d=divv (x,y);
  Serial.print("add : ");   Serial.print(a);
  Serial.print("Sub : ");   Serial.print(b);
  Serial.print("Mult : ");   Serial.print(c);
  Serial.print("divv : ");   Serial.print(d);


}

void loop() {
  // put your main code here, to run repeatedly:


}

int add (int x , int y) {

  int z=x+y ; // x+y ==>z
  return z ;
}
int Sub (int x , int y) {

  int z=x-y ; // x+y ==>z
  return z ;

}
int Mult (int x , int y) {

  int z=x*y ; // x+y ==>z
  return z ;

}
float divv (float x , float y) {

  float z=x/y ; // x+y ==>z
  return z ;

}
