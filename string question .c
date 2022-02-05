   "  sting  condition  " :            
	                       *string is a group of character terminated with a null character \0.
                                                                                     " syntex "     :
	                      *{char string-name [size]}
	                      here string  name is any name of yours. size is used to "lenth of the string".
                                        eg                      : char  a[20];
                                                                        "  instilazation string " :
	                     *we have different ways of instializing string.
                                       eg                      :   char str[ = "aditya";   ,    char str2[7]=" aditya" ;  ,     char str3[7]= {'A' 'D'  'I'  'T' 'Y'  'A' \0};    ,   printf{"%s",}.....

                                                                            "  reading a  string "     :
                                       *scanf("%S "  string name );

                                      #include<stdio.h>
                                      int ,main()
                                      {
                                             char str[20];
                                             printf("enter a string?");
                                            scanf("%s",str) ;
                                            printf("you enter %s",s);
                                            return 0;
                                      } 
                                            out put 1   :enter the string ?aditya you entered ADITYA 
                                            out put 2   : enter  the string ? aditya collage you enter a ADITYA COLLAGE

                                                                              "  gets of string name   "   :

                                          #include <stdio.h>
                                             int main()
                                          {
                                            char str[20]
                                            printf("enter a string" ) ;
                                            gets(str);
                                            printf ("you entered "%s" , s) ;
                                           return 0;
                                           }
                                                                                "  string operation "   :

                                          all the string operation are included in standerd header file    #include <sting.h>
 
                                          *string funcition defined  in string.h
    
                                         1 : string length :
                                                               strlen()
                                                                 find out the length of the string
                                          
                                          syntex : 
                                                           strlen(string name );
                                      
                                             eg    :

                                                     # include <stdio.h>
                                                    #include < string.h >
                                                     int main ()
                                                    {
                                                         char    a[20];
                                                          printf ("enter a string" ) ;
                                                         gets (A);
                                                        n=strlen (A);
                                                        printf(" length is %d ,n) ;
                                                        retuern 0 ;
                                                    } 
                                                        output : 
                                                       enter a string : collage
                                                      length is :7

                                            * 2 :string copy:
                                                         it copys the contain of source string destination string

                                                syntex  :
                                                              strcpy (destination , source ) ;
                                                             strcpy (b,a);

                                                     
                                                     # include <stdio.h>
                                                    #include < string.h >
                                                     int main ()
                                                    {
                                                         char    a[10] b [20];
                                                          printf ("enter a string" ) ;
                                                         gets (A);
                                                        strcpy (A,b);
                                                        printf("  %s " ,b) ;
                                                        retuern 0 ;
                                                    } 

                                                 out put : 
                                                           enter a string : aditya 
                                                             ADITYA
                                                      3 : string reverse :
                                                                                 strrev()
                                                                syntex :

                                                                           strrev( string name) 
                                                       # include <stdio.h>
                                                    #include < string.h >
                                                     int main ()
                                                    {
                                                         char    a[10] ;
                                                          printf ("enter a string" ) ;
                                                         gets (A);
                                                        strrev(A,);
                                                        printf("  %s " ,a) ;
                                                        retuern 0 ;
                                                  }
 
                                                4 : strting lower  :
                                                                           strlwr ()
                                                                         strlwr(string name )
;
                                                    # include <stdio.h>
                                                    #include < string.h >
                                                     int main ()
                                                    {
                                                         char    a[10] , b[20 ] ;
                                                          printf ("enter a string" ) ;
                                                         gets (A);
                                                        strlwr(A,);
                                                        printf("  %s " ,a) ;
                                                        retuern 0 ;
                                                    }

                                                    out put 
                                                                     enter a string : aditya 
                                                           
                                                       5 : string upper :strupr()

                                                               strupr ( string name)
                                                     # include <stdio.h>
                                                    #include < string.h >
                                                     int main ()
                                                    {
                                                         char    a[10] , b[20] ;
                                                          printf ("enter a string" ) ;
                                                         gets (A);
                                                        strupr(A,);
                                                        printf("  %s " ,a) ;
                                                        retuern 0 ;
                                                    }    

                                                     out put : enter as string : aditya 



                                                         6 :  " string comaparision "       :
                                                 *   it comparers the first string and second string and it reaturns 0 if both string are same
                                                    syntex :
                                                               strcmp (string name ) 

                                                      # include <stdio.h>
                                                    #include < string.h >
                                                     int main ()
                                                    {
                                                         char    a[10] , b[20] ;
                                                          printf ("enter a string 1" ) ;
                                                         gets (A);
                                                         printf("enter a string 2") ;
                                                        n=strcmp(a,b) ;
                                                         if(n==0)
                                                        printf(" same ") ;
                                                       else if 
                                                      printf ("not same " ) ;
                                                       return 0;
                                                  }
    
                                                   out put :
                                                                   enter a stiring 1 : aditya 
                                                                     enter a string 2 : collage 

                                                  7 :   "string concitination" :
                                                *   it join or concitination the first string  with second string will be  stored  in first string 
                                                       syntex : 
                                                                 strcat (string name ) ;
     
                                                      # include <stdio.h>
                                                    #include < string.h >
                                                     int main ()
                                                    {
                                                         char    a[10] , b[20] ;
                                                          printf ("enter a string 1" ) ;
                                                         gets (A);
                                                         printf(" enter a strin 2") ;
                                                         strcat (a,b);
                                                         printf("%s",a);
                                                          return 0;
                                                  }
    
                                                   out put :
                                                                  enter a string 1  : aditya
                                                                   enter a string 2 : collage 




