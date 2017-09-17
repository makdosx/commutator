/*
 * Copyright (c) 2015 Barchampas Gerasimos </makindosx@gmail.com>
 * commutator is a programm to convert electricity values.
 *
 * commutator is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 *
 * commutator is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License, version 3,
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 *
 */
 
 
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main()
{
char p;	
double ampere; 
double volt;
double watt;
double ohm;
printf (".......................ypologismos-metatrpoph reumatos.......................\n");
 printf ("......................pinakas tupwn metrhshs reumatos.......................\n");
 printf ("ampere=entash reumatos\t                                volt=tash reumatos\t\n");
 printf ("watt=isxu reumatos                                ohm=antistash reumatos\t\n");
        printf ("                                                            \n");
printf ("..........................pinakas metatrwpwn reumatos........................\n");  
      printf ("                        metatroph se antistash                           \n"); 
printf ("(1) volt&ampere --> ohm    (2) volt&watt --> ohm      (3) watt&ampere --> ohm\n");
 printf ("                           \n");
      printf ("                        metatroph se entash\n");
printf ("(4) volt&ohm --> ampere    (5) watt&volt --> ampere   (6) watt&ohm --> ampere\n");
 printf ("                           \n");
      printf ("                        metatroph se tash                                \n");
printf ("(7) ampere&ohm --> volt    (8) watt&ampere --> volt   (9) watt&ohm --> volt\n");
 printf ("                           \n");
      printf ("                       metatroph se isxu                              \n");
printf ("(10) volt&ampere --> watt   (11) volt&ohm --> watt     (12) ampere&ohm --> watt\n");
     printf ("                                                                      \n");	 
	     printf ("dialekse matetroph\n");
	      scanf ("%c",&p);
		  switch(p)
		  {   	        
		  case '1':
	    printf ("1 upologismos (antistashs ohm) apo (tash volt & entash ampere)\n");
        printf ("dwse times volt kai ampere\n");
        scanf ("%lf %lf",&volt,&ampere);
        ohm=volt/ampere;
        printf ("h timh ths antistashs ohm einai %lf\n",ohm);
           printf ("                                        \n");
		     break;
		    case '2':
		   printf ("2  upologismos (antistashs ohm) apo (tash volt & isxu watt)\n");
        printf ("dwse times volt kai watt\n");
         scanf ("%lf %lf",&volt,&watt);
          ohm=volt*volt/watt;
          printf ("h timh ths antistashs ohm einai %lf\n",ohm);
           printf ("                                        \n");
             break;
			 case '3':
		   printf ("3  upologismos (antistashs ohm) apo (isxu watt & entash ampere)\n");
           printf ("dwse times watt kai amnpere\n");
            scanf ("%lf %lf",&watt,&ampere);
            ohm=watt/ampere/ampere;
          printf ("h timh ths antistashs ohm einai %lf\n",ohm);  
          printf ("                                         \n");
              break;
			 case '4':
          printf ("4  upologismos (entashs ampere) apo (tash volt & antistash ohm)\n");
           printf ("dwse times volt kai ohm\n");
            scanf ("%lf %lf",&volt,&ohm);
            ampere=volt/ohm;
         printf("h timh ths entashs ampere einai %lf\n",ampere);
          printf ("                                \n");
             break;
			  case '5':
          printf ("5  upologismos (entashs ampere) apo (isxu watt & tash volt)\n");
          printf ("dwse times watt kai volt\n");
           scanf ("%lf %lf",&watt,&volt);
           ampere=watt/volt;
         printf ("h timh ths entashs ampere einai %lf\n",ampere);
		  printf ("                                \n");
		     break;
			  case '6':
		  printf ("6  upologismos (entashs ampere) apo (isxu watt & antistash ohm)\n");
		  printf ("dwse times watt kai ohm\n");
		    scanf ("%lf %lf",&watt,&ohm);
			ampere=watt/ohm; 
			printf ("h timh ths entashs ampere einai %lf\n",sqrt(ampere));  
			 printf ("                                      \n");
			    break;
			     case '7':
			 printf ("7  upologismos (tashs volt) apo (entashs ampere & antistashs ohm)\n");
			 printf ("dwse times ampere kai ohm\n");
			  scanf ("%lf %lf",&ampere,&ohm);
			 volt=ampere*ohm;
			printf ("h timh ths tashs volt einai %lf\n",volt);
		printf ("                                  \n");
		   break;
		    case '8':
		printf ("8  upologismos (tashs volt) apo (isxu watt & entashs ampere)\n");
		  printf ("dwse times watt kai ampere\n");
		    scanf ("%lf %lf",&watt,&ampere);
			volt=watt/ampere;
		printf ("h timh ths tashs volt einai %lf\n",volt);
		  printf ("                                \n");
		     break;
			  case '9':
		  printf ("9  upologismos (tashs volt) apo (isxu watt & antistashs ohm)\n");
		   printf ("dwse times watt kai ohm\n");
		    scanf ("%lf %lf",&watt,&ohm);
			volt=watt*ohm;
			printf ("h timh ths tashs se volt einai %lf\n",sqrt(volt));
			printf ("                                         \n");	 
			   break;
			    case '10':
		  printf ("10  upologismos (isxuos watt) apo (tashs volt & entashs ampere)\n");
		   printf ("dwse times volt kai ampere\n");
		    scanf ("%lf %lf",&volt,&ampere);
			watt=volt*ampere;
		  printf ("h timhs ths ixuos watt einai %lf\n",watt);
		   printf ("                                  \n");
		       break;
			    case '11':
		  printf ("11  upologismos (isxuos watt) apo (tashs volt & antistashs ohm)\n");
		    printf ("dwse times volt kai ohm\n");
			  scanf ("%lf %lf",&volt,&ohm);
			 watt=volt*volt/ohm;
			 printf ("h timh ths isxuos watt einai %lf\n",watt);
			  printf ("                                    \n");
			     break;
				case '12':
		  printf ("12  upologismos (isxuos watt) apo (entashs ampere & antistashs ohm)\n");
		    printf ("dwse times ampere kai ohm\n");
			  scanf ("%lf %lf",&ampere,&ohm);
			watt=ampere*ampere*ohm;
			printf ("h timh ths usxuos watt einai %lf\n",watt);  
		   break;
		}
     return 0;
    
}
