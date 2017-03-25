#include<iostream>
#include<fstream>
#include<string.h>
#include<math.h>
#include<stdio.h>
using namespace std;

double arr[25][8];
double recall=0,precision=0,fscore=0;
int i=0;

void add(double arr[25][8],double tp, double tn, double fp, double fn, double TP)
{
   arr[i][0]=(tp/(tp+fp))*100;
   arr[i][1]=(tn/(tn+fn)*100);
   arr[i][2]=(fp/(fp+tp)*100);
   arr[i][3]=(fn/(fn+tn)*100);
   arr[i][4]=tp/(tp+fn);
   arr[i][5]=tp/(tp+fp);
   arr[i][6]=(2*arr[i][4]*arr[i][5])/(arr[i][4]+arr[i][5]);
   arr[i][7]=(int)TP;
   i++;
}
   
int main()
{
    char word[20],word1[20];
    int tn,tp,fn,fp;
    double trueNegative,truePositive,falseNegative,falsePositive;
    tp=0;tn=0;fp=0;fn=0;
    truePositive=0; trueNegative=0; falsePositive=0;falseNegative=0;
    ifstream fin,fin1;
    fin.open("predicted.txt");
    fin1.open("test.txt");
    while(!fin.eof())
    {
        fin>>word;
        fin1>>word1;
        if(strcmp(word,"normal")==0 && strcmp(word1,"normal")==0)
        {
            tn++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"normal")!=0)
        {
            fp++;
            continue;
        }
        else if(strcmp(word,"normal")!=0 && strcmp(word1,"normal")==0)
        {
            fn++;
            continue;
        }
        else if(strcmp(word,"normal")!=0 && strcmp(word1,"normal")!=0)
        {
            tp++;
            continue;
        }

    }
   
    
    truePositive=(double(tp)/10079.00)*100.00;
    trueNegative=(double(tn)/10079.00)*100.00;
    falsePositive=(double(fp)/10079.00)*100.00;
    falseNegative=(double(fn)/10079.00)*100.00;



    fin.close();
    fin1.close();

    add(arr,truePositive,trueNegative,falsePositive,falseNegative,tp);

    //-neptune--------------

    fin.open("predicted.txt");
    fin1.open("test.txt");

    tp=0;tn=0;fp=0;fn=0;
    truePositive=0; trueNegative=0; falsePositive=0;falseNegative=0;
     while(!fin.eof())
    {
        fin>>word;
        fin1>>word1;
        if(strcmp(word,"neptune")==0 && strcmp(word1,"neptune")==0)
        {
            tp++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"neptune")==0)
        {
            fp++;
            continue;
        }
        else if(strcmp(word,"neptune")==0 && strcmp(word1,"normal")==0)
        {
            fn++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"normal")==0)
        {
            tn++;
            continue;
        }

    }
    
    
    truePositive=(double(tp)/10079.00)*100.00;
    trueNegative=(double(tn)/10079.00)*100.00;
    falsePositive=(double(fp)/10079.00)*100.00;
    falseNegative=(double(fn)/10079.00)*100.00;
    


     fin.close();
    fin1.close();
   add(arr,truePositive,trueNegative,falsePositive,falseNegative,tp);
    
    //--back-----------

    fin.open("predicted.txt");
    fin1.open("test.txt");

        tp=0;tn=0;fp=0;fn=0;
    truePositive=0; trueNegative=0; falsePositive=0;falseNegative=0;
      while(!fin.eof())
    {
        fin>>word;
        fin1>>word1;
        if(strcmp(word,"back")==0 && strcmp(word1,"back")==0)
        {
            tp++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"back")==0)
        {
            fp++;
            continue;
        }
        else if(strcmp(word,"back")==0 && strcmp(word1,"normal")==0)
        {
            fn++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"normal")==0)
        {
            tn++;
            continue;
        }

    }
    
    
    truePositive=(double(tp)/10079.00)*100.00;
    trueNegative=(double(tn)/10079.00)*100.00;
    falsePositive=(double(fp)/10079.00)*100.00;
    falseNegative=(double(fn)/10079.00)*100.00;
    
   

     fin.close();
    fin1.close();
     add(arr,truePositive,trueNegative,falsePositive,falseNegative,tp);
    //--butter_overflow-----------

    fin.open("predicted.txt");
    fin1.open("test.txt");

        tp=0;tn=0;fp=0;fn=0;
    truePositive=0; trueNegative=0; falsePositive=0;falseNegative=0;
      while(!fin.eof())
    {
        fin>>word;
        fin1>>word1;
        if(strcmp(word,"butter_overflow")==0 && strcmp(word1,"butter_overflow")==0)
        {
            tp++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"butter_overflow")==0)
        {
            fp++;
            continue;
        }
        else if(strcmp(word,"butter_overflow")==0 && strcmp(word1,"normal")==0)
        {
            fn++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"normal")==0)
        {
            tn++;
            continue;
        }

    }
    
    
    truePositive=(double(tp)/10079.00)*100.00;
    trueNegative=(double(tn)/10079.00)*100.00;
    falsePositive=(double(fp)/10079.00)*100.00;
    falseNegative=(double(fn)/10079.00)*100.00;
    
 

     fin.close();
    fin1.close();
    add(arr,truePositive,trueNegative,falsePositive,falseNegative,tp);
        //ftp_write-----------

    fin.open("predicted.txt");
    fin1.open("test.txt");

        tp=0;tn=0;fp=0;fn=0;
    truePositive=0; trueNegative=0; falsePositive=0;falseNegative=0;
      while(!fin.eof())
    {
        fin>>word;
        fin1>>word1;
        if(strcmp(word,"ftp_write")==0 && strcmp(word1,"ftp_write")==0)
        {
            tp++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"ftp_write")==0)
        {
            fp++;
            continue;
        }
        else if(strcmp(word,"ftp_write")==0 && strcmp(word1,"normal")==0)
        {
            fn++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"normal")==0)
        {
            tn++;
            continue;
        }

    }
    
    
    truePositive=(double(tp)/10079.00)*100.00;
    trueNegative=(double(tn)/10079.00)*100.00;
    falsePositive=(double(fp)/10079.00)*100.00;
    falseNegative=(double(fn)/10079.00)*100.00;
    


     fin.close();
    fin1.close();
     add(arr,truePositive,trueNegative,falsePositive,falseNegative,tp);
            //guess_passwd-----------

    fin.open("predicted.txt");
    fin1.open("test.txt");

        tp=0;tn=0;fp=0;fn=0;
    truePositive=0; trueNegative=0; falsePositive=0;falseNegative=0;
      while(!fin.eof())
    {
        fin>>word;
        fin1>>word1;
        if(strcmp(word,"guess_passwd")==0 && strcmp(word1,"guess_passwd")==0)
        {
            tp++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"guess_passwd")==0)
        {
            fp++;
            continue;
        }
        else if(strcmp(word,"guess_passwd")==0 && strcmp(word1,"normal")==0)
        {
            fn++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"normal")==0)
        {
            tn++;
            continue;
        }

    }
    
    
    truePositive=(double(tp)/10079.00)*100.00;
    trueNegative=(double(tn)/10079.00)*100.00;
    falsePositive=(double(fp)/10079.00)*100.00;
    falseNegative=(double(fn)/10079.00)*100.00;
    

     fin.close();
    fin1.close();
    add(arr,truePositive,trueNegative,falsePositive,falseNegative,tp);
                //imap-----------

    fin.open("predicted.txt");
    fin1.open("test.txt");

        tp=0;tn=0;fp=0;fn=0;
    truePositive=0; trueNegative=0; falsePositive=0;falseNegative=0;
      while(!fin.eof())
    {
        fin>>word;
        fin1>>word1;
        if(strcmp(word,"imap")==0 && strcmp(word1,"imap")==0)
        {
            tp++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"imap")==0)
        {
            fp++;
            continue;
        }
        else if(strcmp(word,"imap")==0 && strcmp(word1,"normal")==0)
        {
            fn++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"normal")==0)
        {
            tn++;
            continue;
        }

    }
    
    
    truePositive=(double(tp)/10079.00)*100.00;
    trueNegative=(double(tn)/10079.00)*100.00;
    falsePositive=(double(fp)/10079.00)*100.00;
    falseNegative=(double(fn)/10079.00)*100.00;
    
   

     fin.close();
    fin1.close();
     add(arr,truePositive,trueNegative,falsePositive,falseNegative,tp);
                    //ipsweep-----------

    fin.open("predicted.txt");
    fin1.open("test.txt");

        tp=0;tn=0;fp=0;fn=0;
    truePositive=0; trueNegative=0; falsePositive=0;falseNegative=0;
      while(!fin.eof())
    {
        fin>>word;
        fin1>>word1;
        if(strcmp(word,"ipsweep")==0 && strcmp(word1,"ipsweep")==0)
        {
            tp++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"ipsweep")==0)
        {
            fp++;
            continue;
        }
        else if(strcmp(word,"ipsweep")==0 && strcmp(word1,"normal")==0)
        {
            fn++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"normal")==0)
        {
            tn++;
            continue;
        }

    }
    
    
    truePositive=(double(tp)/10079.00)*100.00;
    trueNegative=(double(tn)/10079.00)*100.00;
    falsePositive=(double(fp)/10079.00)*100.00;
    falseNegative=(double(fn)/10079.00)*100.00;
    
  

     fin.close();
    fin1.close();
     add(arr,truePositive,trueNegative,falsePositive,falseNegative,tp);
                    //land-----------

    fin.open("predicted.txt");
    fin1.open("test.txt");

    tp=0;tn=0;fp=0;fn=0;
    truePositive=0; trueNegative=0; falsePositive=0;falseNegative=0;
      while(!fin.eof())
    {
        fin>>word;
        fin1>>word1;
        if(strcmp(word,"land")==0 && strcmp(word1,"land")==0)
        {
            tp++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"land")==0)
        {
            fp++;
            continue;
        }
        else if(strcmp(word,"land")==0 && strcmp(word1,"normal")==0)
        {
            fn++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"normal")==0)
        {
            tn++;
            continue;
        }

    }
    
    
    truePositive=(double(tp)/10079.00)*100.00;
    trueNegative=(double(tn)/10079.00)*100.00;
    falsePositive=(double(fp)/10079.00)*100.00;
    falseNegative=(double(fn)/10079.00)*100.00;
    
    

     fin.close();
    fin1.close();
    add(arr,truePositive,trueNegative,falsePositive,falseNegative,tp);
                    //loadmodule-----------

    fin.open("predicted.txt");
    fin1.open("test.txt");

        tp=0;tn=0;fp=0;fn=0;
    truePositive=0; trueNegative=0; falsePositive=0;falseNegative=0;
      while(!fin.eof())
    {
        fin>>word;
        fin1>>word1;
        if(strcmp(word,"loadmodule")==0 && strcmp(word1,"loadmodule")==0)
        {
            tp++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"loadmodule")==0)
        {
            fp++;
            continue;
        }
        else if(strcmp(word,"loadmodule")==0 && strcmp(word1,"normal")==0)
        {
            fn++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"normal")==0)
        {
            tn++;
            continue;
        }

    }
    
    
    truePositive=(double(tp)/10079.00)*100.00;
    trueNegative=(double(tn)/10079.00)*100.00;
    falsePositive=(double(fp)/10079.00)*100.00;
    falseNegative=(double(fn)/10079.00)*100.00;
    


     fin.close();
    fin1.close();
     add(arr,truePositive,trueNegative,falsePositive,falseNegative,tp);
                        //multihop-----------

    fin.open("predicted.txt");
    fin1.open("test.txt");

        tp=0;tn=0;fp=0;fn=0;
    truePositive=0; trueNegative=0; falsePositive=0;falseNegative=0;
      while(!fin.eof())
    {
        fin>>word;
        fin1>>word1;
        if(strcmp(word,"multihop")==0 && strcmp(word1,"multihop")==0)
        {
            tp++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"multihop")==0)
        {
            fp++;
            continue;
        }
        else if(strcmp(word,"multihop")==0 && strcmp(word1,"normal")==0)
        {
            fn++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"normal")==0)
        {
            tn++;
            continue;
        }

    }
    
    
    truePositive=(double(tp)/10079.00)*100.00;
    trueNegative=(double(tn)/10079.00)*100.00;
    falsePositive=(double(fp)/10079.00)*100.00;
    falseNegative=(double(fn)/10079.00)*100.00;
    


     fin.close();
    fin1.close();
     add(arr,truePositive,trueNegative,falsePositive,falseNegative,tp);
                           //nmap-----------

    fin.open("predicted.txt");
    fin1.open("test.txt");

        tp=0;tn=0;fp=0;fn=0;
    truePositive=0; trueNegative=0; falsePositive=0;falseNegative=0;
      while(!fin.eof())
    {
        fin>>word;
        fin1>>word1;
        if(strcmp(word,"nmap")==0 && strcmp(word1,"nmap")==0)
        {
            tp++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"nmap")==0)
        {
            fp++;
            continue;
        }
        else if(strcmp(word,"nmap")==0 && strcmp(word1,"normal")==0)
        {
            fn++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"normal")==0)
        {
            tn++;
            continue;
        }

    }
    
    
    truePositive=(double(tp)/10079.00)*100.00;
    trueNegative=(double(tn)/10079.00)*100.00;
    falsePositive=(double(fp)/10079.00)*100.00;
    falseNegative=(double(fn)/10079.00)*100.00;
    


     fin.close();
    fin1.close();
   add(arr,truePositive,trueNegative,falsePositive,falseNegative,tp);
                           //perl-----------

    fin.open("predicted.txt");
    fin1.open("test.txt");

        tp=0;tn=0;fp=0;fn=0;
    truePositive=0; trueNegative=0; falsePositive=0;falseNegative=0;
      while(!fin.eof())
    {
        fin>>word;
        fin1>>word1;
        if(strcmp(word,"perl")==0 && strcmp(word1,"perl")==0)
        {
            tp++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"perl")==0)
        {
            fp++;
            continue;
        }
        else if(strcmp(word,"perl")==0 && strcmp(word1,"normal")==0)
        {
            fn++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"normal")==0)
        {
            tn++;
            continue;
        }

    }
    
    
    truePositive=(double(tp)/10079.00)*100.00;
    trueNegative=(double(tn)/10079.00)*100.00;
    falsePositive=(double(fp)/10079.00)*100.00;
    falseNegative=(double(fn)/10079.00)*100.00;
    
    

     fin.close();
    fin1.close();
     add(arr,truePositive,trueNegative,falsePositive,falseNegative,tp);
                           //phf-----------

    fin.open("predicted.txt");
    fin1.open("test.txt");

        tp=0;tn=0;fp=0;fn=0;
    truePositive=0; trueNegative=0; falsePositive=0;falseNegative=0;
      while(!fin.eof())
    {
        fin>>word;
        fin1>>word1;
        if(strcmp(word,"phf")==0 && strcmp(word1,"phf")==0)
        {
            tp++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"phf")==0)
        {
            fp++;
            continue;
        }
        else if(strcmp(word,"phf")==0 && strcmp(word1,"normal")==0)
        {
            fn++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"normal")==0)
        {
            tn++;
            continue;
        }

    }
    
    
    truePositive=(double(tp)/10079.00)*100.00;
    trueNegative=(double(tn)/10079.00)*100.00;
    falsePositive=(double(fp)/10079.00)*100.00;
    falseNegative=(double(fn)/10079.00)*100.00;
    
   

     fin.close();
    fin1.close();
     add(arr,truePositive,trueNegative,falsePositive,falseNegative,tp);
                           //pod-----------

    fin.open("predicted.txt");
    fin1.open("test.txt");

        tp=0;tn=0;fp=0;fn=0;
    truePositive=0; trueNegative=0; falsePositive=0;falseNegative=0;
      while(!fin.eof())
    {
        fin>>word;
        fin1>>word1;
        if(strcmp(word,"pod")==0 && strcmp(word1,"pod")==0)
        {
            tp++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"pod")==0)
        {
            fp++;
            continue;
        }
        else if(strcmp(word,"pod")==0 && strcmp(word1,"normal")==0)
        {
            fn++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"normal")==0)
        {
            tn++;
            continue;
        }

    }
    
    
    truePositive=(double(tp)/10079.00)*100.00;
    trueNegative=(double(tn)/10079.00)*100.00;
    falsePositive=(double(fp)/10079.00)*100.00;
    falseNegative=(double(fn)/10079.00)*100.00;
    
   

     fin.close();
    fin1.close();
     add(arr,truePositive,trueNegative,falsePositive,falseNegative,tp);
                           //portsweep-----------

    fin.open("predicted.txt");
    fin1.open("test.txt");

        tp=0;tn=0;fp=0;fn=0;
    truePositive=0; trueNegative=0; falsePositive=0;falseNegative=0;
      while(!fin.eof())
    {
        fin>>word;
        fin1>>word1;
        if(strcmp(word,"portsweep")==0 && strcmp(word1,"portsweep")==0)
        {
            tp++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"portsweep")==0)
        {
            fp++;
            continue;
        }
        else if(strcmp(word,"portsweep")==0 && strcmp(word1,"normal")==0)
        {
            fn++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"normal")==0)
        {
            tn++;
            continue;
        }

    }
    
    
    truePositive=(double(tp)/10079.00)*100.00;
    trueNegative=(double(tn)/10079.00)*100.00;
    falsePositive=(double(fp)/10079.00)*100.00;
    falseNegative=(double(fn)/10079.00)*100.00;
    


     fin.close();
    fin1.close();
     add(arr,truePositive,trueNegative,falsePositive,falseNegative,tp);
                           //rootkit-----------

    fin.open("predicted.txt");
    fin1.open("test.txt");

        tp=0;tn=0;fp=0;fn=0;
    truePositive=0; trueNegative=0; falsePositive=0;falseNegative=0;
      while(!fin.eof())
    {
        fin>>word;
        fin1>>word1;
        if(strcmp(word,"rootkit")==0 && strcmp(word1,"rootkit")==0)
        {
            tp++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"rootkit")==0)
        {
            fp++;
            continue;
        }
        else if(strcmp(word,"rootkit")==0 && strcmp(word1,"normal")==0)
        {
            fn++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"normal")==0)
        {
            tn++;
            continue;
        }

    }
    
    
    truePositive=(double(tp)/10079.00)*100.00;
    trueNegative=(double(tn)/10079.00)*100.00;
    falsePositive=(double(fp)/10079.00)*100.00;
    falseNegative=(double(fn)/10079.00)*100.00;
    
    

     fin.close();
    fin1.close();
     add(arr,truePositive,trueNegative,falsePositive,falseNegative,tp);
                           //satan-----------

    fin.open("predicted.txt");
    fin1.open("test.txt");

        tp=0;tn=0;fp=0;fn=0;
    truePositive=0; trueNegative=0; falsePositive=0;falseNegative=0;
      while(!fin.eof())
    {
        fin>>word;
        fin1>>word1;
        if(strcmp(word,"satan")==0 && strcmp(word1,"satan")==0)
        {
            tp++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"satan")==0)
        {
            fp++;
            continue;
        }
        else if(strcmp(word,"satan")==0 && strcmp(word1,"normal")==0)
        {
            fn++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"normal")==0)
        {
            tn++;
            continue;
        }

    }
    
    
    truePositive=(double(tp)/10079.00)*100.00;
    trueNegative=(double(tn)/10079.00)*100.00;
    falsePositive=(double(fp)/10079.00)*100.00;
    falseNegative=(double(fn)/10079.00)*100.00;
    


     fin.close();
    fin1.close();
    add(arr,truePositive,trueNegative,falsePositive,falseNegative,tp);
    
                           //smurf-----------

    fin.open("predicted.txt");
    fin1.open("test.txt");

        tp=0;tn=0;fp=0;fn=0;
    truePositive=0; trueNegative=0; falsePositive=0;falseNegative=0;
      while(!fin.eof())
    {
        fin>>word;
        fin1>>word1;
        if(strcmp(word,"smurf")==0 && strcmp(word1,"smurf")==0)
        {
            tp++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"smurf")==0)
        {
            fp++;
            continue;
        }
        else if(strcmp(word,"smurf")==0 && strcmp(word1,"normal")==0)
        {
            fn++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"normal")==0)
        {
            tn++;
            continue;
        }

    }
    
    
    truePositive=(double(tp)/10079.00)*100.00;
    trueNegative=(double(tn)/10079.00)*100.00;
    falsePositive=(double(fp)/10079.00)*100.00;
    falseNegative=(double(fn)/10079.00)*100.00;
    
 
     fin.close();
     add(arr,truePositive,trueNegative,falsePositive,falseNegative,tp);
     
                            //spy-----------

    fin.open("predicted.txt");
    fin1.open("test.txt");

        tp=0;tn=0;fp=0;fn=0;
    truePositive=0; trueNegative=0; falsePositive=0;falseNegative=0;
      while(!fin.eof())
    {
        fin>>word;
        fin1>>word1;
        if(strcmp(word,"spy")==0 && strcmp(word1,"spy")==0)
        {
            tp++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"spy")==0)
        {
            fp++;
            continue;
        }
        else if(strcmp(word,"spy")==0 && strcmp(word1,"normal")==0)
        {
            fn++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"normal")==0)
        {
            tn++;
            continue;
        }

    }
    
    
    truePositive=(double(tp)/10079.00)*100.00;
    trueNegative=(double(tn)/10079.00)*100.00;
    falsePositive=(double(fp)/10079.00)*100.00;
    falseNegative=(double(fn)/10079.00)*100.00;
    

     fin.close();
    fin1.close();
     add(arr,truePositive,trueNegative,falsePositive,falseNegative,tp);

                           //teardrop-----------

    fin.open("predicted.txt");
    fin1.open("test.txt");

        tp=0;tn=0;fp=0;fn=0;
    truePositive=0; trueNegative=0; falsePositive=0;falseNegative=0;
      while(!fin.eof())
    {
        fin>>word;
        fin1>>word1;
        if(strcmp(word,"teardrop")==0 && strcmp(word1,"teardrop")==0)
        {
            tp++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"teardrop")==0)
        {
            fp++;
            continue;
        }
        else if(strcmp(word,"teardrop")==0 && strcmp(word1,"normal")==0)
        {
            fn++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"normal")==0)
        {
            tn++;
            continue;
        }

    }
    
    
    truePositive=(double(tp)/10079.00)*100.00;
    trueNegative=(double(tn)/10079.00)*100.00;
    falsePositive=(double(fp)/10079.00)*100.00;
    falseNegative=(double(fn)/10079.00)*100.00;
    
   

     fin.close();
    fin1.close();
     add(arr,truePositive,trueNegative,falsePositive,falseNegative,tp);
                           //warezclient-----------

    fin.open("predicted.txt");
    fin1.open("test.txt");

        tp=0;tn=0;fp=0;fn=0;
    truePositive=0; trueNegative=0; falsePositive=0;falseNegative=0;
      while(!fin.eof())
    {
        fin>>word;
        fin1>>word1;
        if(strcmp(word,"warezclient")==0 && strcmp(word1,"warezclient")==0)
        {
            tp++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"warezclient")==0)
        {
            fp++;
            continue;
        }
        else if(strcmp(word,"warezclient")==0 && strcmp(word1,"normal")==0)
        {
            fn++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"normal")==0)
        {
            tn++;
            continue;
        }

    }
    
    
    truePositive=(double(tp)/10079.00)*100.00;
    trueNegative=(double(tn)/10079.00)*100.00;
    falsePositive=(double(fp)/10079.00)*100.00;
    falseNegative=(double(fn)/10079.00)*100.00;
    
  

     fin.close();
    fin1.close();
     add(arr,truePositive,trueNegative,falsePositive,falseNegative,tp);
                           //warezmaster-----------

    fin.open("predicted.txt");
    fin1.open("test.txt");

        tp=0;tn=0;fp=0;fn=0;
    truePositive=0; trueNegative=0; falsePositive=0;falseNegative=0;
      while(!fin.eof())
    {
        fin>>word;
        fin1>>word1;
        if(strcmp(word,"warezmaster")==0 && strcmp(word1,"warezmaster")==0)
        {
            tp++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"warezmaster")==0)
        {
            fp++;
            continue;
        }
        else if(strcmp(word,"warezmaster")==0 && strcmp(word1,"normal")==0)
        {
            fn++;
            continue;
        }
        else if(strcmp(word,"normal")==0 && strcmp(word1,"normal")==0)
        {
            tn++;
            continue;
        }

    }
    
    
    truePositive=(double(tp)/10079.00)*100.00;
    trueNegative=(double(tn)/10079.00)*100.00;
    falsePositive=(double(fp)/10079.00)*100.00;
    falseNegative=(double(fn)/10079.00)*100.00;
    
    fin.close();
    fin1.close();
     add(arr,truePositive,trueNegative,falsePositive,falseNegative,tp);

     ofstream fout("result.csv");
    cout<<"Compiling....\nFollowing is the confusion matrix, that we have calculated.\nNOTE: All the figures are in the form of percentages.\n";
    for(i=0;i<23;i++)
    {
        fout<<"\n";
        for(int j=0;j<8;j++)
        {
           fout<<arr[i][j]<<"\t";
        }
    }
    fout.close();
    cout<<endl;
    return 0;
}