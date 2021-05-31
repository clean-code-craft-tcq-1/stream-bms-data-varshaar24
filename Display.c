/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

typedef struct
{
    float Temperature;
    float Soc;
    
}BatteryParam_tst;

BatteryParam_tst BatteryParam_st; 

void SendOperation(BatteryParam_tst BatteryParam_st)
{
    printf("{\"Temperature\":%0.2f,\"SOC\":%0.2f}\n",BatteryParam_st.Temperature,BatteryParam_st.Soc); // print in the console
    
}

int main()
{
    for(int i=0;i<20;i++)
    {
        BatteryParam_st.Temperature = (float)i;
        BatteryParam_st.Soc = (float)(i*2);
        
        SendOperation(BatteryParam_st);
        
    }

    return 0;
}
