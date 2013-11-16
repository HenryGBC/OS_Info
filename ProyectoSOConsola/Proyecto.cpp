// Proyecto.cpp: define el punto de entrada de la aplicación de consola.
//





#include <stdio.h>
#include <iostream>
#include <string.h>
#include <sstream>
#ifdef __linux__
    #include <iostream>
	#include <string.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <time.h>
 #elif _WIN32
    #include <conio.h>
    #include <windows.h>
     #include <stdlib.h>
     #include <stdio.h>
     #include <sstream>
#endif

using namespace std;

void Ejecutar(char comando []);
string exec(char *cmd);
int main(int argc, char *argv[])
{
     char comando [30];
     strcpy(comando, argv[1]);
    //Version del Kernel
   #ifdef __linux__
    Ejecutar(comando);

    #elif _WIN32
    Ejecutar(comando);
    #endif



}

#ifdef __linux__
void Ejecutar(char comando [])
{
 if (strcmp(comando, "--kernel-version")==0)
    {
           system("uname -r");

    }

    //NÃºmero de procesos ejecutÃ¡ndose en el sistema.
    if(strcmp(comando, "--running-processes")==0)
    {

         system("ps aux|wc -l");
    }

    //Total de memoria RAM.
    if(strcmp(comando, "--mem-total")==0)
     {
         system("free -g | grep Mem | sed 's/\\s\\+/,/g' | cut -d , -f2");
     }

    //Total de memoria RAM libre.
    if(strcmp(comando, "--mem-total-free")==0)
     {
         system("free -g | grep Mem | sed 's/\\s\\+/,/g' | cut -d , -f4");
     }

    // Total de memoria SWAP.
     if(strcmp(comando, "--mem-swap")==0)
     {
         system("free -g | grep Swap | sed 's/\\s\\+/,/g' | cut -d , -f2");
     }

     // Total de memoria SWAP libre en el sistema.
     if(strcmp(comando, "--mem-swap-free")==0)
     {
         system("free -g | grep Swap | sed 's/\\s\\+/,/g' | cut -d , -f4");
     }

     //Lista los discos existentes en el sistema
     if(strcmp(comando,"--disk-list")==0)
     {
         system("lsblk -fm | sed 's/\\s\\+/,/g' | cut -d , -f1");
     }

     //Lista las particiones existentes en todos las unidades del sistema.
     if(strcmp(comando, "--partitions-list")==0)
     {
         system("df -h | sed 's/\\s\\+/,/g' | cut -d , -f1");
     }


     //Lista de interfaces de red.
     if(strcmp(comando, "--net-list")==0)
     {
         system("ifconfig -s | sed 's/\\s\\+/,/g' | cut -d , -f1");
     }

     //Lista de interfaces junto con su ip
     if(strcmp(comando, "--net-list-ip")==0)
     {
         system("ifconfig | sed -e '/inet/!d' -e 's/.*addr://' -e 's/[ ].*//'");
     }

     //Muestra el espacio usado en los discos montados.
     if(strcmp(comando, "--disk-space")==0)
     {
         system("df -k | sed 's/\\s\\+/,/g' | cut -d , -f3");
     }

     //Muestra el usuario actual
     if(strcmp(comando, "--current-user")==0)
     {
         system("whoami");
     }
     //Muestra la fecha actual
     if(strcmp(comando, "--date-time")==0)
     {
         system("date");
     }

     //Muestra el tiempo que ha durado encendida mi computadora
     if(strcmp(comando, "--uptime")==0)
     {
         system("uptime | sed 's/\\s\\+/,/g' | cut -d , -f4");
     }


}
    #elif _WIN32
    string exec(char *cmd)
    {

      string result ="";
      char  buffer[128];

      FILE* pipe = _popen(cmd, "r");

      if(!pipe)
            return "Error";

      while(!feof(pipe))
      {

                   if(fgets(buffer, 128, pipe)!=NULL)
                                  result += buffer;




      }

      _pclose(pipe);

          return result;
    }
    string numprocesos(char *cmd)
    {
       stringstream stream;
      string result ="";
      char  buffer[128];
      int c=0;
      FILE* pipe = _popen(cmd, "r");

      if(!pipe)
            return "Error";

      while(!feof(pipe))
      {

                   if(fgets(buffer, 128, pipe)!=NULL)
                                 c++; //result += buffer;





      }
         stream << c;
         result = stream.str();
       _pclose(pipe);

          return result;
    }
    void Ejecutar(char comando [])
    {

        //NÃºmero de procesos ejecutÃ¡ndose en el sistema.
        if(strcmp(comando, "--running-processes")==0)
        {
               string resul ="";
               resul = numprocesos("tasklist");
               cout<<resul;


        }
       //Total de Memoria RAM
         if (strcmp(comando, "--mem-total")==0)
        {
                  int i = 0;
               string resul ="";
               string resultado ="";
               resul = exec("systeminfo | find \"memoria física\"");

               istringstream iss(resul);
               do
               {
                string sub;
                iss >> sub;

                if(i==5)
                {

                  resultado = sub;
                }
                i++;
                } while (iss);
                cout<< resultado;
        }

        //Total de Memoria RAM LIBRE

         if (strcmp(comando, "--mem-total-free")==0)
        {

               int i = 0;
               string resul ="";
               string resultado ="";
               resul = exec("systeminfo | find \"física disponible\" \n");
               istringstream iss(resul);
               do
               {
                string sub;
                iss >> sub;

                if(i==3)
                {

                  resultado = sub;
                }
                i++;
                } while (iss);
                cout<< resultado;

        }

        //Total de Memoria Swap

          if (strcmp(comando, "--mem-swap")==0)
        {



                 int i = 0;
               string resul ="";
               string resultado ="";
               resul = exec("systeminfo | find  \"tamaño máximo\" \n");
               istringstream iss(resul);
               do
               {
                string sub;
                iss >> sub;

                if(i==4)
                {

                  resultado = sub;
                }
                i++;
                } while (iss);
                cout<< resultado;


        }

        //Total de Memoria Swap Libre

          if (strcmp(comando, "--mem-swap-free")==0)
        {


                  int i = 0;
               string resul ="";
               string resultado ="";
               resul = exec("systeminfo | find  \"virtual: disponible\" \n");
               istringstream iss(resul);
               do
               {
                string sub;
                iss >> sub;

                if(i==3)
                {

                  resultado = sub;
                }
                i++;
                } while (iss);
                cout<< resultado;


        }

		 if (strcmp(comando, "--net-list")==0)
        {   
               string resultado ="";
               resultado = exec("ipconfig | find /i \"Adaptador\"");
               cout<< resultado;
			  
        }
		if (strcmp(comando, "--net-list-ip")==0)
        {   
			  string resultado ="";
			  string resultado2="";
               resultado = exec("ipconfig | find /i \"ipv4\"");
			    istringstream iss(resultado);
               int i=0;
			   int j=16;

				do
               {
                string sub;
                iss >> sub;
				if(i==j){ resultado2 += sub+"\n"; j+=17;}
                i++;
                } while (iss);
           	  cout <<resultado2;
			 
        }

		if (strcmp(comando, "--current-user")==0)
        {   
               string resultado ="";
               resultado = exec("echo %USERDOMAIN%\%USERNAME%");
               cout<< resultado;			   
        }
		if (strcmp(comando, "--date-time")==0)
        {   
               string resultado ="";
               resultado = exec("echo %date% / %time%");
               cout<< resultado;			   
        }
		if (strcmp(comando, "--uptime")==0)
        {   
               string resultado ="";
			   string hora_act="";
			   string hora_up="";


               hora_act = exec("echo %time%");
			   resultado = exec("systeminfo | find /i \"tiempo\"");
			   istringstream iss(resultado);
               int i=0;
			   do
               {
                string sub;
                iss >> sub;
				if(i==6) hora_up = sub;
                i++;
                } while (iss);
			    
			   resultado = hora_up;
			   
               cout<< resultado;			   
        }
	if (strcmp(comando, "--disk-list")==0)
        {   
               string resultado ="";
               resultado = exec("wmic logicaldisk get caption,volumename");
               cout<< resultado;	
	     }
		if (strcmp(comando, "--disk-space")==0)
        {   
               string resultado ="";
               resultado = exec("wmic logicaldisk get size");
               cout<< resultado;	
        }
		if (strcmp(comando, "--partitions-list")==0)
        {   
               string resultado ="";
               resultado = exec("wmic diskdrive get caption,partitions");
               cout<< resultado;	
        }


    }
#endif
