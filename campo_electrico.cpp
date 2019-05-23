#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;

int main ()
{
float m = 7294.29;
int q = 2;
int t_i= 0;
float x[t_i] = (1,0);
float v[t_i] =(0,1);
float step_t= 0.1;


	double *x_1;
	x_1 = new   double [N];
	double *v_1;
	v_1 = new   double [N];


	double *t;
	t= new double [N];

	x_1[0]=0;


	v_1[0]=0;
	

	int i =1;
	t[0] = 0; 

	double x_1k_1, x_1k_2, x_1k_3, x_1k_4; 
	double v_1k_1, v_1k_2, v_1k_3, v_1k_4;


	while (i < N)
	{
	
	t[i] =t[i-1] + dt;

	x_1k_1 = dt * v_1[i-1];


	v_1k_1 = dt * (1/m) * (-gamma * v_1[i-1] - 2*k * x_1[i-1] + k*u_2[i-1] + sin(omega*t[i-1])  ;
	
	
	x_1k_2 = dt * (v_1[i-1] + v_1k_1/2);
	

	v_1k_2 = dt * (1/m) * (-gamma * (v_1[i-1] + v_1k_1/2) - 2*k * (x_1[i-1] +x_1k_1/2)  + k* (u_2[i-1] + u_2k_1/2)   + sin(omega*(t[i-1] +dt/2))  ;
	
	x_1k_3 = dt * (v_1[i-1] + v_1k_1/2 + v_1k_2/3);
	


	v_1k_3 = dt * (1/m) * (-gamma * (v_1[i-1] + v_1k_2/2) - 2*k * (x_1[i-1] + x_1k_2/2)  + k* (u_2[i-1] + U_2k_2/2)   + sin(omega*(t[i-1] +dt/2))  ;


	
	x_1k_4 = dt * (v_1[i-1] + v_1k_1/2 + v_1k_2/3);
	
	
	
	
	x_1[i] = x_1[i-1] + 1/6*(x_1k_1 + 2*x_1k_2 + 2*x_1k_3 + x_1k_4);
	
	v_1[i] = v_1[i-1] + 1/6*(v_1k_1 + 2*v_1k_2 + 2*v_1k_3 + v_1k_4);
	

	i++;
	
ofstream outfile;
outfile.open(datos.dat);
outfile << t << " " << x << " " << y << endl;
 outfile.close();


return 0;
}
